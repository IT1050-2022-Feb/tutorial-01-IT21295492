/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  //variable declaration 
  float distance, rent;

  printf("Enter the distance the van has travelled(in km) : ");//input distance 
  scanf("%f", &distance);//read distance 

  if(distance <= 30){
    rent = distance * 50;//making sure the distance is lessthan or equal to 30km and caculating the relevent rent 
  }
  else{
    rent = 30 * 50 + (distance - 30) * 40;////making sure the distance is greaterthan to 30km and caculating the rent likewise 
  }

  printf("Amount = %.2f", rent);//display rent
  return 0;
}//end of function main
