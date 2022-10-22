#include<stdio.h>
#include<stdlib.h>

struct employee{
    int id;
    char name[50];
    int salary;
    int age;
};

void highestmark(struct employee *p,int n);

int main(){
    struct employee *p;
    int n;
    printf("Enter number of employees:");
    scanf("%d",&n);
    p=(struct employee*)malloc(n*sizeof(struct employee));
    printf("Details:\n");
    for(int i=0;i<n;i++){
        printf("Enter ID:");
        scanf("%d",&(p+i)->id);
        printf("Enter Name:");
        scanf("%s",(p+i)->name);
        printf("Enter Salary:");
        scanf("%d",&(p+i)->salary);
        printf("Enter Age:");
        scanf("%d",&(p+i)->age);
        printf("\n");
    }
    printf("\n---OUTPUT---\n");
    highestmark(p,n);
}

void highestmark(struct employee *p,int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(((p+i)->salary)>max){
            max=(p+i)->salary;
        }
    }
    for(int i=0;i<n;i++){
        if(((p+i)->salary)==max){
            printf("NAME:%s\n",(p+i)->name);
            printf("ID:%d\n",(p+i)->id);
            printf("Salary:%d\n",(p+i)->salary);
            printf("Age:%d\n",(p+i)->age);
        } 
    }
}