#include "Quadrado.hpp"
void Quadrado :: setlado(int l){
    lado=l;
}
int Quadrado::area(){
    return lado*lado;
}
int Quadrado::getlado(){
    return lado;
}
void Quadrado::print(){
    cout<<"lado: "<<lado<<endl;
    cout<<"area: "<<area()<<endl;
}