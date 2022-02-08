/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //variale declaration 
  int mark1,mark2,total;
  float average;

  printf("Enter marks for subject no.1 : ");//input mark 1
  scanf("%d", &mark1);//read mark 1
  printf("Enter marks for subject no.2 : ");//input mark 2
  scanf("%d", &mark2);//read mark 2 

  total = mark1 + mark2;//calculate the total of two marks
  average = (float)total/2;//calculate average of two marks 
  printf("Average mark is %.2f\n", average);//display average mark
  return 0;
}//end of the function main

