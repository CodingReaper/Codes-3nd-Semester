//Angstrong NUmber Using Pointers..
#include<stdio.h>
int main()
{
    int sum=0,num,rem,*p,*pr,a;
    printf("Enter number:");
    scanf("%d",&num);
    a=num;
    p=&num;
    pr=&sum;
    while(num != 0){
        rem=(*p)%10;
        *pr=*pr+(rem*rem*rem);
        *p=*p/10;
    }
    if(a==sum){
        printf("Angstrong NUmber");
    }
    else{
        printf("Not an angstrong number");
    }
    return 0;
}