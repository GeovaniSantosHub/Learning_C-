//Desenvolva uma função em linguagem C++ que recebe dois vetores como parâmetro e retorna o
//resultado da soma entre esses dois vetores.
#include <iostream>
using namespace std;
int main(void)
{
    int i,n1,n2,soma;
    int vetor1[5];
    int vetor2[5];
    for (i=1;i<=5;i++)
    {
        cout<<"Componha o primeiro vetor: "<<endl;
        cin>>n1;
        vetor1[i]=n1;      
        }
    for (i=1;i<=5;i++)
    {
        cout<<"Componha o segundo vetor: "<<endl;
        cin>>n2;
        vetor2[i]=n2;      
    }
    for (i=1;i<=5;i++){
        soma=vetor1[i]+vetor2[i];
        cout<<"soma vetores "<<i<<": "<<soma<<endl;
    }
    return 0;
}