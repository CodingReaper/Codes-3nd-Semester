//WAP to input name, roll number and marks in 5 subjects for a student, and display it.
#include <stdio.h>
//defining structure
struct Student{
	char name[30];
	int roll;
	int marks[5];
}; 
//main function
int main() {	
    struct Student students[100];  //students is array.
	int n,i,m; //n is number of students.
	int roll;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the student's name: ");
		scanf("%s",students[i].name);
		printf("Enter the student's roll number: ");
		scanf("%d",&students[i].roll);
		for(m=0;m<5;m++){
			printf("Enter the student's mark %d: ",(m+1));
			scanf("%d",&students[i].marks[m]);
		}
		printf("\n");
    }
	printf("\n---OUTPUT---\n");
    //Printing Details:-
    for(int i=0;i<n;i++){
        printf("The student's name: %s\n",students[i].name);
		printf("The student's roll number: %d\n",students[i].roll);
		printf("The student's marks\n");
		for(m=0;m<5;m++){
			printf("%d ",students[i].marks[m]);
		}
        printf("\n");
    }
    return 0;
}