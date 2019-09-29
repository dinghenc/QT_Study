#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QtWidgets/QWidget>
#include "ui_tcpclient.h"
#include <qtcpsocket.h>

class TCPClient : public QWidget
{
	Q_OBJECT

public:
	TCPClient(QWidget *parent = 0);
	~TCPClient();

private:
	Ui::TCPClientClass ui;

private:
	QTcpSocket *m_pTcpSocket;

	QString m_strSeverIP;
	quint16 m_nSeverPort;

public:
	void onButtonConnectClicked();
	void onButtonSendClicked();
	void onButtonExitClicked();

	void RecvTcpData();
};

#endif // TCPCLIENT_H
