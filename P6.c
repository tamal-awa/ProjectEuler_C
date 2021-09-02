// https://projecteuler.net/problem=6

#include <stdio.h>

int main(){

  long n;
  long n1;  //sum of the squares
  long n2;  //square of the sum

  n=1;
  n1=0;
  n2=0;
  
  while(n<101){
    n1=n1+(n*n);
    n=n+1;
  }
  
  n=1;

  while(n<101){
    n2=n2+n ;
    n=n+1;
  }

  n2=n2*n2;

  printf("%ld\n",n2-n1);
  
}
