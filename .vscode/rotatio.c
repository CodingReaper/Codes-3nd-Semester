#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char str1[] = "abcd", str2[] = "cdab";  
          
    if(strlen(str1) != strlen(str2)){  
        printf("not a rotation");  
    }  
    else{   
        strcat(str1, str1);  
        if(strstr(str1, str2) != NULL)  
            printf("is a rotation");  
        else  
            printf("is not a rotation");  
    }  
   
    return 0;  
}  