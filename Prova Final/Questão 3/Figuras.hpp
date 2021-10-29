#ifndef _FIGURAS_HPP_
#define _FIGURAS_HPP_
#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
using namespace std;

class Figura//Clase abstrata que forneca o método virtual para calcular a área dos objetos
{
    public:
    double vetor_raiz[2];
    double *vetor_ptr=&vetor_raiz[1];;
    virtual void calcularArea()=0;//método virtual puro;
};

class Circulo:public Figura//classe concreta, herda da classe Figura
{ 
    protected:
    double raio; //método para atribuição do raio do circulo

    public:
    void set_raio(double);//atribui um valor ao raio
    double get_raio();//retorna o raio
    Circulo();//contrutor sem parãmetros
    void calcularArea();//método herdado da classe Figura para calcular a area do círculo
    vetor_ptr=50;

};

class Poligono:public Figura//classe abstrata que fornece os métodos base e altura para as classes herdeiras
{
    public:
    virtual void base(double)=0;//método virtual puro
    virtual void altura(double)=0;//método virtual puro
};


class Triangulo:public Poligono//classe concreta que herda da classe Figura e Poligono
{
    private:
    double base_triangulo;//armazena o valor da base do triangulo
    double altura_triangulo;//armazena o valor da altura do triangulo
    public:
    void base(double);//método herdado da classe Poligono para atribuir um valor a base do triangulo
    void altura(double);//método herdado da classe Poligono para atribuir um valor a altura do triangulo
    void calcularArea();//método herdado da classe Figura para calcular a área do triângulo
    Triangulo();//contrutor sem parâmetros
};


class Retangulo:public Poligono//classe concreta que herda de Figura e Poligono
{
    private:
    double base_retangulo;//armazena o valor da base do retângulo
    double altura_retangulo;//armazena o valor da altura do retângulo

    public:
    double diagonal();//método que retorna o tamanho da diagonal do retângulo
    void base(double);//método herdado da classe Poligono para atribuir um valor a base do retangulo
    void altura(double);//método herdado da classe Poligono para atribuir um valor a altura do retangulo
    void calcularArea();//método herdado de Figura, calcula a área do retângulo
};


#endif