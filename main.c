#include <stdio.h>
#include<conio.h>

void main();
#pragma startup function
#pragma exit function
void main()
{
    printf("\n I am in main");
    getch();
}
void func()
{
    printf("\n I am in func");
    getch();
}

