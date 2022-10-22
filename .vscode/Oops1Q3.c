/*WAP to enter id, name, age and basic salary of n number of employees. Calculate the
gross salary of all the employees and display it along with all other details in a tabular
form, using pointer to structure.
[ Gross salary= Basic salary + DA + HRA,
DA = 80% of Basic salary
HRA=10% of Basic salary ]*/
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
    printf("Enter the number of employee");
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
        p[i].salary = p[i].salary + (80*p[i].salary)/100 + (10*p[i].salary)/100;
    }
    struct employee *pt;

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");

    for(int i=0; i<n; i++)
    {
        pt=&p[i];
        
        printf("\nEmploy %d:-\n", i+1);
        printf("ID  :   %d\n", pt->id);
        printf("Name:   %s\n", pt->name);
        printf("Salary  : %d \n", pt->salary);
    }        
    return 0;
}