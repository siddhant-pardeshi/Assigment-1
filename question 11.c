//Write a program to take time as an input in below given format and convert the time format and display the result as given below.
//User input date format-"HH:MM"
//Output Format-"HH hour and MM Minute"

#include <stdio.h>
int main()
{
 int x,y;

 printf("Enter time in HH:MM format");

 scanf("%d:%d",&x,&y);

 printf("%d hour and %d minute",x,y);

 return 0;

 }
