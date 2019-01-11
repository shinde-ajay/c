/*
  To calculate simple interest
  Author: Ajay Shinde Date:11/01/2019
*/
#include<stdio.h>

int main(){
  int p,n;
  float r,si;
  printf("Enter values of p,n,r");
  scanf("%d %d %f",&p,&n,&r);

  si = p*n*r/100;
  printf("%f",si);

  return 0;
}
