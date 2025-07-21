// String Length without strlen()

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[10] = "Whatever";
    int lenght = sizeof(word) / sizeof(word[0]);
    int counter = 0;
    printf("The easy solution using 'strlen' from string.h: %lu\n", strlen(word));

    printf("The 'wrong' solution: %d\n", lenght);
    // This will give you the size or the array in full whether it is used or not

    while (word[counter] != '\0')

    {
        counter++;
    }
    // This is how to only consider what is being used
    printf("The 'hard' solution: %d\n", counter);

    return 0;
}
