//Write a program to accept the Roll_no,Name,Total_marks of 20 students and display in a tabuler form.
#include <stdio.h>
#include <conio.h>
struct student
{
    int roll_no;
    char name[20];
    char class[10];
    int total_markes;
};
void main()
{
    struct student x[20];
    int i;
    for (i = 1; i < 20; i++)
    {
        printf("Enter roll_no,name, class and total_marks of %d student\n", i);
        scanf("%d%s%s%d", &x[i].roll_no, &x[i].name, &x[i].class, &x[i].total_markes);
    }
    printf("List of student\n");
    printf("Roll_no\tName\tClass\tTotal_marks\n");
    for (i = 1; i < 20; i++)
    {
        printf("%d\t%s\t%s\t%d\n", x[i].roll_no, x[i].name, x[i].class, x[i].total_markes);
    }
}