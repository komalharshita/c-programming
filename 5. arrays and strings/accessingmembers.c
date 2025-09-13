#include<stdio.h>
#include<string.h>

struct student {

    int rollno ;
    char name [50] ;
    float marks ;
};

int main()

{
    struct student student1 = { 1, "Komal", 99};

    printf("Roll no. :%d\n", student1.rollno);
    printf("Name :%s\n", student1.name);
    printf("Marks :%.2f\n", student1.marks);

    return 0;
}