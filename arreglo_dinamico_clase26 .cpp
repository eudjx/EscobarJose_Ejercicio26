#include <iostream>
#include <cmath>

// Código ayuda tomado de https://devcode.la/tutoriales/factorial-en-c++/

float valores_x=0;
float valores_y=0;

int main(void){
        int N;
        float **mat= new float *[N];
        std::cout<<"Ingrese un número:"<<std::endl;
        std::cin<<N;
        for(int i=0; i<N; i++){
            mat[i]=factorial;
        }
        mat;
        delete [] mat;
    return 0;
}

float factorial(int N, float **mat){
    //int N=0;
    int fact;

    if(N<0){
        fact =0;
    }
   else if(N==0){
       fact=1;
   }
   else{
      for (int i = 1; i <= N; i++){
         fact = fact*i;
      }
   }
}