#include <stdio.h>
#include <math.h>

int sequence(int n){
  if(n<=1){
    return n;
  }
  else if(n<0){
    return 0;
  }
  return sequence(n-1)+sequence(n-2);
}
int fib(int n){
  double phi = (1.00+sqrt(5.00))/2.00;
  double phip = (1.00-sqrt(5.00))/2.00;
  return floor((pow(phi, (double)n)-pow(phip, (double)n))/sqrt(5.00));
}
int main(int argc, char **argv){
  //z is the summation of the values
  int y, x = 0, w=0, z=0,n=3;
  printf("type 2 numbers:\t");
  //x being the last term, y being the number skipped between
  scanf(" %d", &x);

  while( z < x){
     
   //printf("\t z=%d, n=%d. w=%d", z,n,w); 
   //if(z%2==0)
      w+=z;
      z=fib(n);
      n+=3;
     // printf("\t w=%d",w);
  }  
  //printf(" %f\n", fib(64));
  printf(" %d \n", w);
  return 0;
}
