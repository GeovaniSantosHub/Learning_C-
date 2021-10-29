#ifndef _RELOGIO_HPP_
#define _RELOGIO_HPP_
#include<iostream>
#include<ctime>
using namespace std;
class Relogio 
{
    public:

        Relogio();
    

        Relogio(int h, int m, int s);

        void imprimirRelogio();

        bool sethora(int h);
        int gethora();

        void setminutos(int m);
        int getminutos();


        void setsegundos(int s);
        int getsegundos();
        
        int incrementaHora();
        int incrementaMinutos();
        int incrementaSegundos();

        int converteSegundo();


    private:
        int hora = 00;
        int minutos = 00;
        int segundos = 00;
    
};
#endif