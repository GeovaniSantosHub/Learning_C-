//Desenvolva um programa em linguagem C++ que recebe 5 números inteiros. Armazene-os em um
//vetor e exiba a média dos valores informados e os valores que são maiores que essa média.
#include <iostream>
using namespace std;
int main(void)
{
    float media;
    int numero,numerador=0;
    int vetor [10];
    int maior,menor;
    for (int i=1; i <=5; i++)
    {
        cout<<"Digite 5 numeros: "<<endl;
        cin >> numero;
        vetor[i]=numero;
        maior = vetor [1];
        menor = vetor [1];
        numerador = numerador + numero;
        media = numerador / 5;
    }
    cout<<"media: "<< media <<endl;
    for (int i=1; i<= 5;i++){
        if (vetor[i]>media){
            maior=vetor[i];
            cout << "maior que a media: "<< maior<<endl;
            }
    }
    for (int i=1; i<= 5;i++){
        if (vetor[i]<media){
            menor=vetor[i];
            cout<<"menor que a media: "<<menor<<endl;
            }
    }
    return 0;
}
