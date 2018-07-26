#include <stdlib.h> 

int main(int argc, char **argv) 
{

  int N=1000;
  float a=3.0f;

  float * x = (float*)malloc(N * sizeof(float)); 

  for (int i = 0; i < N; i++)  x[i] = 2.0f; 

#pragma acc kernels 
  for (int i = 0; i < N-1; i++) { 
     x[i] = a * x[i+1] ;
  } 

  printf("%f \t %f \n", x[0], x[N-1]);

  return 0; 

}
