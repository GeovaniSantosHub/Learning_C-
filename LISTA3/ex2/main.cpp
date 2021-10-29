/*
Implemente uma classe para representar uma função do primeiro grau, 𝑓(𝑥) = 𝑎𝑥 + 𝑏,
(PrimeiroGrau). Para isso, os objetos desta classe devem possuir dois atributos que correspondem
aos coeficientes linear e angular presentes neste tipo de função. Forneça para a classe um método 
que recebe um valor para a variável x e retorne o valor da função para o valor dado. Além disso, a 
classe deve conter um método que imprime em tela os valores dos coeficientes da função
*/
#include <iostream>
#include "primeiro_grau.hpp"
using namespace std;
int main(void){
    class_funcao funcao;
    funcao.set_linear(4);
    funcao.set_angular(2);
    funcao.set_variavel_x(10);
    funcao.imprimir();
    for (int i=0;i<10;i++)
    {
        cout<<"f("<<i<<")="<<funcao.get_calculo(i)<<endl;
    }
    return 0;
}