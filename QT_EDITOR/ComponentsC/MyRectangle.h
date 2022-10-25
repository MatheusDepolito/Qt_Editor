#ifndef MYRECTANGLE_H
#define MYRECTANGLE_H

#include <QObject>
#include <qqml.h>
#include <QQuickPaintedItem>
#include <QPainter>
#include <QDebug>

class MyRectangle : public QQuickPaintedItem
{
    Q_OBJECT
     Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)
    QML_ELEMENT
public:
    explicit MyRectangle(QQuickItem *parent = nullptr);

    QString color();
    void setColor(const QString &color);

    void paint(QPainter *painter);
signals:
   void colorChanged();

private:
    QString m_color;
};

#endif // MYRECTANGLE_H
