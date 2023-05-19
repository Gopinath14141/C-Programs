#include <stdio.h>
#include <stdlib.h>
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

int Call_by_Value(int *p,int*q)
{
    int swap;
    swap=*p;
    *p=*q;
    *q=swap;
    printf("\nThe swaped values are: %d and %d",*p,*q);
    return 0;
}
