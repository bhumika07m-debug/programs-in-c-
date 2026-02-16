#include <stdio.h>

struct department
{
    int CSE;
    int IT;
    int AIML;
    int DataScience;
};
struct college
{
    char name[50];
    char city[50];
    struct department dept;
};
int main()
{
    struct college c;
    printf("Enter college name: ");
    scanf("%s", c.name);
    printf("Enter city: ");
    scanf("%s", c.city);
    printf("Enter number of students in CSE: ");
    scanf("%d", &c.dept.CSE);
    printf("Enter number of students in IT: ");
    scanf("%d", &c.dept.IT);
    printf("Enter number of students in AIML: ");
    scanf("%d", &c.dept.AIML);
    printf("Enter number of students in Data Science: ");
    scanf("%d", &c.dept.DataScience);
    printf("\nCollege Details:\n");
    printf("College Name: %s\n", c.name);
    printf("City: %s\n", c.city);
    printf("CSE Students: %d\n", c.dept.CSE);
    printf("IT Students: %d\n", c.dept.IT);
    printf("AIML Students: %d\n", c.dept.AIML);
    printf("Data Science Students: %d\n", c.dept.DataScience);

    return 0;
}
