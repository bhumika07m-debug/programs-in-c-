#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("output.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "This is an appended line.\n");
    fclose(fptr);

    printf("Line appended successfully to output.txt\n");

    return 0;
}
