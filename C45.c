#include<stdio.h>
struct Book
{
    char title;
    char author;
    float prize;
};
int main()
{
    struct Book books[5];
    struct Book b1("The sky","George Orwell","400");
    struct Book b2("Animal Farm","Lewis Carrol","300");
    struct Book b3("Harry Potter","J.K Rowlling","500");
    printf("Details of book 1 are: %d\n".The sky,George Orwell,400);
    printf("Details of book 2 are: %s\n".Animal Farm,Lewis Carrol,300);
    printf("Details of book 2 are: %f\n".Harry Potter,J.K Rowlling,500);
}
