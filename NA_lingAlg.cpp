#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


double** get_Matrix(int N, int M);
int matrix_product(int num1, int num2, int num3 , int num4);

//Metodo para inicializar una matriz

double** get_Matrix(int N, int M){
  
   //matriz
  double **mat = new double*[N];

  //Inicializo la matriz
  int i;
  
  for(i=0;i<N;i++){
    
    mat[i] = new double[M];
  }

  int j;

  // Rellena las filas de la matriz
  for(i=0;i<N;i++){
    
    //Rellena las columnas de la matriz
    for (j=0;j<M;j++){
      cout<<"Ingresar numero"<< endl;
      double var;
      cin>>var;
      
      
      mat[i][j] = var ;
      cout << mat[i][j]<< "";      
    }
    cout<<endl;

    
   }
  return mat ;

}

int matrix_product(int m1, int m2){

}

//Funcion main
int main(){

  //Se ingresan el numero de filas
  
  cout<<"Ingresar numero de filas"<< endl;
  double N1;
  cin>>N1;

  // Se ingresan el numero de filas
  
  cout<<"Ingresar numero de columnas"<< endl;
  int N;
  cin>>N;

  //Se ingresan el numero de columnas
  int M;
  cin>>M;

  get_Matrix(N,M);

  
 
  return 0;
  
  
  
}
