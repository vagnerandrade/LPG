#include <stdio.h>
#include <stdlib.h>


int fibo(int n){

  if((n==1)||(n==0)){
    return(n);
  }
  else{
    return(fibo(n-1)+fibo(n-2));
  }
}

int main(){
  int n, i =0;
  printf("digite a sequencia fibonacci: \n");
  scanf("%d",&n);
  printf("total de voltas \n");
  while(i<n){
    printf("%d\n",fibo(i) );
  }
  return 0;
}
