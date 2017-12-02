#include <stdio.h>
#include <math.h>
//This file needs to be compiled with  -lm
//unused recursion sequence to text it
int sequence(int n){
  if(n<=1){
    return n;
  }
  else if(n<0){
    return 0;
  }
  return sequence(n-1)+sequence(n-2);
}
//the actual fibonacci formula using phi
int fib(int n){
  double phi = (1.00+sqrt(5.00))/2.00;
  double phip = (1.00-sqrt(5.00))/2.00;
  return floor((pow(phi, (double)n)-pow(phip, (double)n))/sqrt(5.00));
}
int main(int argc, char **argv){
  //z is the summation of the values
  int y, x = 0, w=0, z=0,n=3;
  printf("Enter a value to reach:\t");
  //x being the last term, y being the number skipped between
  scanf(" %d", &x);

  while( z < x){
      w+=z;
      z=fib(n);
      n+=3;
    
  }  
  
  printf("\nThe summation of all the fibbonacci values up to %d is: %d\n", x, w);
  return 0;
}
