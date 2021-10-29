//Implemente uma função em linguagem C++ que tem como entrada duas palavras e informa se estas
//palavras são iguais e se alguma das palavras é igual a POO.
#include <iostream>
using namespace std;
int main(void)
{
    string palavra1;
    string palavra2;
    cout<<"Digite uma palavra: "<<endl;
    cin>>palavra1;
    cout<<"Digite outra palavra: "<<endl;
    cin>>palavra2;
    if (!palavra1.compare(palavra2)){
        cout<<"As palavras que voce escolheu sao iguais."<<endl;
    }
    if (!palavra1.compare("POO") || !palavra2.compare("POO")){
        cout<<"pelo menos uma das plavras e igual a POO";
    }
    return 0;
}