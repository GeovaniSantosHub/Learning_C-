#ifndef COMPLEXO_HPP
#define COMPLEXO_HPP
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;
class Complexo
{
    //sobrecarga dos operadores ">>" e "<<"
    //"friend" acessa os métodos "private"
    friend istream &operator>>(istream &input, Complexo &y);
    friend ostream &operator<<(ostream &output,const Complexo &x);
    
    public:
    //gera numeros aleatórios para o construtor sem parâmetros
    int random_imaginario();
    int random_real();

    //acessa o método "n_real" no escopo "private"
    void set_real(double real);
    double get_real();
    
    //acessa o método "n_imaginario" no escopo "private"
    void set_imaginario(double imaginario);
    double get_imaginario();

    //métodos que calculam o módulo e o argumento do número complexo, respectivamente
    double modulo_complexo();
    double argumento_complexo();

    //Construtores
    Complexo(); // sem parâmetros
    Complexo(double ptr); //com parâmetros de ponteiro
    Complexo(double n_real, double n_imaginario); // com parâmetros de parte real e imaginária

    //sobrecarga dos operadores "+", "*" e "-", respectivamente
    Complexo operator+ (Complexo& n);
    Complexo operator* (Complexo& v);
    Complexo operator-(Complexo& m);
    
    //sobrecarga do operador unário "-"
    Complexo operator-();
    
    //sobrecarga dos operadore "==" e "!=", respectivamente
    bool operator==(const Complexo &igual) const;
    bool operator!=(const Complexo & diferente);

    //sobrecarga do operador "[]", lvalue e rvalue, respectivamente 
    double &operator[](int posicao);
    int operator[](int posicao) const;

    private:
    //parte real e imaginária do número complexo
    double n_real, n_imaginario;
    //ponteiro usado para acessar o número complexo;
    double *ptr = &n_real;

};
#endif
