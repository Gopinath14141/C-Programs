#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100],c[20],e[100],f[100],t[100];
   int a,b,d,r;
   printf("Enter the string value :\n");
   scanf("%s", &str);
   printf("\n");
   printf("Enter the second string value :\n");
   scanf("%s", &c);
   printf("\n");
   printf("Enter the third string value :\n");
   scanf("%s", &e);
   printf("Enter the fourth string value :\n");
   scanf("%s", f);

   a = strlen(str);
   {
       printf("The length of the string value :%d \n", a);
   }
   printf("\n");
   b = strcpy(t,str);
   {
       printf("The copied string value :%s\n", str);
   }
   printf("\n");
   d = strcat(str,c);
   {
       printf("The strcat string value is :%s \n",c);
   }
   printf("\n");
   r = strcmp(str,c);
   printf("\n strcmp (str, c) :%d\n", r);
   r=strcmp(e,f);
   printf("\n strcmp(e,f) :%d\n", r);

    return 0;
}
