/** 
 * https://projecteuler.net/problem=2
 * TamalAWA
 */

#include <stdio.h>

main(){
  long n1,n2,n3;
  long ans;
  n1=1;
  n2=2;
  n3=n1+n2;
  ans=0;
  
  while(n2<4000000){
    if(n2%2==0)
      ans=ans+n2;
    n3=n1+n2;
    n1=n2;
    n2=n3;
  }
  printf("%ld\n",ans);
}
