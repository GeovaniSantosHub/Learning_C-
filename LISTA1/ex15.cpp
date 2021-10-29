#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(void)
{
    srand(time(NULL));
    int variavel,escolha,tentativas;
    tentativas=1;
    variavel = rand() % 100+1;
    cout<< "Tente acertar o numero que a maquina escolheu, entre 0 e 100:"<<endl;
    cin >> escolha;
    while (variavel!=escolha)
    {
        cout<<"Errado ";
            if (escolha>variavel)
            {
                cout<<"MENOS!"<<endl;
                cin>>escolha;
            }
            if(escolha<variavel)
            {
                cout<<"MAIS!"<<endl;
                cin>>escolha;
            }
        tentativas=tentativas+1;
    }
    cout<<"YOU WIN!!!"<<endl;
    cout<<"Você fez "<<tentativas<<" tentativas";
    return 0;
}