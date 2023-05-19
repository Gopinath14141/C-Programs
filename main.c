#include <stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("sorting elements of an array using insertion sort\n");
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && a[j-1]>a[j])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    printf("the array after insertion sort is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
