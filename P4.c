// https://projecteuler.net/problem=5

#include <stdio.h>

int main(){

  long n;
  long div;
  n=1;
  div=2;
  while(div<20){
    if(n%div==0)
      div=div+1;
    else{
      n=n+1;
      div=2;

    }
  }
  printf("%ld\n",n);


  
}
