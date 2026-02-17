#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("output.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "Hello, World");

    fclose(fptr);

    printf("Data written successfully to output.txt\n");

    return 0;
}
