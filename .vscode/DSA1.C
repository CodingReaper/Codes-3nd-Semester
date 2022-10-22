#include<stdio.h>

struct employee{
    int id;
    char name[50];
    int age;
    int salary;
};

int main(){
    struct employee a;
    printf("Enter Name:");
    scanf("%s",a.name);
    printf("Enter ID:");
    scanf("%d",&a.id);
    printf("Enter age:");
    scanf("%d",&a.age);
    printf("Enter Salary:");
    scanf("%d",&a.salary);
    
    printf("\n---OUTPUT---\n");
    printf("Name: %s\n",a.name);
	printf("ID: %d\n",a.id);
    printf("Age: %d\n",a.age);
    printf("Salary: %d\n",a.salary);
}