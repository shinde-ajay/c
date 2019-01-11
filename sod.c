/*
  program to calculate the sum of 5 digits.
  Author : Ajay Shinde Date:11/01/2019
*/

#include<stdio.h>

int main(){
  int num;
  printf("Enter Five Digit Value = ");
  scanf("%d",&num);

  int sum = 0;
  int new_num;
  sum = num%10+sum;
  new_num = num/10;
  sum = new_num%10+sum;
  new_num = new_num/10;
  sum = new_num%10+sum;

  new_num = new_num/10;
  sum = new_num%10+sum;

  new_num = new_num/10;
  sum = new_num%10+sum;

  // new_num = num/10;
  // sum = num%10+sum;

  printf("%d",sum);

  return 0;
}
