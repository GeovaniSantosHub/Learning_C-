#include "Relogio.hpp"

int main(void)
{
    Relogio relogio1(10,29,10);    
    Relogio relogio2(2,52,36);      
    Relogio relogio3;  
    Relogio soma= relogio1 + relogio2;            

    cout << "\n Relogio 1: ";   
    relogio1.imprimir();           

    cout << "\n Relogio 2: ";
    relogio2.imprimir();            

    cout << "\n Relogio 3: ";
    relogio3.imprimir();           

    Relogio relogioDif = relogio1 -relogio2;

    cout << "\n\n relogio1 - relogio2: ";
    relogioDif.imprimir();         
    
    relogio1.incrementaHoras();     
    relogio1.incrementaMinutos();   
    relogio1.incrementaSegundos();  

    cout << "\n\n relogio1: ";
    relogio1.imprimir();            

    cout << "\n\n relogio1 - relogio2: ";


    relogio1-relogio2;

    
    relogio2.setHorario(relogio1.getHoras(),relogio1.getMinutos(),relogio1.getSegundos());

    cout << "\n\n relogio2: ";
    relogio2.imprimir();            

    cout << "\n\n relogio1 - relogio2: ";
   
    soma.imprimir();

    cout << endl << endl;


    Relogio relogioAdi = relogio1 + relogio2;

    cout << "\n\n relogio1 + relogio2: ";
    relogioAdi.imprimir();          

   
    relogio1.incrementaHoras();     
    relogio1.incrementaMinutos();  
    relogio1.incrementaSegundos();  

    cout << "\n\n relogio1: ";
    relogio1.imprimir();            

    cout << "\n\n relogio1 + relogio2: ";


    relogio1 + relogio2;

   
    relogio2.setHorario(relogio1.getHoras(),relogio1.getMinutos(),relogio1.getSegundos());

    cout << "\n\n relogio2: ";
    relogio2.imprimir();            

    cout << "\n\n relogio1 - relogio2: ";

    soma.imprimir();

    cout << endl << endl;


    return 0;
}