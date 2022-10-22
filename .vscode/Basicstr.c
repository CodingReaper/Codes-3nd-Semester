#include <stdio.h>

int main()
{
    char str[100];
    int j=0;
    printf("Enter the string : ");
    scanf("%s",str);
    char a[100],v[100];
    int index=0;
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='.'){
            index=i;
            break;
        }
        else{
            a[i]=str[i];
        }
    }
    for(int i=index+1;str[i]!=0;i++){
        v[j++]=str[i]; //j is initialized as 0 so due to loop it will start increasing...
    }
    int n;
    printf("Enter Choice:");
    scanf("%d",&n);
    if(n==1){
        printf("%s",v);
    }
    else{
        printf("%s",a);
    }
    return 0;
}