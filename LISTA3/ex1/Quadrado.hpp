#ifndef _QUADRADO_HPP_
#define _QUADRADO_HPP_
#include <iostream>
using namespace std;
class Quadrado 
{
    public:
    int getlado();
    void setlado(int);
    int area();
    void print();
    private:
    int lado = 0;
};
#endif