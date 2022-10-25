#ifndef FORM_H
#define FORM_H

#include <QObject>
#include <QDebug>
#include <qqml.h>
class Form : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int largura READ largura WRITE setLargura NOTIFY larguraChanged)
    Q_PROPERTY(int coprimento READ coprimento WRITE setCoprimento NOTIFY coprimentoChanged)
    Q_PROPERTY(QString cor READ cor WRITE setColor NOTIFY corChanged)
    QML_ELEMENT
public:
    explicit Form(QObject *parent = nullptr);

     int largura();
     int comprimento();
     QString cor();

     void setLargura(int larg);
     void setComprimento(int comp);
     void setColor(QString cor);

signals:
    void larguraChanged();
    void comprimentoChanged();
    void corChanged();

private:
    int _largura;
    int _comprimento;
    QString _cor;
};

#endif // FORM_H
