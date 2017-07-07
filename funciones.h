#include"gauss.h"

template<typename T>
bool Gauss<T>::llenar()
{
  cout<<"Empezando gauss....\n";
  for(int i=0;i<fila;i++){
    cout<<"ingresando ecuacion Nro :"<<i+1<<endl;
    for(int j=0;j<columna;j++){
      cout<<">";cin>>matrix[i][j];
    }
  }
}

template<typename T>
bool Gauss<T>::inversa(int posf,int posc)
{
  Fraction valor=matrix[posf][posc].inversa();
  Fraction x;
  for(int i=0;i< columna;i++){
    x=valor*matrix[posf][i];
    x.redondeo();
    matrix[posf][i]=x;
  }
}
template <typename T>
bool Gauss<T>::opuesto(int posf,int posc)
{
  T valor=-1*matrix[posf][posc];
  for(int i=0;i<columna;i++){
    matrix[posf][i]=(valor*matrix[posf][posf])+matrix[posf][i];
  }
}
template <typename T>
bool Gauss<T>::ejecutar()
{
    for(int j=0;j<columna;j++){
      for(int i=0;i<fila;i++){
        inversa(j,j);
        if(j==i){
          continue;
        }
        else{
          opuesto(j,i);
        }
      }
    }
    cout<<"las variables son : \n";
    for(int i=0;i<fila;i++)
      cout<<matrix[i][columna-1];
    cout<<endl;

}
