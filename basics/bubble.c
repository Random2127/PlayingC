// Sort an Array of integers(Bubble Sort)

#include <stdio.h>

showList(int list[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", list[i]);
    }
}

bubble(int list[], int length)
{
    for (int i = 0; i < length; i++)
    {
        // BUBBLE SORT???
    }
}

int main(int argc, char const *argv[])
{
    int list[] = {1, 23, 544, 3, 77, 89, 4, 6, 67};
    int length = sizeof(list) / sizeof(list[0]);

    showList(list, length);
    bubble(list, length);

    return 0;
}
