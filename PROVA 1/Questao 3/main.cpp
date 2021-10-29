#include <iostream>
#include <cstdlib>
#include <time.h>
#include "ControladorPID.hpp"
using namespace std;

int main(void)
{
    double valor_anterior=0;
    double soma_erros=0;
    double calcular_funcao=0;
    
    //kp, ki, kd, valor de refereência e tempo de amostragem, respectivamente;
    ControladorPID fabrica1(1, 1, 1, 250, 3);
    cout<<" "<<endl;

    cout<<"Valor de referencia: "<<fabrica1.get_referencia()<<endl;
    cout<<"Tempo de Amostragem: "<<fabrica1.get_tAmostragem()<<endl;

    cout<<" "<<endl;
    
    //semente de numeros aleatórios não repetidos ´para os valores de medição;
    srand(time(NULL));
    
    //vetor que vai receber os valores de erro do sistema;
    double * erro = new double [fabrica1.get_tAmostragem()];
    
    //no tempo de 0 segundos nenhuma operação de detecção foi realizada;
    cout<<"u(0)=0"<<endl;
    for (int k=0;k<fabrica1.get_tAmostragem();k++)
    {
        valor_anterior=0;
        if (k>0)
        {
            valor_anterior=erro[k-1];
        }
        //valor de medição realizado pelo ControladorPID, esses gerados randomicamente;
        fabrica1.valor_medido = rand() % 300;
        
        //erro = valor de refência - valor que foi medido pelo controlador;
        erro[k]=fabrica1.get_referencia() - fabrica1.valor_medido;
        
        //valor estático que acumula os valores dos erros registrados pelo sistema
        soma_erros=soma_erros + erro[k];
       
        cout<<" "<<endl;
        //calculo baseado na função que foi fornecida na questão;
        calcular_funcao = fabrica1.get_Kp() * erro[k] + fabrica1.get_Ki() * fabrica1.get_tAmostragem()
        * soma_erros * erro[k] + (fabrica1.get_Kd()/fabrica1.get_tAmostragem()) 
        * (erro[k]- valor_anterior);
        
        //resultados
        cout<<"u("<<k+1<<")= "<<calcular_funcao<<" "<<endl; 
        cout<<" "<<endl;
    }
    //Liberando memória ocupada pelo vetor "erro"
    delete erro;
    erro = NULL;
    return 0;
}