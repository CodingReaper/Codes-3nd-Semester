//Merging 2 arrays..
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Size OF 1st array:");
    scanf("%d",&a);
    printf("\nEnter size of 2nd array:");
    scanf("%d",&b);
    c=a+b; //size of merged array..
    double d[a],e[b],f[c];
	int k=a;
    printf("\nElements of 1st array:");
    for(int i=0;i<a;i++){
        printf("Enter elements%d:",(i+1));
        scanf("%lf",&d[i]);
		f[i]=d[i];
    }
    printf("\nElements of 2nd array:\n");
    for(int i=0;i<b;i++){
        printf("Enter elements%d:",(i+1));
        scanf("%lf",&e[i]);
		f[k]=e[i];
		k++;
    }
    printf("\nThe merged array..\n");
    for(int i=0;i<c;i++)
    printf("%lf ",f[i]);

	//Sorting..
	 for (int i = 0; i < c; ++i) 
    {
            for (int j = i + 1; j < c; ++j)
            {
                if (f[i] > f[j]) 
                {
                    a =  f[i];
                    f[i] = f[j];
                    f[j] = a;
                }
            }
    }
	printf("\nThe sorted array..\n");
    for(int i=0;i<c;i++)
    printf("%lf ",f[i]);
    printf("\nlargest element:%lf",f[c-1]);

    return 0;
}


