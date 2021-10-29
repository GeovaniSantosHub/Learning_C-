#ifndef _CONTROLADORPID_HPP_
#define _CONTROLADOR_HPP_
#include <iostream>
#include <cstdlib> //usado para gerar numeros aletórios para as medições do ControladorPID;
#include <time.h> //usado para fazer uma semente de numeros aleatórios não repetidos;
using namespace std;

class ControladorPID
{
    public:
    //Construtor que armazena as variáveis do sistema;
    ControladorPID(double val_p,double val_i,double val_d,double val_ref,double tempo);

    //valor medido pelo controlador PID
    double valor_medido;

    void set_Kp(double p);
    double get_Kp();

    void set_Ki(double i);
    double get_Ki();

    void set_Kd(double d);
    double get_Kd();
    
    void set_tAmostragem(double Amostra_tempo);
    double get_tAmostragem();

    void set_referencia(double setareferencia);
    double get_referencia();


    private:
    //constantes
    double Kp;
    double Ki;
    double Kd;
    
    double tAmostragem; //tempo de amostragem
    double referencia; //valor de referência
};
#endif