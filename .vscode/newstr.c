#include<stdio.h>

struct student{
    int roll;
    char name[30];
    int totalmarks;
};

int main(){
    int n;
    printf("Enter The Number of students:");
    scanf("%d",&n);
    struct student a[n];
    for(int i=0;i<n;i++){
        printf("Enter Name:");
        scanf("%s",&a[i].name);
        printf("Enter the student's roll number: ");
		scanf("%d",&a[i].roll);
		printf("Enter Totalmarks:");
        scanf("%d",&a[i].totalmarks);
		printf("\n");
    }
    printf("----OUTPUT----");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].totalmarks<a[j].totalmarks){
                struct student b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("Name: %s\n",a[i].name);
		printf("The student's roll number: %d\n",a[i].roll);
		printf("The student's totalmarks:%d\n",a[i].totalmarks);
        printf("\n");
    }

}