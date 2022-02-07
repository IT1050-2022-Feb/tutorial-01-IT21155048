/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2, avg, sum;
   printf("Input mark 1 : ");
   scanf("%f",&mark1);
   printf("Input mark 2 : ");
   scanf("%f",&mark2);
   sum = mark1 + mark2;
   avg = sum/2;
   printf("Average = %f ", avg);
   
  return 0;
}

