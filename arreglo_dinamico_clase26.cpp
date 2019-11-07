#include <iostream>
#include <cmath>

// Código ayuda tomado de https://devcode.la/tutoriales/factorial-en-c++/

float valores_x=0;
float valores_y=0;

int main(){
        int i;
        int factorial=1;
        int N;
        float **mat= new float *[N];
        
        for (int i=0; i < N; i++){
            if (i == 0){
                factorial=0;
            }
            else {
                factorial=factorial*i;
            }
            
            mat[i]= new float[factorial];
            std::cout<< mat[i] <<std::endl;
        }
        delete [] mat;
    return 0;
}