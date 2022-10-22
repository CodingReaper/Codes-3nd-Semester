#include<stdio.h>

struct details{
    int bookno;
    char title[50];
    int price;
};

void highest(struct details a[],int n);

int main(){
    int n;
    struct details book[100];
    
    printf("Enter Number of books:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Book Name:");
        scanf("%s",book[i].title);
        printf("Book No:");
        scanf("%d",&book[i].bookno);
        printf("Book price:");
        scanf("%d",&book[i].price);
        printf("\n");
    }
    printf("\n--OUTPUT--\n");
    highest(book,n);
}

void highest(struct details a[],int n){
    int i;
    int max=a[0].price;

    for(i=0;i<n;i++){
        if(a[i].price>max){
            max=a[i].price;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i].price==max){
            printf("Book No:%d\n",a[i].bookno);
            printf("Book Title:%s\n",a[i].title);
            printf("Book Price:%d\n",a[i].price);
        }
        printf("\n");
    }
    
}
