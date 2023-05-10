#ifndef ARREGLO_INCLUIDO
#define ARREGLO_INCLUIDO

class arreglo
{
    int *ptr;
    int tamanio;
public:
 //   arreglo ();
    arreglo(const arreglo& );
    arreglo (int);
    ~arreglo();
    int& operator[](int);
    arreglo & operator= (const arreglo &);
};
#endif
