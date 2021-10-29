//g++ main.cpp DadosEstatisticos.cpp -o main
#include "DadosEstatisticos.hpp"

int main(void)
{
    DadosEstatisticos dados0("arquivo0.txt");//armazena os dados implementados pelo usuário
    DadosEstatisticos dados1(0,100,10);//gera 10 números aleatórios de 0 até 100
    cout<<endl;
    dados1.calculaMedia();//mostra a média do dados do usuario ou os dos dados aletórios
    cout<<endl;
    dados1.calculaVariancia();//mostra a variância do dados do usuario ou os dos dados aletórios
    cout<<endl;
    dados1.calculaDesvioPadrao();//mostra o desvio padrão do dados do usuario ou os dos dados aletórios
    cout<<endl;
    dados0.printEstatistica();//imprime em tela a média, a variância e o desvio padrão do objeto
    cout<<endl;
    dados1.printDados();//imprime na tela os elemntos do objeto
    cout<<endl;
    dados1.salvarDados("arquivo_metodo.txt");//implementa os elementos do objeto em um arquivo de texto
    return 0;
}