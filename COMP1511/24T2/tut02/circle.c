// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.1415

int main(void) {

  // define an int for the radius
  int radius;
  printf("Enter a radius: ");
  scanf("%d", &radius);
  // print out the radius
  //printf("The radius is %d\n", radius);

  // calculate the area using your radius variable
  double area = PI * radius * radius;

  // print out the area
  printf("The area is %.2lf\n", area);
	
  return 0;
}