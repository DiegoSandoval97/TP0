#ifndef COMPLEJO_INCLUIDO
#define COMPLEJO_INCLUIDO

class complejo
{
    double vec[2];
public:
    complejo ();                //constructor sin argumentos
    complejo(const complejo& ); //constructor copia
    complejo (double,double);   //constructor con dos argumentos
    ~complejo();
    double getreal();
    double getimag();
    void setreal(double);
    void setimag(double);
    complejo operator + (const complejo &);
    complejo operator + (double);
    complejo & operator= (const complejo &);
};
#endif