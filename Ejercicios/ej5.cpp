//Implementar una clase arreglo, con las operaciones necesarias para poder ejecutar este programa
#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    arreglo a(7);
    a[0] = 3;
    cout << a[0] << endl;
    a[1] = 6;
    cout << a[1] << endl;
    
    a[2] = a[0] + a[1];
    cout << a[2] << endl;
    arreglo b = a;
    cout << b[2] << endl;

    return 0;
}

arreglo::arreglo(int x)
{
    if((x<1) || (x>500))
        tamanio =10;
    else tamanio = x;
    ptr = new int[tamanio];
    cout << "Se ejecuto constructor(int)" << endl;    
}

arreglo::arreglo( const arreglo& init)
{
    tamanio = init.tamanio;
    ptr = new int[tamanio];
    for(int i=0 ; i<tamanio ; i++)
    {
        ptr[i]=init.ptr[i];
    }
    cout << "Se ejecuto constructor(copia)" << endl;
}

arreglo::~arreglo()
{
    if(ptr)
    delete[]ptr;
    cout << "Se ejecuto destructor" << endl; 
}

arreglo& arreglo:: operator= (const arreglo &right)
{   
    cout << "Se ejecuto operador igual" << endl; 
    if(&right != this)  //si hago b=b no hace nada. si nó hace cosas.
    {
        if(tamanio != right.tamanio)      //si los tamanios son distintos crea un nuevo elemento y lo devuelve
        {
            int* aux;
            aux = new int[right.tamanio];
            delete[]ptr;
            tamanio = right.tamanio;
            ptr = aux;
            for(int i =0; i<tamanio ; i++)
            {
                ptr[i]=right.ptr[i];
            }
            return *this;
        }
        else                                //si los tamanios son iguales simplemente copia
        {
        for(int i =0; i<tamanio ; i++)
        {
            ptr[i]=right.ptr[i];
        }
        return *this;
        }
    }
}

int& arreglo::operator[](int subindice)
{   cout << "Se ejecuto operador[]" << endl; 
    return ptr[subindice];    
}



