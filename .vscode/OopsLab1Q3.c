#include <stdio.h>

int n;

struct data
{
    char id[50];
    char name[50];
    int age;
    double salary;
};

double Total(double d)
{
    double da=(80.0/100) * d, hra=(10.0/100) * d;
    double t = d+da+hra;
    
    return t;
}

int main()
{
    printf("Enter number of employs: ");
    scanf("%d", &n);
    
    struct data a[n];
    
    printf("Enter details as follows:- \n");
    for(int i=0; i<n; i++)
    {
        printf("Employ %d:\n", i+1);
        printf("ID: ");
        scanf("%s", a[i].id);
        printf("Name: ");
        scanf("%s", a[i].name);
        printf("Age: ");
        scanf("%d", &a[i].age);
        printf("Salaray: ");
        scanf("%lf", &a[i].salary);
    }
    
    struct data *p;
    
    printf("\nDetails are: \n");
    for(int i=0; i<n; i++)
    {
        p=&a[i];
        
        printf("\nEmploy %d:-\n", i+1);
        printf("ID  :   %s\n", p->id);
        printf("Name:   %s\n", p->name);
        printf("Age :   %d\n", p->age);
        printf("Salary  : %.2f \n", p->salary);
        printf("Gross Salary : %.2f", Total(p->salary));
    }
    
    return 0;
}