/*#include<stdio.h>
int main()
{
int n,i,m=0,flag=0;
printf("Enter the number to check prime:");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("Number is not prime");
flag=1;
break;
}
}
if(flag==0)
printf("Number is prime");
return 0;
 }*/



 #include <stdio.h>
#include <stdlib.h>

int main()

{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if (checkPrime(n))
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is a composite number");
    }
    return 0;
}

int checkPrime(int a)
{
    int i;
    int fact=1;
    for (i=2;i<a;i++)
    {
        if (a%i==0)
        {
            fact++;
        }
        if(fact>1)
            break;
    }
    if (fact==1)
    {
        return 1;
    }
    return 0;
}
