/*Desenvolva em linguagem C++, uma função que receba como entrada dois vetores de igual tamanho
preenchidos pelo usuário e retorne um novo vetor que armazena a soma destes dois vetores. Imprima
os vetores preenchidos pelo usuário e o vetor resultante da soma dos vetores informados para
confirmar o funcionamento de sua função.*/
#include <iostream>
using namespace std;
int VetorResult(int * vetor1, int * vetor2,int ntermos)
{
    int * soma = new int [ntermos];
    for(int i=0;i<ntermos;i++)
    {
        soma[i]=vetor1[i]+vetor2[i];
    }
    for(int i=0;i<ntermos;i++){
        cout<<soma[i]<<" ";
    }
    return * soma;
}
int main(void)
{
int * soma = nullptr;
int ntermos;
int * vetor1 = nullptr;
int * vetor2 = nullptr;
int * termo = nullptr;
cout<<"Quantos termos tera os vetores? "<<endl;
cin>>ntermos;
if (ntermos > 0)
{
vetor1 = new int [ntermos];
vetor2 = new int [ntermos];
for(int i=0;i<ntermos;i++)
{
    cout<<"Vetor1_"<<i<<": "<<" ";
    cin>>vetor1[i];
}
for(int i=0;i<ntermos;i++)
{
    cout<<"Vetor2_"<<i<<": "<<" ";
    cin>>vetor2[i];
}
}
cout<<"teste: "<<VetorResult(vetor1,vetor2,ntermos);
return 0;
}