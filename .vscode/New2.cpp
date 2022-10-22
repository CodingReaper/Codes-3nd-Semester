#include <stdio.h>
struct employee{
    
    char name[30];
    int id;
    int salary;
    int da;
    int hra;
};
int main()
{
    int n ,netSalary;
    printf("Enter the number of employuee");
    scanf("%d",&n);
    struct employee p[n];
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%s",p[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&p[i].id);

        //Salary
        printf("Salary: ");
        scanf("%d",&p[i].salary);
        p[i].da=(80*p[i].salary)/100;
        p[i].hra=(10*p[i].salary)/100;
        p[i].salary = p[i].salary + (80*p[i].salary)/100 + (10*p[i].salary)/100;
    }
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",p[i].name);
 
        printf("Id \t: ");
        printf("%d \n",p[i].id);
 
        printf("Gross Salary \t: ");
        printf("%d \n",p[i].salary);

        printf("DA \t: ");
        printf("%d \n",p[i].da);

        printf("HRA \t: ");
        printf("%d \n",p[i].hra);
 
        printf("\n");
    }  
    return 0;
}