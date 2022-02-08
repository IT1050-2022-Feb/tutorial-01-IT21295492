/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  //variable declaration 
  int n, count = 1, sum = 0;
  
  printf("Enter a positive number to calculate the sum : ");//input a number 
  scanf("%d", &n);//read the number 

  printf("Sum of numbers from 1 to %d is : \n", n);

  while(count <= n){//loop n times 
    sum = sum + count;//calculating the sum of numbers 
    printf("%d ", count);//displaying the numbers which are used to calculate the sum 
    count++;

    if(count > n){
      printf(" = %d\n", sum);//condition to check whather the count is greaterthan n to display the sum   
    }
    else{
      printf("+ ");// condition to check whather the count is lessthan n to displaying the addition symbol 
    }
  }
  return 0;
}//end of function main

