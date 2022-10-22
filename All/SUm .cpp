#include <stdio.h>

int main()
{
    int i=1,sum=0,n=11;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("SUM IS %d",sum);
    return 0;
}