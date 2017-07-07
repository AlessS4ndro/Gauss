#include<iostream>

using namespace std;

template<typename T>
class Gauss
{
  template<typename U>
  friend ostream & operator<<(ostream &,Gauss<U> &);
  T** matrix;
  int fila;
  int columna;
public:
  Gauss(int f,int c):fila(f),columna(c)
  {
    matrix=new T *[f];
    for(int i=0;i<f;i++){
      matrix[i]=new T[c];
    }
  }
  bool llenar();
  bool inversa(int,int);
  bool opuesto(int,int);
  bool ejecutar();

};
struct Fraction
{
  int denominador;
  int numerador;
  Fraction(int n,int d):numerador(n),denominador(d){}
  Fraction(int n):numerador(n),denominador(1){}
  Fraction(){}
  int redondeo()
  {
    if(numerador==denominador)
      return numerador/denominador;
  }
  int invertir()
  {
    int temp;
    temp=numerador;
    numerador=denominador;
    denominador=temp;
  }

};
template <typename U>
ostream & operator<<(ostream &o,Gauss<U> &gs)
{
  for(int i=0;i<gs.fila;i++){
    o<<"[\t";
    for(int j=0;j<gs.columna;j++){
      o<<gs.matrix[i][j]<<"\t";
    }
    o<<"]\n";
  }
  return o;
}
Fraction operator* (Fraction &f1,Fraction &f2)
{
  Fraction f(f1.numerador*f2.numerador,f1.denominador*f2.denominador);
  return f;
}
Fraction operator *(Fraction &f1,int &i )
{
  Fraction n(f1.numerador*i,f1.denominador);
  return n;
}
Fraction operator +(Fraction &f1,Fraction &f2)
{
  int 
  Fraction
}
ostream & operator<<(ostream &o,Fraction &f)
{
  o<<f.numerador<<"/"<<f.denominador;
  return o;
}
istream & operator>>(istream &i,Fraction &f)
{
  i>>f.numerador;
  return i;
}
