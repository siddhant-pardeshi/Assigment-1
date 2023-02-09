//Write a program to take date as an input in below given format and convert the date format and display the result as given below.
// User input date format-"DD/MM/YYYY"
//Output Format "Day-DD,Month-MM,Year-YYYY"
#include <stdio.h>
int main()
{
 int x,y,z;
 printf("Enter Date-");

 scanf("%d/%d/%d",&x,&y,&z);

 printf("%d/%d/%d\n",x,y,z);

 printf("\"Day-%d,Month-%d,Year-%d\"",x,y,z);

return 0;
}
