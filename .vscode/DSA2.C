#include<stdio.h>

struct student{
    int roll;
    char name[50];
    int age;
    float cgpa;
};

int main(){
    struct student b[100];
    int n;
    printf("Enter Number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Student's Name:");
        scanf("%s",b[i].name);
        printf("Student's Roll:");
        scanf("%d",&b[i].roll);
        printf("Student's Age:");
        scanf("%d",&b[i].age);
        printf("Student's Cgpa:");
        scanf("%f",&b[i].cgpa);
        printf("\n");
    }
	printf("\n---OUTPUT---\n");
    for(int i=0;i<n;i++){
        printf("Name:%s\n",b[i].name);
        printf("Roll:%d\n",b[i].roll);
        printf("Age:%d\n",b[i].age);
        printf("Cgpa:%f\n",b[i].cgpa);
        printf("\n");
    }
}