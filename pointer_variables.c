#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World\n:");
    int a=10, *b;
    b=&a;
    printf("%d", b);

    return 0;
}
