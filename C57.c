#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("example.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File created successfully.\n");

    fclose(fp);

    printf("File closed successfully.\n");

    return 0;
}
