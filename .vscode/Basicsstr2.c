#include <stdio.h>

int main()
{
    int i3;
    char i1[100],i2;
    printf("Enter the string: ");
    scanf("%s",i1);
   
    printf("Enter the input character: ");
    scanf(" %c",&i2);
   
    printf("Enter the integer: ");
    scanf("%d",&i3);
   
    int count=0;
   
    if(i3==0){
        for(int i=0;i1[i]!='\0';i++){
            if(i1[i]==i2)
                count++;

            if(count==2){
                    for(int j=0;j<i;j++)
                        printf("%c",i1[j]);
                        count++;
                }
               
        }
       
    }
    else{
        for(int i=0;i1[i]!='\0';i++){
            if(i1[i]==i2)
                count++;
               
            if(count==1){
                    for(int j=i+1;i1[j]!='\0';j++)
                    printf("%c",i1[j]);
                    count++;
                }
        }
    }

    return 0;
}