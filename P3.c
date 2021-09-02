// https://projecteuler.net/problem=3

#include <stdio.h>

int main(){
  long n;
  long div;
  n=600851475143;
  div=2;
  while(div<=n || n==1){
    if(n%div==0){
      printf("%ld\n",div);
      n=n/div;
    }
    else
      div=div+1;
  }
  return 0;
}
