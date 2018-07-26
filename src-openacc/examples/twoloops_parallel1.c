#include <stdlib.h> 

int main(int argc, char **argv) 
{

  long int n=1000000, i;
  float a[n], b[n];

  #pragma acc parallel
{
    #pragma acc loop
    for (i=0; i<n; i++){
      //for (int j=0; j<10000000000000; j++){
         a[i] = 3.0f*(float)(i+1);
      }
    //#pragma acc wait
    #pragma acc loop
    for (i=0; i<n; i++)
       b[i] = 2.0f*a[i];
  }

  printf("%f \t %f \n", a[0], a[n-1]);
  printf("%f \t %f \n", b[0], b[n-1]);

  return 0; 

}
