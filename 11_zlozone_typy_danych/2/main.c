#include <stdio.h>
#include <stdlib.h>

struct Student{
    char *firstName;
    char *lastName;
    int id;
    float gpa;
};

int main()
{
    struct Student student1 = {"Jan", "Kowalski", 1, 3.4};
    struct Student student2 = {"Adam", "Nowak", 2, 4.1};
    struct Student student3 = {"Robert", "Lewandowski", 1, 4.5};
    struct Student tabS[3] = {student1, student2, student3};
    printf("%s %s %s", tabS[0].firstName, tabS[1].firstName, tabS[2].firstName);
    return 0;
}
