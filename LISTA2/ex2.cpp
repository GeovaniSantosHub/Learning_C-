/*Considere que um polinômio de ordem n é representado matematicamente por p(x) = a0 + a1x +
a2x2 + a3x3 + ⋯ + an−1xn−1 + anxn, em que a0, a1, a2, ... , an−1, an correspondem aos
coeficientes do polinômio de ordem n e x é a variável do polinômio. Sabendo disso, utilizando a
linguagem C++, crie um programa que represente polinômios por meio de vetores. Estes vetores são
preenchidos pelos coeficientes dos polinômios, do termo de menor expoente ao termo de maior
expoente. Desta forma, o usuário deve informar a ordem do polinômio e os valores de seus
coeficientes. A partir desta representação, elabore uma função que receba o vetor de coeficientes de
um determinado polinômio e um valor para a variável x e retorne o valor do polinômio p(x) em x.*/
#include <iostream>
#include <math.h>
using namespace std;
int vetor(int * ponteiro_polinomio,int ordem, int x)
{
    int valor=0;
    for(int i=0; i<=ordem;i++)
    {
        valor +=ponteiro_polinomio[i]*pow(x,i);
    }
    return valor;
}
int main(void)
{
int * ponteiro_polinomio = nullptr;
int ordem,x;
cout<<"Informe a ordem do polinomio: "<<endl;
cin>>ordem;
if (ordem>0){
    ponteiro_polinomio = new int [ordem];
    for(int i=0;i<=ordem;i++){
        cout<<"Informe os valores dos coeficientes: a_"<<i<<":"<<endl;
        cin>>ponteiro_polinomio[i];
    }
    cout<<"Digite um valor para X: ";
    cin>>x;
    cout<<"\n"; 
    cout<<"o polinomio p("<< x <<") vale: "<<vetor(ponteiro_polinomio,ordem,x)<<endl;
    cout<<"\n"; 
    delete ponteiro_polinomio;
    ponteiro_polinomio=nullptr;
}
return 0;
}