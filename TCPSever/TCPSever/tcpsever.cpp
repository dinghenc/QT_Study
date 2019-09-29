#include "tcpsever.h"

TCPSever::TCPSever(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// 初始化TCP Sever服务
	m_pTcpClient = NULL;
	m_pTcpSever = new QTcpServer(this);

	// 监听
	quint16 localPort = 7000;
	m_pTcpSever->listen(QHostAddress::Any, localPort);
	setWindowTitle(QStringLiteral("[Sever port : %1]").arg(localPort));

	// 初始按钮不可用
	ui.buttonSend->setEnabled(false);

	// signal - slot
	connect(m_pTcpSever, &QTcpServer::newConnection, this, &TCPSever::NewTcpConnection);
	connect(ui.buttonSend, &QPushButton::clicked, this, &TCPSever::onButtonSendClicked);
	connect(ui.buttonExit, &QPushButton::clicked, this, &TCPSever::onButtonExitClicked);

}

TCPSever::~TCPSever()
{

}


void TCPSever::NewTcpConnection()
{
	// 取出客户端连接
	m_pTcpClient = m_pTcpSever->nextPendingConnection();

	// 客户端的IP和port
	m_strIP = m_pTcpClient->peerAddress().toString();
	m_nPort = m_pTcpClient->peerPort();

	ui.textRecv->append(QStringLiteral("[%1 : %2] 成功连接...\n").arg(m_strIP).arg(m_nPort));

	ui.buttonSend->setEnabled(true);

	// 接收数据信号
	connect(m_pTcpClient, &QTcpSocket::readyRead, this, &TCPSever::RecvTcpData);

}


void TCPSever::onButtonSendClicked()
{
	QString str;
	str = ui.textSend->toPlainText();
	// 发送数据
	m_pTcpClient->write(str.toUtf8());

	// 清空
	ui.textSend->clear();
}


void TCPSever::onButtonExitClicked()
{
	if (m_pTcpClient != NULL)
	{
		m_pTcpClient->disconnectFromHost();
		ui.textRecv->append(QStringLiteral("[%1 : %2] 退出连接...\n").arg(m_strIP).arg(m_nPort));
	}
}


void TCPSever::RecvTcpData()
{
	// 读出数据
	QByteArray arr = m_pTcpClient->readAll();

	// 追加到显示框
	ui.textRecv->append(QStringLiteral("[%1 : %2] %3\n").arg(m_strIP).arg(m_nPort).arg(QString(arr)));
}
