#include <stdio.h>


struct Array{
    int A[20];
    int size;
    int length;
};
void Display(struct Array d){
    printf("Elements are:\n");
    for(int i = 0;i<d.length;i++){
        printf("%d\n",d.A[i]);
    }
}

void append(struct Array *arr,int x){
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}
void insert(struct Array *arr,int index,int x){
    if(index >= 0 && index <= arr->size){
        for(int i = arr->length;i>index;i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++; 
    }
}
int delete(struct Array * arr,int index){
    int x = 0;
    if(index > arr->length || index < 0){
        printf("Out Of range or invalid index.\n");
        return 0;
    }
    else{
        x = arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6},20,5};
    printf("%d\n\n",delete(&arr,10));
    Display(arr);

    return 0;
}