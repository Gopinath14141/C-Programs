#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;

    printf("Enter elements of matrix 1 : ");
    for (i=0;i<3;i++)    //row
    {
        for (j=0;j<3;j++)    //column
        {
            scanf("%d",&a[i][j]);
        }
    }

     printf("Enter elements of matrix 2 : ");
    for (i=0;i<3;i++)    //row
    {
        for (j=0;j<3;j++)    //column
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        c[i][j]=a[i][j]+b[i][j];
    }

    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
            printf("%d ", c[i][j]);
    }
    return 0;
}
