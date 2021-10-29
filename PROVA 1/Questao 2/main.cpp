#include "Relogio.hpp"
#include<iostream>
#include<ctime>
using namespace std;

int main(void)
{
    Relogio relogio1; 
    
    Relogio relogio2(12,50,20);
    if(!relogio1.sethora(01))
    {
        cerr<<relogio1.gethora()<<" Hora" <<relogio1.getminutos()<< " minutos " <<relogio1.getsegundos()
        <<" segundos"<<endl;
    }
    relogio1.setminutos(30);
    relogio1.setsegundos(50); 

    relogio2.sethora(04);
    relogio2.setminutos(50);
    relogio2.setsegundos(20); 

    relogio1.imprimirRelogio();
    relogio2.imprimirRelogio();
    
    cout<<" "<<endl;

    //metodos de incrementação
    cout<<relogio1.incrementaHora()<<" hora(s)"<<endl;
    cout<<relogio1.incrementaMinutos()<<" minuto(s)"<<endl;
    cout<<relogio1.incrementaSegundos()<<" segundo(s)"<<endl;
    
    cout<<" "<<endl;

    cout<<"Converter horario em segundos: "<<relogio1.converteSegundo()<<" segundos"<<endl;
    return 0;
}