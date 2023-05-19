#include <stdio.h>
#include <stdlib.h>

//int Call_by_Reference();
int Call_by_Value();
int main()
{
int a,b;
printf("Enter the value of a : ");
scanf("%d",&a);
printf("Enter the value of b : ");
scanf("%d",&b);
Call_by_Value(a,b);

}
int Call_by_Value(int x,int y)
{
    int swap;
    swap=x;
    x=y;
    y=swap;
    printf("The swaped numbers are: %d and %d",x,y);
    return 0;
}
