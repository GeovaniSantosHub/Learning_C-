#include <iostream>
using namespace std;
int main(void){
  int segundos,minutos, horas, resto,s;
  cout << "Digite uma quantidade de segundos: ";
  cin >> segundos;
  horas = segundos/3600;
  resto = segundos % 3600;
  minutos = resto/60;
  s = resto % 60;
  cout <<horas<<"horas " <<minutos<< "minutos e " <<s<< "segundos" ;
  return 0;
}