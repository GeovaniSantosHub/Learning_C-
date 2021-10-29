#ifndef _CONERETO_HPP
#define _CONERETO_HPP
#include <iostream>
#include <math.h>
using namespace std;
class ConeReto
{
    public:
    
    //metodo estático que conta a quantidade de calculos de area e volume
    static int contador_calculo;
    
    //contrutor sem parâmetros
    ConeReto();
    
    //contrutor com parâmetros
    ConeReto(double x, double y);
    
    void set_volume_cone_reto(double raio, double altura);
    double get_volume_cone_reto();
    
    void set_area_base_cone_reto(double raio);
    double get_area_base_cone();

    void set_geratriz(double raio, double altura);
    double get_geratiz();
                                                                
    void set_area_total_cone_reto(double raio);
    double get_area_total_cone_reto();

    //imprime em tela o estado atual de um cone e suas informações de área e volume
    void imprimir(); 
    
    private:
    
    double geratriz_auxiliar_cone; //Método privado auxiliar que calcula a geratriz de um objeto da classe ConeReto
    double volume_cone_reto;
    double area_base_cone_reto;
    double area_total_cone_reto;
};
#endif
