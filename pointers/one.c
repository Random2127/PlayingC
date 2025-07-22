#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptra = &a;

    printf("Value of a is %d\n", a);
    printf("Pointer to a is %d\n", *ptra);

    *ptra = 20;

    printf("Swapping 10 for 20\n");
    printf("Value of a is %d\n", a);
    printf("Pointer to a is %d\n", *ptra);
    return 0;
}
