#include "Complexo.hpp"

//função set para alterar o método privado n_real
void Complexo::set_real(double real)
    { 
        n_real = real;
    }
//função get para retornar o valor instanciado pela função set do n_real
double Complexo::get_real()
    {
        return n_real;
    }

//função set para alterar o método privado n_imaginário
void Complexo::set_imaginario(double imaginario)
    {
        n_imaginario=imaginario;
    }
//função get para retornar o valor instanciado pela função set do n_imaginario
double Complexo::get_imaginario()
    {
        return n_imaginario;
    }

//método que calcula o módulo do número complexo
double Complexo::modulo_complexo()
{
    double modulo = sqrt(pow(n_real,2) + pow(n_imaginario,2));
    return modulo;
}

//método que calcula o argumento do número complexo
double Complexo::argumento_complexo()
{
    /*como o resultado do seno e do cosseno são iguais, pode-se escolher apenas um para retornar,
    o escolhido em questão foi o cosseno*/
    double cos = n_real/modulo_complexo();
//  double sen = n_imaginario/modulo_complexo();
    return cos;
}

//Gerando número aleatórios para o construtor sem parâmetros:
int Complexo::random_imaginario()
{
    srand(time(NULL));
    double max = 50;
    double min = -50;
    //float aleatorio_imag = rand()/(float)RAND_MAX; //* (max - min) + min;
    double aleatorio_imag= rand () % 100;
    return aleatorio_imag - 50;
}
int Complexo::random_real()
{
    srand(time(NULL));
    double aleatorio_real= rand () % 100;
    return aleatorio_real - 50;
}

/*Construtor sem parêmtros que gera numeros aleatórios para a parte real e a parte imaginária
do número complexo*/
Complexo::Complexo()
    {
        double real_random,imaginario_random;
        real_random = random_real();
        imaginario_random = random_imaginario();
    }
//Construtor com parâmetro de um ponteiro;
Complexo::Complexo(double ptr)
    {
        cout<<"Ponteiro: "<<ptr<<endl;
    }
//Construtor com parâmetros, para instanciar a parte real e a parte imaginária do número complexo
Complexo::Complexo(double n_real, double n_imaginario)
    {
        this->n_real = n_real;
        this->n_imaginario = n_imaginario;
    }
//Sobrecraga do operador "+"
Complexo Complexo::operator+ (Complexo& n)
    {
        return Complexo(this->n_real + n.n_real , this->n_imaginario + n.n_imaginario);
    }
//Sobrecraga do operador "*"
Complexo Complexo::operator* (Complexo& v)
    {
        double a = (this->n_real * v.n_real);
        double c = (this->n_imaginario * v.n_imaginario);
        double b = (this->n_real * v.n_imaginario) + (this->n_imaginario * v.n_real);
        return Complexo(a-c,b);
    }
//Sobrecraga do operador "-"
Complexo Complexo::operator-(Complexo& m)
    {
        return Complexo(this->n_real - m.n_real, this->n_imaginario - m.n_imaginario);
    }
//Sobrecraga do operador unário "-"
Complexo Complexo::operator-()
    {
        return Complexo(this->n_real,this->n_imaginario * -1);
    }
//Sobrecraga do operador "=="
bool Complexo::operator==(const Complexo &igual) const
    {
         if (this->n_real == igual.n_real || this->n_imaginario == igual.n_imaginario)
         {
            cout<<"Os numeros complexos sao iguais!"<<endl;
            return true; 
         }
        cout<<"Os numeros complexos sao diferentes!"<<endl;
        return false;
    }
//Sobrecraga do operador "!="
bool Complexo::operator!=(const Complexo & diferente)
    {
        if (this->n_real == diferente.n_real || this->n_imaginario == diferente.n_imaginario)
         {
            cout<<"Os numeros complexos sao iguais!"<<endl;
            return false; 
         }
        cout<<"Os numeros complexos sao diferentes!"<<endl;
        return true;
    }   
//Sobrecraga do operador ">>"
istream &operator>>(istream &input, Complexo &y)
    {
        input>>y.n_real;
        input>>y.n_imaginario;
        return input;
    }
//Sobrecraga do operador "<<"
ostream &operator<<(ostream &output,const Complexo &x)
    {
        output<<"z= "<<x.n_real<<" + "<<x.n_imaginario<<"i"<<endl;
    }
//Sobrecraga do operador "[]" rvalue
int Complexo::operator[](int posicao) const
    {
        if (posicao < 0 || posicao > 1)
        {
            cerr<<"Valor de posicao invalido!"<<endl;
            exit(1);
        } 
        return ptr[posicao];
    }
//Sobrecraga do operador "[]" lvalue
double &Complexo::operator[](int modifica){
        if (modifica < 0 || modifica > 1)
        {
            cerr<<"Valor para modificacao invalido!"<<endl;
            exit(1);
        }
        return ptr[modifica];
    }
