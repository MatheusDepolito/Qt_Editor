#include "MyRectangle.h"
#include "QDebug"
MyRectangle::MyRectangle(QQuickItem *parent)
    : QQuickPaintedItem{parent},
      m_color("whiteSmoke")
{

}

QString MyRectangle::color()
{
    return m_color;
}
void MyRectangle::setColor(const QString &color)
{
    if(color == m_color)
        return;

    m_color = color;
    emit colorChanged();
    qDebug() << m_color;
}

void MyRectangle::paint(QPainter *painter)
{
        qDebug()<< __PRETTY_FUNCTION__ << painter;
        painter->fillRect(0,0,width(),height(),m_color);
}
