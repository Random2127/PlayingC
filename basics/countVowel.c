// Count Vowels in a String

#include <stdio.h>
#include <string.h>

int main()
{
    char phrase[50] = "Any random sentence";
    int vowel = 0, consonant = 0; // REmember to initialize independently

    for (int i = 0; phrase[i] != '\0'; i++)

    // I should have done ch=phrase[i];to make it shorter adn more readable.

    {
        if (phrase[i] == 'a' || phrase[i] == 'A' || phrase[i] == 'e' || phrase[i] == 'E' || phrase[i] == 'i' || phrase[i] == 'I' || phrase[i] == 'o' || phrase[i] == 'O' || phrase[i] == 'u' || phrase[i] == 'U')
        {
            vowel++;
        }
        else if (phrase[i] == ' ')
        {
            continue;
        }
        else
        {
            consonant++;
        }
    }

    printf("There are %d vowels and %d consonants\n", vowel, consonant);

    return 0;
}
