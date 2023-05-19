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
