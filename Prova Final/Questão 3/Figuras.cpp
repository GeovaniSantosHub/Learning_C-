 #include "Figuras.hpp"   
void Circulo::set_raio(double r)//atribuião de valor ao raio
{
    raio=r;
    if (r<0)
    {
        cout<<"Valor de raio invalido"<<endl;
        exit(1);
    }
}
double Circulo::get_raio()//retorna o valor do raio
{
    return raio;
}
Circulo::Circulo(){}//construtor sem parâmetros

void Circulo::calcularArea()//classe herdada de Figura, calcula area do circulo
{
    double area_circulo=3.14*pow(raio,2);
    cout<<"Area do circulo: "<<area_circulo<<endl;
}
void Triangulo::base(double bt)//classe herdade de Poligono,atribui valor a base do triangulo
{
    base_triangulo=bt;
}
void Triangulo::altura(double ht)//classe herdade de Poligono, atribui valor a altura do triângulo 
{
    altura_triangulo=ht;
}
void Triangulo::calcularArea()//calcula a área do triângulo
{
    double area_triangulo=(base_triangulo*altura_triangulo)/2;
    cout<<"Area do triangulo: "<<setprecision(2)<<area_triangulo<<endl;
}
Triangulo::Triangulo(){}//contrutor sem parâmetros
void Retangulo::base(double br)//classe herdade de Poligono, atribui valor a base do retângulo
{
    base_retangulo=br;
}
void Retangulo::altura(double hr)///classe herdade de Poligono, atribui valor a altura do retãngulo
{
    altura_retangulo=hr;
}
double Retangulo::diagonal()//método que retorna o valor da diagonal do retângulo
{
    double Diagonal=(sqrt(pow(base_retangulo,2)+pow(altura_retangulo,2)));
    cout<<"Diagonal do retangulo: "<<Diagonal<<endl;
    return Diagonal;
}
void Retangulo::calcularArea()//calcula a área do retângulo
{
    double area_retangulo= base_retangulo * altura_retangulo;
    cout<<"Area do retangulo: "<<area_retangulo<<endl;
}
