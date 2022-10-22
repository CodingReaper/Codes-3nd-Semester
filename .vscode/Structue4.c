#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks1,marks2,marks3,marks4,marks5;
};

int main()
{
    struct student s;
    
    printf("Information of Students :\n\n");
    //Taking Name
    printf("Name:");
    scanf("%s",s.name);
    //Taking Roll Number
    printf("Enter Roll No. : ");
    scanf("%d",&s.roll);
    //Taking Marks
    printf("marks in sub1 : ");
    scanf("%f",&s.marks1);
    printf("marks in sub2 : ");
    scanf("%f",&s.marks2);
    printf(" marks in sub3 : ");
    scanf("%f",&s.marks3);
    printf("marks in sub4 : ");
    scanf("%f",&s.marks4);
    printf("marks in sub5 : ");
    scanf("%f",&s.marks5);
    
    //Displaying Information
    printf("\nDisplaying Information of student\n");
    
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks in sub1: %.2f\n",s.marks1);
    printf("Marks in sub2: %.2f\n",s.marks2);
    printf("Marks in sub3: %.2f\n",s.marks3);
    printf("Marks in sub4: %.2f\n",s.marks4);
    printf("Marks in sub5: %.2f\n",s.marks5);

    
    return 0;
}