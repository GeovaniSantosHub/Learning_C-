#ifndef _RELOGIO_HPP_
#define _RELOGIO_HPP_

#define MULTI_MINUTOS_SEGUNDOS 60  
#define MULTI_HORAS_SEGUNDOS 3600   

#include <ctime>       
#include <iostream>     
#include <iomanip>      

using namespace std;

class Relogio
{

    friend ostream &operator<<( ostream &output, const Relogio & );

    public:
        Relogio();                       
        Relogio(int h, int m, int s);    

        bool setHorario(int h, int m, int s);  

        void incrementaHoras();          
        void incrementaMinutos();        
        void incrementaSegundos();       

        // calcula a diferenca de horario entre dois objetos relogio (maior - menor)

        int getHoraSegundos() const;     

        int getHoras() const;            
        int getMinutos() const;         
        int getSegundos() const;         

        bool setHoras(int h);      
        bool setMinutos(int m);    
        bool setSegundos(int s);   

        void imprimir() const;   

        Relogio &operator- (const Relogio & r1);

        Relogio &operator+ (Relogio & r1);


    private:
        int horas, minutos, segundos;

     
        static int maiorHorario(const Relogio & r1, const Relogio & r2);
};

#endif