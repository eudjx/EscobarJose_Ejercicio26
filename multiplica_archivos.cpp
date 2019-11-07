#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;


// Código modificado del ya existente en el repositorio del profesor Jaime Forero, ejercicio 26-(suma.cpp y archivos.cpp).

/* La función multiplica los valores de un array. Primero se definen las variables que leen los archivos .txt y multiplican los arreglos, los cuales reciben unos atributos  
*/

float * read_file(string filename, int *n_points);
float mult_values(float *x, float *y, int n_points);
void escribe(string filename);

int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;

  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  
  std::cout <<"El resultado de multiplicar los valores en los arreglos es: "<<mult_values(x, y, n_x) << " "<< std::endl;


  filename = "multiplicados.dat";
  escribe(filename);
  
  return 0;
}

float * read_file(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;

  /*cuenta lineas*/
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    n_lines++;
    getline(infile, line);
  }
  infile.close();
  *n_points = n_lines;

  /*reserva la memoria necesaria*/
  array = new float[n_lines];

  /*carga los valores*/
  i=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[i] = atof(line.c_str());
    i++;
    getline(infile, line);
  }
  infile.close();

  return array;
}




float mult_values(float *x, float *y, int n_points){
  float a=0;
  int i;
  
  for(i=0;i<n_points;i++){
    a += x[i] * y[i];
  }
  return a;
}

void escribe(string filename){
  ofstream outfile;


  outfile.open(filename);

  cout << "Escribiendo en " << filename << endl; 
  for (int i=0; i < 10; i++){
    outfile << i << endl;
  }
  outfile.close(); 
}
