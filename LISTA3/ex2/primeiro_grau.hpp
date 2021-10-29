#include <iostream>
using namespace std;
#ifndef _PRIMEIRO_GRAU_HPP
#define PRIMEIRO_GRAU_HPP
class class_funcao
{
    public:
    void set_linear(int setalinear);
    int get_linear();

    void set_angular(int setaangular);
    int get_angular();
    
    void set_variavel_x(int set_x);
    int get_variavel_x();

    void set_calculo(int a, int b);
    int get_calculo(int funcao_get);
    void imprimir();
    private:
    int a;
    int b;
    int x;
    int calculo;
};
#endif