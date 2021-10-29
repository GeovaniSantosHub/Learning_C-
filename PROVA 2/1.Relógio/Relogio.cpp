#include "Relogio.hpp"

ostream &operator<<( ostream &output, const Relogio &h )
  {
        output << "("<< h.horas<< h.minutos << h.segundos<< ")"<<endl;
    return output;
  }


Relogio::Relogio()
{
    time_t timer;
    struct tm *horarioLocal;

    time(&timer);                     
    horarioLocal = localtime(&timer); 

    setHorario(horarioLocal->tm_hour, horarioLocal->tm_min, horarioLocal->tm_sec);
}

Relogio::Relogio(int h, int m, int s)
{
    if (!setHorario(h, m, s)) 
    {
        setHorario(0, 0, 0);
    }
}

bool Relogio::setHorario(int h, int m, int s)
{
    if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
    {
    
        horas = h;
        minutos = m;
        segundos = s;

        return true;
    }

    return false; 
}

void Relogio::incrementaHoras()
{
    int aux = horas + 1; 

    (aux <= 23) ? setHoras(aux) : setHoras(0);
}


void Relogio::incrementaMinutos()
{
    int aux = minutos + 1; 

    (aux <= 59) ? setMinutos(aux) : setMinutos(0);
}

void Relogio::incrementaSegundos()
{
    int aux = segundos + 1; 

    (aux <= 59) ? setSegundos(aux) : setSegundos(0);
}

Relogio Relogio::operator- (const Relogio & r1)
{
    int maior = maiorHorario(this-> r1,this-> r2);

    int horasA, minutosA, segundosA;
    int horasB, minutosB, segundosB;

    if(maior <= 1)      
    {
    
        horasA = r1.getHoras();     
        minutosA = r1.getMinutos();
        segundosA = r1.getSegundos();

        horasB = r2.getHoras();
        minutosB = r2.getMinutos();
        segundosB = r2.getSegundos();        
    }
    else  
    {
      
        horasA = r2.getHoras();
        minutosA = r2.getMinutos();
        segundosA = r2.getSegundos();

     
        horasB = r1.getHoras();
        minutosB = r1.getMinutos();
        segundosB = r1.getSegundos();
    }

    
    bool emprestimo = false;                        
    int resultadoSegundos = segundosA - segundosB;  
    
    if (resultadoSegundos < 0)         
    {
        resultadoSegundos += 60;        
        emprestimo = true;             
    }

    int resultadoMinutos = minutosA - minutosB - emprestimo;  
    
    if (resultadoMinutos < 0)      
    {
        resultadoMinutos += 60;    
        emprestimo = true;         
    }
    else
    {
        emprestimo = false;       
    }

    int resultadoHoras = horasA - horasB - emprestimo;  

    return Relogio(resultadoHoras,resultadoMinutos,resultadoSegundos);
}

Relogio Relogio::operator+ ( Relogio & r1)
{
    int maior = maiorHorario(this->r1, this-> r2);

    int horasA, minutosA, segundosA;
    int horasB, minutosB, segundosB;

    if(maior <= 1)      
    {
       
        horasA = this->r1.getHoras();     
        minutosA = this->r1.getMinutos();
        segundosA = this->r1.getSegundos();

      
        horasB = r1.getHoras();
        minutosB = r1.getMinutos();
        segundosB = r1.getSegundos();        
    }
    else   
    {
      
        horasA = r1.getHoras();
        minutosA = r1.getMinutos();
        segundosA = r1.getSegundos();

      
        horasB = this->r1.getHoras();
        minutosB = this->r1.getMinutos();
        segundosB = this->r1.getSegundos();
    }

    
    bool emprestimo = false;                        
    int resultadoSegundos = segundosA + segundosB;  
    
    if (resultadoSegundos < 0)          
    {
        resultadoSegundos += 60;        
        emprestimo = true;             
    }

    int resultadoMinutos = minutosA + minutosB + emprestimo;   
    
    if (resultadoMinutos < 0)      
    {
        resultadoMinutos += 60;    
        emprestimo = true;        
    }
    else
    {
        emprestimo = false;        
    }

    int resultadoHoras = horasA + horasB + emprestimo;  

    return Relogio(resultadoHoras,resultadoMinutos,resultadoSegundos);
}

int Relogio::getHoraSegundos() const
{
    
    return horas * MULTI_HORAS_SEGUNDOS + minutos * MULTI_MINUTOS_SEGUNDOS + segundos;
}


int Relogio::getHoras() const
{
    return horas;
}

int Relogio::getMinutos() const
{
    return minutos;
}

int Relogio::getSegundos() const
{
    return segundos;
}

bool Relogio::setHoras(int h)
{
    if (h >= 0 && h <= 23) 
    {
        horas = h;   
        return true; 
    }

    return false; 
}

bool Relogio::setMinutos(int m)
{
    if (m >= 0 && m <= 59) 
    {
        minutos = m; 
        return true; 
 
    }
    return false; 
}



bool Relogio::setSegundos(int s)
{
    
    if (s >= 0 && s <= 59) 
    {
        segundos = s; 
        return true; 
    }

    return false; 
}



void Relogio::imprimir() const
{
    cout << setfill('0') << setw(2);
    cout << horas << ':' << setw(2) << minutos << ':' << setw(2) << segundos;
}

int Relogio::maiorHorario(const Relogio & r1, const Relogio & r2)
{
    int horasR1 = r1.getHoras();
    int minutosR1 = r1.getMinutos();
    int segundosR1 = r1.getSegundos();

    int horasR2 = r2.getHoras();
    int minutosR2 = r2.getMinutos();
    int segundosR2 = r2.getSegundos();

    if (horasR1 > horasR2)
    {
        return 1;       
    }
    else if (horasR2 > horasR1)
    {
        return 2;       
    }
    else if (minutosR1 > minutosR2)
    {
        return 1;      
    }
    else if (minutosR2 > minutosR1)
    {
        return 2;     
    }
    else if (segundosR1 > segundosR2)
    {
        return 1;     
    }
    else if (segundosR2 > segundosR1)
    {
        return 2;    
    }

    return 0;        
}