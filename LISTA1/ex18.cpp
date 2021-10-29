//Crie uma função em linguagem C++ que recebe três notas de um aluno e uma letra. Se a letra for A, a
//função deve retornar a média aritmética das notas do aluno se for P, a sua média ponderada (pesos:
//5, 3 e 2, respectivamente).
#include <iostream>
using namespace std;
int main(void){
    float nt1, nt2, nt3, mediaAri, mediaPonde;
    char resposta;
    cout<<"Digite tres notas: "<<endl;
    cin>>nt1;
    cin>>nt2;
    cin>>nt3;
    cout<<"Digite 'A' para media aritmetica e 'P' para media ponderada: "<<endl;
    cin>>resposta;
    switch(resposta){
        case 'A':
        mediaAri = (nt1 + nt2 + nt3)/3;
        cout<<"media: "<<mediaAri<<endl;
        break;
        case 'P':
        mediaPonde = ((5*nt1) + (3*nt2) + (2*nt3))/10;
        cout<<"media ponderada: "<<mediaPonde<<endl;
        break;
    }
    return 0;
}