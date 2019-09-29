#include "tcpclient.h"
#include <QHostAddress>

TCPClient::TCPClient(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pTcpSocket = new QTcpSocket(this);

	setWindowTitle(QStringLiteral("[Client]"));

	ui.buttonSend->setEnabled(false);

	connect(ui.buttonConnect, &QPushButton::clicked, this, &TCPClient::onButtonConnectClicked);
	connect(ui.buttonSend, &QPushButton::clicked, this, &TCPClient::onButtonSendClicked);
	connect(ui.buttonExit, &QPushButton::clicked, this, &TCPClient::onButtonExitClicked);
	connect(m_pTcpSocket, &QTcpSocket::readyRead, this, &TCPClient::RecvTcpData);

}

TCPClient::~TCPClient()
{

}


void TCPClient::onButtonConnectClicked()
{
	// 获取IP
	m_strSeverIP = ui.editIP->text();
	m_nSeverPort = ui.editPort->text().toInt();

	// 连接服务器
	m_pTcpSocket->connectToHost(QHostAddress(m_strSeverIP), m_nSeverPort);

	ui.textRecv->append(QStringLiteral("[%1 : %2] 成功连接...\n").arg(m_strSeverIP).arg(m_nSeverPort));

	ui.buttonSend->setEnabled(true);
}


void TCPClient::onButtonSendClicked()
{
	QString str = ui.textSend->toPlainText();

	// 发送数据
	m_pTcpSocket->write(str.toUtf8());

	ui.textSend->clear();

}


void TCPClient::onButtonExitClicked()
{
	m_pTcpSocket->disconnectFromHost();

	ui.textRecv->append(QString("[%1 : %2] 断开连接...\n").arg(m_strSeverIP).arg(m_nSeverPort));
}


void TCPClient::RecvTcpData()
{
	QByteArray arr = m_pTcpSocket->readAll();
	ui.textRecv->append(QStringLiteral("[%1 : %2] %3\n").arg(m_strSeverIP).arg(m_nSeverPort).arg(QString(arr)));
}
