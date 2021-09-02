/*
https://projecteuler.net/problem=1

Find the sum of all the multiples of 3 or 5 below 1000.

*/

#include <stdio.h>

void main(){
  int n;
  int r;
  n=0;
  r=0;
  while(n<1000){
    if(n%3==0 || n%5==0){
      r=r+n;
	}
    n=n+1;
       }
  printf("%d\n",r);
}
  

