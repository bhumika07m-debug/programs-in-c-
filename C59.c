#include <stdio.h>

int main() {
    FILE *fptr;
    char word[50];

    fptr = fopen("input.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fscanf(fptr, "%s", word);
    printf("Word read from file: %s\n", word);

    fclose(fptr);

    return 0;
}
