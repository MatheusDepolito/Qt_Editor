#include "Form.h"

Form::Form(QObject *parent)
    : QObject{parent}
{

}

int Form::largura()
{
    return _largura;
}

int Form::comprimento()
{
    return _comprimento;
}

QString Form::cor()
{
    return _cor;
}

void Form::setLargura(int larg)
{
    if(larg == _largura)
        return;

    _largura = larg;
    emit larguraChanged();
}

void Form::setComprimento(int comp)
{
    if(comp == _comprimento)
        return;

    _comprimento = comp;
    emit comprimentoChanged();
}

void Form::setColor(QString cor)
{
    if(cor == _cor)
        return;

    _cor = cor;
    emit corChanged();
}
