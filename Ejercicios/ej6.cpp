#include<iostream>
#include "complejo.h"

using namespace std;

int main()
{
    int n;
    double real;
    double imag;
    cout << "Ingrese  la cantidad de numeros complejos" <<endl;
    cin >> n;
    cout << "Ingrese la sucesión de números complejos"<< endl;

    for (size_t i = 0; i < n; i++)
    {
    cout << "Ingrese la parte real del complejo n°"<< i+1 <<endl;
    cin>>real;
    cout << "Ingrese la parte imaginaria del complejo n°"<< i+1 <<endl;
    cin>>imag;
    complejo a(real,imag);       //vector? será mejor?
    }



    return 0;
}

    complejo::complejo()
    {
        vec[0]=0.0;
        vec[1]=0.0;
    }

    complejo::complejo(const complejo& c)
    {
        vec[0]=c.vec[0];
        vec[1]=c.vec[1];
    }

    complejo::complejo (double x,double y)
    {
        vec[0]= x;
        vec[1]= y;
    }

    complejo::~complejo()
    {}

    double complejo::getreal()
    {
        return vec[0];
    }

    double complejo::getimag()
    {
        return vec[1];
    }

    void complejo::setreal(double x)
    {
        vec[0]= x;
    }

    void complejo::setimag(double y)
    {
        vec[1]=y;
    }

    complejo complejo::operator + (const complejo & c)
    {
        return complejo(vec[0] +c.vec[0] , vec[1] +c.vec[1]);
    }

    complejo complejo::operator + (double x)
    {
        return complejo(vec[0]+ x , vec[1]);
    }

    complejo & complejo::operator = (const complejo & c)
    {
        vec[0]= c.vec[0]; 
        vec[1]= c.vec[1];
        return *this;
    }