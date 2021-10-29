#include <iostream>
#include <math.h>
#include "ConeReto.hpp"
using namespace std;

int main(void)
{
    ConeReto cone0; //raio e altura, respectivamente;
    cout<<"volume do cone reto: "<<cone0.get_volume_cone_reto()<<endl; 
    cout<<"Area da base do cone reto: "<<cone0.get_area_base_cone()<<endl; 
    cout<<"Area total do cone reto: "<<cone0.get_area_total_cone_reto()<<endl;
    cout<<"Quantidades de calculos de area e volume realizados ate entao: "<<cone0.contador_calculo<<endl;
    cone0.imprimir();
    
    cout<<"\n";
    
    ConeReto cone1(5,6); //raio e altura, respectivamente;
    cout<<"volume do cone reto: "<<cone1.get_volume_cone_reto()<<endl; 
    cout<<"Area da base do cone reto: "<<cone1.get_area_base_cone()<<endl; 
    cout<<"Area total do cone reto: "<<cone1.get_area_total_cone_reto()<<endl;
    cout<<"Quantidades de calculos de area e volume realizados ate entao: "<<cone1.contador_calculo<<endl;
    cone1.imprimir();

    return 0;
}
