// Swap Two Variables Using Pointers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 5;
    int temp = 0;

    int *one = &a;
    int *two = &b;

    printf("Before swapping: %d, %d\n", *one, *two);

    temp = *one;
    *one = *two;
    *two = temp;

    printf("After swapping: %d, %d\n", *one, *two);

    return 0;
}
