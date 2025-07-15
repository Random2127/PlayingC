#include <stdio.h>

int main() {

    char fullName[10];
    char restInput[50];

    printf("Type your name: \n");
    fgets(fullName, sizeof(fullName), stdin);
    fgets(restInput, sizeof(restInput), stdin);

    printf("Hello %s \n", fullName);
    printf("%s\n", restInput);
    return 0;
}

// Come back here to check overflows
// https://chatgpt.com/c/68726d13-f5e8-8009-b491-2551bfa78182
