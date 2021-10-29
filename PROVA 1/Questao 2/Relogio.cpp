#include "Relogio.hpp"

Relogio::Relogio()
    {
     time_t timer;
  struct tm *horarioLocal;

  time(&timer); // Obtem informações de data e hora
  horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

  int hora = horarioLocal->tm_hour;
  int min  = horarioLocal->tm_min;
  int sec  = horarioLocal->tm_sec;

  cout << "Horario: " << hora << ":" << min << ":" << sec << endl;
    }

Relogio::Relogio(int hora, int min, int seg)
{
    sethora(hora);
    setminutos(min);
    setsegundos(seg);
}
    void Relogio::imprimirRelogio()
            {
                cout<< hora << " hora(s) " << minutos << " minuto(s) " << segundos <<" segundos"<<endl;      
            }

    bool Relogio::sethora(int h)
        {
            if(h >= 0)
            {
                hora = h;   
            }    
            else 
            {
                return false;
            }
             return true;
        }
    
    int Relogio::gethora()
        {
            return hora;
        }

    void Relogio::setminutos(int m)
        {
            minutos = m;
        }
    int Relogio::getminutos()
        {
            return minutos;
        }


    void Relogio::setsegundos(int s)
        {
            segundos = s;
        }
    int Relogio::getsegundos()
        {
            return segundos;
        }

    int Relogio::incrementaHora()
        {
            int incrementaH = 0;
            return incrementaH = gethora()+1;
        }
    int Relogio::incrementaMinutos()
        {
            int incrementaM=0;
            return incrementaM = getminutos()+1;
        }
    int Relogio::incrementaSegundos()
    {
        int incrementaS=0;
        return incrementaS = getsegundos() + 1;
    }
    int Relogio::converteSegundo()
    {
        int convercao=0;
        return convercao = gethora() * 3600 + getminutos() * 60 + getsegundos(); 
    }