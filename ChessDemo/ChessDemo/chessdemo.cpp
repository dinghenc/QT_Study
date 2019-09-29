#include "chessdemo.h"
#include <QPainter>
#include <QMouseEvent>

ChessDemo::ChessDemo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_nClickedPosX = m_nClickedPosY = -1;

	resize(512, 512);
}

ChessDemo::~ChessDemo()
{

}


void ChessDemo::paintEvent(QPaintEvent *event)
{
	// 格子宽度 高度
	m_nGridWidth = width() / 10;
	m_nGridHeight = height() / 10;

	// 起点坐标
	m_nGridPosX = m_nGridWidth;
	m_nGridPosY = m_nGridHeight;

	QPainter painter;
	painter.begin(this);

	//painter.drawPixmap(rect(), QPixmap("E:\\TestImage\\cat1.bmp"));
	//painter.setBackground(QBrush(QColor(213, 214, 170)));
	painter.setBrush(QBrush(QColor(213, 214, 170, 120)));
	painter.drawRect(rect());

	QPen pen;
	pen.setWidth(5);
	pen.setColor(QColor(255, 0, 0, 80));

	// 设置画笔
	painter.setPen(pen);

	// 画线
	for (int i = 0; i <= 8; i++)
	{
		// 横线
		painter.drawLine(m_nGridPosX, m_nGridPosY + i*m_nGridHeight, 
			m_nGridPosX + 8 * m_nGridWidth, m_nGridPosY + i*m_nGridHeight);

		// 竖线
		painter.drawLine(m_nGridPosX + i*m_nGridWidth, m_nGridPosY,
			m_nGridPosX + i*m_nGridWidth, m_nGridPosY + 8 * m_nGridHeight);
	}

	// 画棋子
	if (m_nClickedPosX != -1 && m_nClickedPosY != -1)
	{
		painter.drawPixmap(m_nClickedPosX*m_nGridWidth + m_nGridPosX, m_nClickedPosY*m_nGridHeight + m_nGridPosY,
			m_nGridWidth, m_nGridHeight, QPixmap("chess.bmp"));
	}

	painter.end();
}


void ChessDemo::mousePressEvent(QMouseEvent *event)
{
	int x, y;
	x = event->x();
	y = event->y();

	// 记录点击坐标
	if (x > m_nGridPosX && x < m_nGridPosX + 8 * m_nGridWidth 
		&& y > m_nGridPosY && y < m_nGridPosY + 8 * m_nGridHeight)
	{
		m_nClickedPosX = x / m_nGridWidth - 1;
		m_nClickedPosY = y / m_nGridHeight - 1;

		// 重绘
		update();
	}
}
