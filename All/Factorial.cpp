#include <stdio.h>

int main()
{
    int a;
    printf("Enter:");
    scanf("%d",&a);
    int fact=1;
    for(int i=1;i<=a;i++){
        if(a==0){
            printf("Fact is 1");
        }
        else{
            fact=fact*i;
        }
    }
    printf("fact is %d",fact);
    return 0;
}