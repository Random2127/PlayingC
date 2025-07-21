// Ask the user to enter N, then input N integers and calculate their sum.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int length = 0;
    int *numberArray = NULL;
    int sum = 0;

    printf("Enter the number of values you want to calculate: \n");
    scanf("%d", &length);

    // Dynamically allocate memory
    numberArray = malloc(length * sizeof(int));

    // Need to check whether memory worked
    if (numberArray == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("\nInput a number %d: ", i + 1); // added this for clarity of input
        scanf("%d", &numberArray[i]);
        sum += numberArray[i];
    }

    printf("Total is: %d\n", sum);

    free(numberArray);
    return 0;
}
