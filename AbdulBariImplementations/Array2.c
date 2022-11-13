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

void selectionsort(struct Array *arr){
    int pos,large;
    for(int i = arr->length-1;i>0;i--){
        large = arr->A[0];pos = 0;
        for(int j = 1;j<=i;j++){
            if(arr->A[j] > large){
                large = arr->A[j];
                pos = j;
            }
        }
        arr->A[pos] = arr->A[i];
        arr->A[i] = large;
    }
}

void insertionsort(struct Array * arr){
    int key,j;
    for(int i = 1;i < arr->length;i++){
        key = arr->A[i];
        j = i-1;
        while(j>-1 && arr->A[j] > key){
            arr->A[j+1] = arr->A[j]; 
            j = j-1;
        }
        arr->A[j+1] = key;
    }
}

void merge(struct Array * arr,int p,int q,int r){
    int b[20],l,r1,i;
    l = p;
    r1 = q + 1;
    i = p;
    while((l<=q) && (r1<=r)){
        if(arr->A[l]<arr->A[r1]){
            b[i] = arr->A[l];
            l = l + 1;
            i = i + 1;
        }
        else{
            b[i] = arr->A[r1];
            r1 = r1 + 1;
            i = i + 1;
        }
    }
    while(l<=q){
        b[i] = arr->A[l];
        l = l + 1;
        i = i + 1;
    }
    while(r1<=r){
        b[i] = arr->A[r1];
        r1 = r1 + 1;
        i = i + 1;
    }
    for(i = p;i<=r;i++){
        arr->A[i] = b[i];
    }
}
void mergesort(struct Array * arr,int p,int r){
    int q;
    if(p<r){
        q = (p+r)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

int main()
{
    struct Array arr = {{4,3,5,1,6},20,5};
    //insertionsort(&arr);
    //printf("%d",arr.length);
    mergesort(&arr,0,arr.length - 1);
    Display(arr);

    return 0;
}