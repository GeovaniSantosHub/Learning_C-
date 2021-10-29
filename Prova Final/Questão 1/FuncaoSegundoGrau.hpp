#ifndef _FUNCAOSEGUNDOGRAU_
#define _FUNCAOSEGUNDOGRAU_HPP_
#include <iostream>
#include <math.h>
using namespace std;
class FuncaoSegundoGrau
{
private:
int a; //coeficente a
int b; //coeficente b
int c; //coeficente c

public:

void setCoeficientes(double, double, double);//acessa os coefientes e insere valores neles;

double get_a(); //retorna o coeficente a

double get_b(); //retorna o coeficente b

double get_c(); //retorna o coeficente c

double valor(double); //escolhe um valor para x e calcula a função do segundo grau para ele

double nRaizes(); //imprime o número de raízes que a função possui

double * raizes(); //metódo que aponta para o vetor com as raizes da função

void printf(); //método que imprime em tela os coeficientes da função do segundo grau

FuncaoSegundoGrau();//contrutor sem parâmetros

FuncaoSegundoGrau(double, double, double);//construtor com parâmetros para escolher os valores dos coeficientes 
};
#endif
