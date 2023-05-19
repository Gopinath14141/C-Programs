#include<stdio.h>
#include<string.h>

int main()
{
    int a[50],n,i,sum=0;
    printf("Enter the values of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            sum=sum+a[i];
        }
    }
    printf("sum = %d\n",sum);

    return 0;
}

