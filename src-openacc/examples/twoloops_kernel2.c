#include <stdlib.h> 

int main(int argc, char **argv) 
{

  int n=1000, i;
  float a[n], b[n];

  #pragma acc kernels
    for (i=0; i<n; i++)
       a[i] = 3.0f*(float)(i+1);

  #pragma acc kernels
    for (i=0; i<n; i++)
       b[i] = 2.0f*a[i];

  printf("%f \t %f \n", a[0], a[n-1]);
  printf("%f \t %f \n", b[0], b[n-1]);

  return 0; 

}
