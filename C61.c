#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("output.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!!\n");
        return 1;
    }

    fputc('A', fptr);

    fclose(fptr);

    printf("Character written successfully to output.txt\n");

    return 0;
}
