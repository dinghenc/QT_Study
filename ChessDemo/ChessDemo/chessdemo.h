#ifndef CHESSDEMO_H
#define CHESSDEMO_H

#include <QtWidgets/QWidget>
#include "ui_chessdemo.h"

class ChessDemo : public QWidget
{
	Q_OBJECT

public:
	ChessDemo(QWidget *parent = 0);
	~ChessDemo();

private:
	// 格子宽度 高度
	int m_nGridWidth;
	int m_nGridHeight;

	// 格子起点坐标
	int m_nGridPosX;
	int m_nGridPosY;

	// 点击坐标
	int m_nClickedPosX;
	int m_nClickedPosY;

public:
	void paintEvent(QPaintEvent *event);
	void mousePressEvent(QMouseEvent *event);
	

private:
	Ui::ChessDemoClass ui;
};

#endif // CHESSDEMO_H
