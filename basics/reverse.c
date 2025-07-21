// Reverse a String

#include <stdio.h>
#include <string.h>

void reverseString(char *phrase)
{
    int length = strlen(phrase);
    char *first = phrase;
    char *last = phrase + length - 1;
    char temp = ' ';

    for (int i = 0; i < length / 2; i++)
    {
        temp = *last;
        *last = *first;
        *first = temp;

        last--;
        first++;
    }
}

int main()
{

    char phrase[100] = "";

    printf("Input a phrase: ");

    while (fgets(phrase, sizeof(phrase), stdin) == NULL)
    {
        printf("The input was empty");
    }

    phrase[strcspn(phrase, "\n")] = '\0'; // To remove trailing \n

    printf("Test line: %s", phrase);
    reverseString(phrase);

    printf("The reversed phrase is: %s\n", phrase);

    return 0;
}
