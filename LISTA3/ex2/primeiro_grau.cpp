#include "primeiro_grau.hpp"
void class_funcao::set_linear(int setalinear)
{
    a = setalinear;
}
int class_funcao::get_linear()
{
    return a;
}
void class_funcao::set_angular(int setaangular)
{
    b=setaangular;
}
int class_funcao::get_angular()
{
    return b;
}
void class_funcao::set_variavel_x(int set_x){
    x = set_x;
}
int class_funcao::get_variavel_x()
{
    return x;
}
void class_funcao::imprimir()
{
    cout<<"f("<<x<<")="<<a<<"x + "<<b<<endl;
}
void class_funcao::set_calculo(int a,int b)
{
    set_linear(a);
    set_angular(b);
}
int class_funcao::get_calculo(int x)
{
    return a * x + b;
}