#include <stdio.h>

void swap(int *ptra, int *ptrb)
{
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}

int main()
{
    int a = 3, b = 7;
    int *ptra = &a, *ptrb = &b;

    printf("Original values: a = %d and b = %d\n", *ptra, *ptrb);
    swap(ptra, ptrb);
    printf("After swap: a = %d and b = %d\n", *ptra, *ptrb);
    return 0;
}
