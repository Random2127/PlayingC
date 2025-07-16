#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 2;
    int *pnumber = &number;
    printf("%d", number);

    // modify value by reference
    *pnumber = 5;
    printf("%d", number);

    return 0;
}


//I am going to make a asm file to compare side by side