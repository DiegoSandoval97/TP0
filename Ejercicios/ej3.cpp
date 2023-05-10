#include <iostream>
using namespace std;

int main()
{
    int d = 1;
    const int& a=d; // REFERENCIA
    int const& b=d; //REFERENCIA
//    int& const c; //ERROR
    const int *p1;  //puntero a const int puede apuntar a otra cosa pero no puede modificar su valor
    int const *p2;  //puntero a const int idem anterior
    int* const p3=&d; // puntero a int constante no se puede apuntar a otra cosa pero puede cambiar su valor
//    const int* const p4 = &d; //puntero constante a entero constante, no puedo apuntar a otra cosa 
//ni modificar su valor a través de p4 OBS! ME MATA EL PROGRAMA ._.''
    cout <<sizeof(a)<<" "<<a<<endl;
    cout <<sizeof(b)<<" "<<b<<endl; 
  //  cout <<sizeof(c )<<" "<<c<<endl; 
    cout <<sizeof(p1)<<" "<<p1<<" "<<*p1<<endl;
    cout <<sizeof(p2)<<" "<<p2<<" "<<*p2<<endl;
    cout <<sizeof(p3)<<" "<<p3<<" "<<*p3<<endl; 
//    cout <<sizeof(p4)<<" "<<p4<<" "<<*p4<<endl;    
    cout <<"Direccion de d es "<<&d<<endl;  
    p1 = &d;
    cout <<sizeof(p1)<<" "<<p1<<" "<<*p1<<endl;
    p2 = &d;
    cout <<sizeof(p2)<<" "<<p2<<" "<<*p2<<endl;
//   p3 = &d; ERROR no puede apuntar a otra cosa, que no sea a lo que se apunto inicialmente
//   p4 = &d; //ERROR no puede apuntar a otra cosa, que no sea a lo que se apunto inicialmente
//  *p1 = 5;  ERROR no puede modificar el contenido de lo apuntado por p1
//  *p2 = 5;  ERROR idem anterior
    *p3 = 5;
//  *p4 = 5;  //ERROR idem *p1 y *p2   
    cout <<sizeof(p3)<<" "<<p3<<" "<<*p3<<endl;
    cout <<"el valor de d es :"<<d<<endl;
    return 0;
}