#include <stdio.h>
#include <conio.h>

void main()
{
int a[]={70,90,28,34,10},i,j,temp;
for(i=0;i<5-1;i++)
{
    for(j=0;j<5-i-1;j++)
    {
        if(a[j]>a[j+1])

    {
        temp=a[j];
        a[j]=a[j+1];  //swaping is done ( in the 3 lines)
        a[j+1]=temp;
    }
    }
}
printf("\n After sorting : ");
for(i=0;i<5;i++)
{
    printf("\n Sorting number at position %d = %d", i, a[i]);
}

  getch();
}
