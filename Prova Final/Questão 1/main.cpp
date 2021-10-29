//g++ main.cpp FuncaoSegundoGrau.cpp -o main
#include "FuncaoSegundoGrau.hpp"

int main(void)
{
    FuncaoSegundoGrau objeto(1,2,3); //objeto que usa os atributos do contrutor
    FuncaoSegundoGrau objeto0; //objeto que acessa os coeficiente por meio de set e get  
    objeto0.setCoeficientes(2,2,-4); //escolhe os valores para os coeficientes a,b e c, respectivamente
    objeto.get_a(); //acessa o coeficente a
    objeto.get_b(); //acessa o coeficente b
    objeto.get_c(); //acessa o coeficente c
    cout<<endl;
    objeto0.valor(2); //escolhe o valor para "x"
    objeto0.nRaizes(); //indica o número de raizes da função
    objeto0.raizes(); //calcula e retorna as raízes da função
    cout<<endl;
    cout<<endl;
    objeto.valor(5);//escolhe o valor para "x"
    objeto.nRaizes();//indica o número de raizes da função
    objeto.raizes();//calcula e retorna as raízes da função
    cout<<endl;
    objeto0.printf(); //imprime em tela os coeficientes da função do segundo grau
    cout<<endl;
    objeto.printf();
    
    return 0;
}