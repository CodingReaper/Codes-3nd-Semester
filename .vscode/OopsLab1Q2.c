/* Q.WAP to input name, roll number and marks in 5 subjects for n number of students. Write
functions to:-
a. Find total marks and percentage of all n students.
b. Display details of a student with a given roll number.
c. Display the details for all the students having percentage in a given range.
d. Sort the array in ascending order of marks.*/

#include<stdio.h>
                                                  //Basically We will be taking a array of student datatype
                                                  //in each array box there will be name,roll,marks,totalmarks
                                                  //and percentage.
                                                  //if we want to traverse in array of student datatype we will
                                                  //use single loop but if we want to access the elements inside a 
                                                  //single element of student type array then we use another loop
                                                  //its like [[],[],[],[]....] -array of student data type
                                                  //each [] contains name,roll and marks array etc..
struct student{ //student is kind of a datatype..
    char name[30];
    int roll;
    int marks[5];
    int tmarks;
    float percent;
};

//Calculation of total marks and percentage..
void ttlmrksprcntge(struct student std[],int noofstudents){  //std is an array(Datatype=student)
    for(int i=0;i<noofstudents;i++){
        std[i].tmarks=0;
        std[i].percent=0.0;
        for(int m=0;m<5;m++){
            std[i].tmarks+=std[i].marks[m];
            std[i].percent=std[i].tmarks*0.2;
        }

    }
}

//Displaying The student details with entered roll number..
void display(struct student std[],int noofstudents,int roll){
    for(int i=0;i<noofstudents;i++){
        if(roll==std[i].roll){
            printf("Name:%s\n",std[i].name);
            printf("Roll:%d\n",std[i].roll);
            printf("Marks:\n");
            for(int m=0;m<5;m++){
                printf("%d \t",std[i].marks[m]);
            }
            printf("\nThe student's total marks: %d\n",std[i].tmarks);
			printf("The student's percentage: %.2f\n",std[i].percent);
			printf("\n");
            break;
        }
    }
}

//Displaying The data within percentage..
void displaywithrange(struct student std[],float percent1,float percent2,int noofstudents){
    for(int i=0;i<noofstudents;i++){
        if(std[i].percent>=percent1 && std[i].percent<=percent2){
            printf("Name:%s\n",std[i].name);
            printf("Roll:%d\n",std[i].roll);
            printf("Marks:\n");
            for(int m=0;m<5;m++){
                printf("%d \t",std[i].marks[m]);
            }
            printf("\nThe student's total marks: %d\n",std[i].tmarks);
			printf("The student's percentage: %.2f\n",std[i].percent);
			printf("\n");
        }
    }
}

//Sorting the Struct student std array..
void sort(struct student std[],int noofstudents){
    for(int i=0;i<noofstudents;i++){
        for(int j=i+1;j<noofstudents;j++){
            if(std[i].tmarks>std[j].tmarks){
                struct student t=std[i];
                std[i]=std[j];
                std[j]=t;
            }
        }

    }

    for(int i=0;i<noofstudents;i++){
		printf("Name: %s\n",std[i].name);
		printf("The student's roll number: %d\n",std[i].roll);
		printf("The student's marks\n");
		for(int m=0;m<5;m++){
			printf("%d ",std[i].marks[m]);
		}
		printf("\nThe student's total marks: %d\n",std[i].tmarks);
		printf("The student's percentage: %.2f\n",std[i].percent);
		printf("\n");
	}
}


int main(){
    struct student std[100];
    float percent1,percent2;
    int noofstudents;
    int roll;
    printf("Enter the number of students: ");
	scanf("%d",&noofstudents);

    for(int i=0;i<noofstudents;i++){
        printf("Enter Name:");
        scanf("%s",&std[i].name);
        printf("Enter the student's roll number: ");
		scanf("%d",&std[i].roll);
		for(int m=0;m<5;m++){
			printf("Enter the student's mark %d: ",(m+1));
			scanf("%d",&std[i].marks[m]);
		}
		printf("\n");
    }

    ttlmrksprcntge(std,noofstudents);
    printf("Enter the student's roll number to search: ");
	scanf("%d",&roll);
    display(std,noofstudents,roll);
    

    printf("Enter the student's percentage 1 to search: ");
	scanf("%f",&percent1);
	printf("Enter the student's percentage 2 to search: ");
	scanf("%f",&percent2);
	displaywithrange(std,percent1,percent2,noofstudents);
    printf("\nSort  the  array  in  ascending order of marks.\n");
    sort(std,noofstudents);
    printf("\n");
    
    return 0;



}