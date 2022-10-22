#include<stdio.h>
#include<string.h>

int count(char arr[]);
void salting(char password[]);
void slice(char str[],int n,int m);
void findcharacter(char str[],char ch);


int main(){
    char str[]="Ashutosh";
    char ch='x';
    findcharacter(str,ch);
}

int count(char arr[]){
    int x=0;
    for(int i=0;arr[i] != 0;i++){
        x++;
    }
    return x;
}

void salting(char password[]){
    char salt[]="112";
    char newpass[200];
    strcpy(newpass,password); //newpass variable created and stored the value of password..
    strcat(newpass,salt);
    puts(newpass);
}

void slice(char str[],int n,int m){
    char newstr[100];
    for(int i=n,j=0;i<=m;i++,j++){
        newstr[j]=str[i];
    }
    puts(newstr);
}

void findcharacter(char str[],char ch){
    for(int i=0; str[i] != '\0';i++){
        if(str[i]==ch){
            printf("Character is Found..");
            return;
        }
    }
    printf("Character not Found..");
}