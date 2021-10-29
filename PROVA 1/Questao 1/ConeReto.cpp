#include "ConeReto.hpp"
int ConeReto::contador_calculo;

//contrutor sem parâmetros com valores padrões
ConeReto::ConeReto()
    {
    set_geratriz(2,6);
    set_volume_cone_reto(2,6);
    set_area_base_cone_reto(2);
    set_area_total_cone_reto(2);
    contador_calculo=contador_calculo+3;
    imprimir();
    }

//contrutor com parâmetros onde os valores são instanciados pelo usuário
ConeReto::ConeReto(double x, double y)
    {
    set_geratriz(x,y);
    set_volume_cone_reto(x,y);
    set_area_base_cone_reto(x);
    set_area_total_cone_reto(x);
    //a cada obejto criado são feitos: um calculo da area da base, um da area total e um do volume (3 operações);
    contador_calculo=contador_calculo+3;
    imprimir();
    }

void ConeReto::set_area_base_cone_reto(double raio)
    {
        area_base_cone_reto = 3.14 * pow(raio,2);
    }
double ConeReto::get_area_base_cone()
    {
        return area_base_cone_reto;
    }

void ConeReto::set_volume_cone_reto(double raio, double altura)
    {
        volume_cone_reto= (3.14 * pow(raio,2) * altura) / 3;
    }
double ConeReto::get_volume_cone_reto()
    {
        return volume_cone_reto;
    }

//metodos para acessar o metodo privado auxiliar "geratriz_auxiliar_cone"
void ConeReto::set_geratriz(double raio, double altura)
    {
    geratriz_auxiliar_cone=sqrt( pow(altura,2) + pow(raio,2) );
    }
double ConeReto:: get_geratiz()
    {
    return geratriz_auxiliar_cone;
    }

//calculo da area total do cone reto usando o metodo auxiliar "geratriz_auxiliar_cone"
void ConeReto::set_area_total_cone_reto(double raio)
    {
        area_total_cone_reto = 3.14 * raio * ( raio + get_geratiz() );
    }
double ConeReto::get_area_total_cone_reto()
    {
        return area_total_cone_reto;
    }

void ConeReto::imprimir()
{
    cout<<"O cone em questao tem "<<get_volume_cone_reto()<<" de volume, "<<get_area_base_cone()<<
    " de area da base e "<<get_area_total_cone_reto()<<" de area total";
}