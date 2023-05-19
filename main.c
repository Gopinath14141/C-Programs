#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the elements:");
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }
    return 0;
}
