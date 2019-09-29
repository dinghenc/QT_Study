#ifndef TCPSEVER_H
#define TCPSEVER_H

#include <QtWidgets/QWidget>
#include "ui_tcpsever.h"
#include <qtcpserver.h>
#include <qtcpsocket.h>

class TCPSever : public QWidget
{
	Q_OBJECT

public:
	TCPSever(QWidget *parent = 0);
	~TCPSever();

private:
	Ui::TCPSeverClass ui;

private:
	QTcpServer* m_pTcpSever;
	QTcpSocket* m_pTcpClient;

	QString m_strIP;
	quint16 m_nPort;

public:
	void onButtonSendClicked();
	void onButtonExitClicked();

public:
	void NewTcpConnection();
	void RecvTcpData();
};

#endif // TCPSEVER_H
