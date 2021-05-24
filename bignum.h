#include<iostream>
#include<string>
using namespace std;

#ifndef BIGNUM_INCLUDED
#define BIGNUM_INCLUDED

#define ASCII_FIX 48

class bignum
{
  private:
    unsigned short *digits;
    unsigned short precision;
    //unsigned short len;
    bool signo; //True sea positivo y False sea Negativo
    //...
  public:
    //...
    bignum();
    bignum(const unsigned short);
    bignum(const string&);
    ~bignum();
    void set_p(unsigned short);
    unsigned short get_p();
    //friend void set_len();
    //friend unsigned char get_len();
    //friend bignum to_bignum(int);

    friend bignum operator+(const bignum&, const bignum&);
    friend bignum operator-(const bignum&, const bignum&);
    friend bignum operator*(const bignum&, const bignum&);
    const bignum operator=(const bignum&);
    const bignum& operator=(const string&);
    friend std::ostream& operator<<(std::ostream&, const bignum&);
    friend std::istream& operator>>(std::istream&, bignum&);
};


#endif