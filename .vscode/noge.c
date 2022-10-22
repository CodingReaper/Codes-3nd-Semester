#include <stdio.h>

int main()
{
    int n,i,j,key[2],count=0;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the initial number: ");
    scanf("%d",&key[0]);
    
    printf("Enter the final number: ");
    scanf("%d",&key[1]);
    
    
    
    //for searching
    for(i=0,j=0;i<n;i++){
        if(a[i]==key[j]){
            key[j]=i;
            j++;
            break;
        }
        
    }
        
        for(int i=key[0];i<key[1];i++){
            count++;\
            printf("%d ",a[i]);
        }
        
        printf("the distance is %d ",count);
        
    return 0;
}