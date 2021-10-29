#include "FuncaoSegundoGrau.hpp"
FuncaoSegundoGrau::FuncaoSegundoGrau() //contrutor sem parâmetros
{
    
}

FuncaoSegundoGrau::FuncaoSegundoGrau(double a, double b, double c) //contrutor com parâmetros para os coefiecente a,b e c
{
    this->a = a;
    this->b = b;
    this->c = c;
}
//método que atribui valores aos coeficientes da função do segundo grau
void FuncaoSegundoGrau::setCoeficientes(double coefA, double coefb, double coefC)
{
    if (coefA==0)
    {
        cout<<"Nao eh uma funcao de segundo grau"<<endl;
        exit(1);
    }
    a = coefA;
    b = coefb;
    c = coefC;
}
//método que retorna o coefiente a
double FuncaoSegundoGrau::get_a()
{
    cout<<"coeficente a: "<<a<<endl;
    return a;
}
//método que retorna o coefiente b
double FuncaoSegundoGrau::get_b()
{
    cout<<"coeficente b: "<<b<<endl;
    return b;
}
//método que retorna o coefiente c
double FuncaoSegundoGrau::get_c()
{
    cout<<"Coeficente c: "<<c<<endl;
    return c;
}
//método que retorna o valor da função de segundo grau 𝑓(𝑥) para o valor de 𝑥 informado como argumento
double FuncaoSegundoGrau::valor(double x)
{
    double funcao = a*(pow(x,2)) + b*x + c;
    cout<<"f("<<x<<")="<<funcao<<endl;
    return funcao;
}
//método que deve retornar o número de raízes reais da equação
double FuncaoSegundoGrau::nRaizes()
{
    //double delta = pow(b,2)-(4*a*c); 
    double part1 = pow(b,2);//primeira parte para o cálculo do delta
    double part2 = (4*a*c);//segunda parte para o cálculo do delta
    double delta = part1 - part2;//cálculo do delta
    cout<<"Numero de raizes: ";
    //se delta for maior que 0 a função possui duas raizes reais e distintas 
    if (delta>0)
        {
            cout<<"2"<<endl;
        }
    //se delta for igual a 0 a função possui duas raizes reais e iguais 
    else if(delta==0)
        {
            cout<<"1"<<endl;
        }
    //se delta for menor que 0 a função não possui raízes reais  
    else
        {
            cout<<"0"<<endl;
        }
        return 0;
}
//ponteiro que aponta para o vetor com as raízes da função
double * FuncaoSegundoGrau::raizes()
{
    //cálculo do delta
    double part1 = pow(b,2);
    double part2 = (4*a*c);
    double delta = part1 - part2;

    double vetor [2];//vetor com dois espaços de memória
    double baskara;//armazena o resultado de baskara
    if (delta>0)
        {

            vetor[1]=baskara=((-b+sqrt(delta))/2*a);//calcula a primera raiz
            vetor[2]=baskara=((-b-sqrt(delta))/2*a);//calcula a segunda raiz
            cout<<"raiz': "<<vetor[1]<<endl<<"raiz'': "<<vetor[2]<<endl;//imprime as raizes
        }
    else if(delta==0)
        {
            //calcula as raizes iguais
            vetor[1]=baskara=((-b+sqrt(delta))/2*a);
            vetor[2]=baskara=((-b-sqrt(delta))/2*a);
            cout<<"raiz: "<<vetor[1]<<endl;
        }
    else
        {
            //vetor não armazena valores de raiz
            cerr<<"Nao possui raiz"<<endl;
            vetor[1]==nullptr;
        }
    return 0;
}
//imprime em tela os valores dos coefientes da função
void FuncaoSegundoGrau::printf()
{
    cout<<"coeficente a: "<<a<<endl<<"coeficente b: "<<b<<endl<<"coeficiente c: "<<c<<endl;
}