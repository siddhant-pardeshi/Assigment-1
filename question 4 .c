//Write a program to find the area of the circle.Take radius of circle from the user as input and print the result below in given format.
#include <stdio.h>
int main()
{
float area,radius;

printf("Enter radius of circle");

scanf("%f",&radius);

area = 3.14*radius*radius;

printf("Area of Circle is %f having radius %f",area,radius);

return 0;
}
