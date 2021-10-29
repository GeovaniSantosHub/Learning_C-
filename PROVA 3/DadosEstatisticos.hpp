#ifndef _DADOSESTATISTICOS_HPP
#define _DADOSESTATISTICOS_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <random>
#include <time.h>
#include <vector>
#include <math.h>
using namespace std;

class DadosEstatisticos
{
public:
//Construtor que cria um arquivo e implementa elementos instanciados pelo usuario nesse
DadosEstatisticos(string nomeArquivo);
//Construtor que gera dados aleatórios
DadosEstatisticos(double min, double max, int n_am);
//Destrutor
~DadosEstatisticos();

double calculaMedia() const;

double calculaVariancia() const;

double calculaDesvioPadrao() const;

void printEstatistica() const;

void printDados() const;

bool salvarDados(string nomeArquivo);

private:
double *dados;//ponteiro de vetor
double tam;//tamanho
double dados_inst;
double maximo=0;

double Media;
double desvio=0;
double variancia=0;
double DesvioPadrao;

//metodos que acumulam valores para o calculo da media, desvio e variância 
double soma_media_usuario=0;
double soma_media_random=0;
double soma_desvio_random=0;
double soma_variancia=0;
};

#endif