#include<stdio.h>
int main()
{
    int size;
    printf("Enter Size Of array:");
    scanf("%d",&size);
    int arr[size];

    printf("Enter Array Elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\nElements are:\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nElements are:\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    printf("\n2nd Largest:");
    printf("%d",arr[1]);


    
//     int index;
//     printf("\nEnter The position to be inserted:");
//     scanf("%d",&index);

//     int element;
//     printf("Enter Element:");
//     scanf("%d",&element);
    
//     // for(int i=size-1;i>=index;i--){
//     //     arr[i+1]=arr[i];
//     // }
//     // arr[index]=element;
//     // size=size+1;

//     for(int i=index;i<size-1;i++){
//         arr[i]=arr[i+1];
//     }
//     size=size-1;

//     printf("\nElements are:\n");
//     for(int i=0;i<size;i++){
//         printf("%d\t",arr[i]);
//     }



// ; 


}