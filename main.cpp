#include"funciones.h"
#include<cstdlib>



int main(int argc,char* argv[])
{
  Gauss<Fraction> matriz(atoi(argv[1]),atoi(argv[2]));

  matriz.llenar();
  cout<<matriz;
  matriz.ejecutar();
  cout<<matriz;






  return 0;
}
