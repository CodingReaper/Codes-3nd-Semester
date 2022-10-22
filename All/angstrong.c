//Angstrong NUmber Using Pointers..
#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    int *ptr=&n;
    int b;
    b=n;
    int *ptr2=&sum;
    printf("Enter Number:");
    scanf("%d",&n);
    while(n != 0){
        rem=(*ptr)%10;
        *ptr2=*ptr2+(rem*rem*rem);
        *ptr=*ptr/10;
    }
    if(b==*ptr2)
         printf("is an Armstrong number");
    else
         printf("is not an Armstrong number");

}