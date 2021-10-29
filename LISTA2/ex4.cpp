/*
Elabore um programa em linguagem C++, que solicita ao usuário a quantidade de números que ele 
deseja sortear. Após obter esta informação, aloque dinamicamente um vetor de tamanho adequado 
utilizando new e forneça-o como argumento para uma função que deve sortear de maneira 
pseudorrandômica números entre 0 e 100 e armazená-los no vetor criado. Em seguida, por meio da 
chamada de uma função, imprima os elementos sorteados neste vetor e retorne (retorno da função) 
o maior valor sorteado. Observação. Não esqueça de desalocar a memória destinada ao vetor,
utilizando delete, quando ele não for mais necessário em seu programa.
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
void sorteio(int * vetor,int quantidade_num)
{
    srand(time(NULL));
    for(int i=0;i<quantidade_num;i++)
    {
        vetor[i] = rand() % 101; 
    }
}
int imprime_vetor(int * vetor, int quantidade_num)
{
    for(int i=0;i<quantidade_num;i++)
    {
        cout<<vetor[i]<< " ";
    }
}
int main(void)
{
int quantidade_num;
cout<<"Quantos numeros voce quer sortear? "<<endl;
cin>>quantidade_num;
int * numeros_sorteados = new int [quantidade_num];
sorteio(numeros_sorteados,quantidade_num);
imprime_vetor(numeros_sorteados,quantidade_num);
return 0;
}