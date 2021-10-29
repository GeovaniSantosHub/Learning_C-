//g++ main.cpp Figuras.cpp -o main
#include "Figuras.hpp"
int main (void)
{
    Circulo circulo;//objeto da classe Circulo
    circulo.set_raio(5); //método que atribui um vlaor ao raio do circulo
    circulo.calcularArea();//método herdado da classe abstrata Figura, calcula a area do circulo
    cout<<endl;
    Triangulo triangulo;//objeto da classe Triangulo
    triangulo.base(10);//método que atribui um vlaor a base do triangulo
    triangulo.altura(7);//método que atribui um vlaor a altura do triangulo
    triangulo.calcularArea();//método herdado da classe abstrata Figura, calcula a area do triângulo 
    cout<<endl;
    Retangulo retangulo;//objeto da classe Retangulo
    retangulo.base(4);//método que atribui um vlaor a base do retâgulo 
    retangulo.altura(6);//método que atribui um vlaor a altura do retângulo
    retangulo.calcularArea();//método herdado da classe abstrata Figura, calcula a area do retangulo
    retangulo.diagonal();//método diagonal que retorna o tamanho da diagonal do retangulo
    
    return 0;
}