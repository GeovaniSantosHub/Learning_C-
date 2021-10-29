#include "ControladorPID.hpp"

ControladorPID::ControladorPID(double val_p,double val_i,double val_d,double val_ref,double tempo)
{
    set_Kp(val_p);
    set_Ki(val_i);
    set_Kd(val_d);
    set_referencia(val_ref);
    set_tAmostragem(tempo);
    double valor_anterior = 0;
}

void ControladorPID::set_Kp(double p)
{
    Kp = p;
}
double ControladorPID::get_Kp()
{
    return Kp;
}

void ControladorPID::set_Ki(double i)
{
    Ki=i;
}
double ControladorPID::get_Ki()
{
    return Ki;
}

void ControladorPID::set_Kd(double d)
{
    Kd=d;
}
double ControladorPID::get_Kd()
{
    return Kd;
}

void ControladorPID::set_tAmostragem(double Amostra_tempo)
{
    tAmostragem=Amostra_tempo;
}
double ControladorPID::get_tAmostragem()
{
    return tAmostragem;
}

void ControladorPID::set_referencia(double setareferencia)
{
    referencia = setareferencia;
}
double ControladorPID::get_referencia()
{
    return referencia;
}
