// Let the user enter `N` numbers into an array, then print the largest number.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int length = 0;
    int *numArray = NULL;

    printf("How many number do you want to add? \n");
    scanf("%d", &length);

    numArray = malloc(length * sizeof(int));

    if (numArray == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("Input a number: \n");
        scanf("%d", &numArray[i]);
    }
    int max = numArray[0];

    for (int i = 1; i < length; i++)
    {
        if (numArray[i] > max)
        {
            max = numArray[i];
        }
    }

    printf("The highest number is %d\n", max);

    free(numArray);
    return 0;
}
