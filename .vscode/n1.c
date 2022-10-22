/*1. WAP to store n employees data such as employee name, gender, designation, department, 
basic pay etc. using structures with dynamically memory allocation.
 Calculate the gross pay of each employees as follows:
Gross pay=basic pay + HR + DA
HR=25% of basic, DA=75% of basic*/

#include<stdio.h>
#include<stdlib.h>

struct employee{
    char name[50];
    char gender[15];
    int age;
    int salary;
    char designation[50];
    char department[50];
};

int main(){
    struct employee *ptr;
    int n;
    printf("Enter No of employeees:");
    scanf("%d",&n);
    ptr = (struct employee *)malloc(n * sizeof(struct employee));
    for(int i=0;i<n;i++){
        //Name..
        printf("Enter Name:");
        scanf("%s",ptr[i].name);

        //Gender..
        printf("Enter Gender:");
        scanf("%s",ptr[i].gender);

        //Age..
        printf("Enter Age:");
        scanf("%d",&ptr[i].age);

        //Designation..
        printf("Enter Designation:");
        scanf("%s",ptr[i].designation);

        //Department..
        printf("Enter Department:");
        scanf("%s",ptr[i].department);
        
        //Salary..
        printf("Enter Basic Salary:");
        scanf("%d",&ptr[i].salary);
        ptr[i].salary = ptr[i].salary + (75*ptr[i].salary)/100 + (25*ptr[i].salary)/100;

        printf("\n");
    }
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",ptr[i].name);
 
        printf("Gender \t: ");
        printf("%s \n",ptr[i].gender);
 
        printf("Gross Salary \t: ");
        printf("%d \n",ptr[i].salary);

        printf("Age \t: ");
        printf("%d \n",ptr[i].age);

        printf("Designation \t: ");
        printf("%s \n",ptr[i].designation);

        printf("Department \t: ");
        printf("%s \n",ptr[i].department);

        printf("\n");
    }
    
    return 0;

}