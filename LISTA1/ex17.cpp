//Elabore um programa em linguagem C++ que cria um vetor de 10 números inteiros informados pelo
//usuário e na sequência exiba o vetor criado em sua ordem inversa.
#include <iostream>
using namespace std;
int main(void){
    int numero, i;
    int vetor[5]; 
    for(i=1;i<=5;i++){
        cout<<"digite um numero: ";
        cin >> numero;
        vetor[i]=numero;
    }
    cout<<"vetor vetor inverso:"<<endl;
    for (i=5;i>=1;i--){
        cout<<vetor[i]<<endl;
    }
    return 0 ;
}