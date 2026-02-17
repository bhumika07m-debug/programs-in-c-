#include <stdio.h>
#include <string.h>

int main()
{
    char user[20], pass[20];
    printf("username: ");
    scanf("%s", user);
    printf("Password: ");
    scanf("%s", pass);
    // checks if password is "Admin123" AND at least 8 characters long
    if (strcmp(pass, "Admin123") == 0 && strlen(pass) >= 8)
        printf("success! Welcome, %s. \n", user);
    else
        printf("Invalid password. \n");
    return 0;
}
