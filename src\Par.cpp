#include <iostream>
using namespace std;
#include "Par.h"

/*Aplicacion de metodos*/

Par::Par()//Los '::' son delimitadores
{
    //ctor: inicializa el objeto
    x=0;
    y=0;
}

Par::~Par()
{
    //dtor
}

void Par::ver()
{
    cout << "Par (" << x << "," << y << ")" << endl;
}
void Par::SetPar(int a, int b)
{
    x = a;
    y = b;
}
int Par::GetParX()
{
    return x;
}
int Par::GetParY()
{
    return y;
}



