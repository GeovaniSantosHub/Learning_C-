/*
Desenvolva em linguagem C++, um programa que aloca dinamicamente uma matriz de inteiros quadrada
 𝑛 𝑥 𝑛 utilizando new (o valor de 𝑛 – ordem da matriz - deve ser informado pelo usuário). Em seguida, 
implemente uma função que recebe como parâmetro uma matriz de ordem 𝑛 linhas e retorne 1 caso a matriz 
a diagonal e 0 caso contrário. Observações. Uma matriz é diagonal se todos os elementos fora da diagonal 
principal são nulos e que memória reservada para a criação da matriz utilizando delete.
*/
#include <iostream>
using namespace std;
int main(void)
{
int ** matriz=nullptr;;
int ordemMatriz;
cout<<"Informe a ordem da matriz: "<<endl;
cin>>ordemMatriz;
matriz = new int * [ordemMatriz];
for(int i=0;i<ordemMatriz;i++)
    {
        matriz[i]= new int [ordemMatriz];
    }
for(int i=0;i<ordemMatriz;i++)
    {
        for(int j=0;j<ordemMatriz;j++)
        {
            cout<<"matriz["<<i<<"] ["<<j<<"] ";
            cin>>matriz[i][j];
        }
    }
 for(int i=0;i<ordemMatriz;i++)
    {
        delete matriz[i];
        matriz[i]=nullptr;
    }
return 0;
}