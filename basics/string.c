// Working with a string raw

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char chain[] = "hello";

    char *word = chain;
    // char *word = &chain[0]; this is the same but explicit

    printf("%s", chain);
    printf("%s", word);

    return 0;
}
