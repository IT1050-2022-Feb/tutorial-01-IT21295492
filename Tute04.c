/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
//function declaration 
int minimum(int a, int b);
int maximum(int x, int y);
int multiply(int p, int q);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

//defining the function minimum
int minimum(int a, int b){
  int mini;
  if(a < b){
    mini = a;
  }
  else{
    mini = b;
  }
  return mini;
}


//defining the function maximum
int maximum(int x, int y){
  int max;
  if(x > y){
    max = x;
  }
  else{
    max = y;
  }
  return max;
}

//defining the function multiply
int multiply(int p, int q){
  int mul;
  mul = p * q;
  return mul;
}
