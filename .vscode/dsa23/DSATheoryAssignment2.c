#include <stdio.h>
#include <stdlib.h>
#define max 1000
typedef struct polynomial
{
    int xcoeff[max];
    int xexpo;
    int ycoeff[max];
    int yexpo;
}poly;
void createpoly(poly *p)
{
    static int l;
    ++l;
    printf("Enter maximum X exponents of polynomial %d:",l);
    scanf("%d",&p->xexpo);
    printf("Enter maximum Y exponents of polynomial %d:",l);
    scanf("%d",&p->yexpo);
    printf("Enter coeff of given x-exponents of polynomial %d:-",l);
    printf("\n");
    for (int i = 0; i <= p->xexpo; i++)
    {
        printf("Enter coeff of expo %d:", i);
        scanf("%d", &p->xcoeff[i]);
    }
    printf("Enter coeff of given y-exponents of polynomial %d:-",l);
    printf("\n");
    for (int i = 0; i <= p->yexpo; i++)
    {
        printf("Enter coeff of expo %d:", i);
        scanf("%d",&p->ycoeff[i]);
    }
}
void display(poly *p)
{
    static int pos;
    ++pos;
    printf("\npolynomial %d's X-variable :\n", pos);
    for (int i = 0; i <= p->xexpo; i++)
    {

        printf("\n Coeff=%d  Expo=%d ", p->xcoeff[i], i);
    }
    printf("\n");
    printf("\npolynomial %d's Y-variable :\n", pos);
    for (int i = 0; i <= p->yexpo; i++)
    {
        printf("\n Coeff=%d  Expo=%d ", p->ycoeff[i], i);
    }
    printf("\n");
}
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
void add(poly p1, poly p2)
{
    poly *p3;
    p3 = (poly *)malloc(sizeof(poly));
    p3->xexpo=maximum(p1.xexpo,p2.xexpo);
    p3->yexpo=maximum(p1.yexpo,p2.yexpo);
    for (int i = 0; i <= p3->xexpo; i++)
    {
        p3->xcoeff[i]=p1.xcoeff[i]+p2.xcoeff[i];
    }
    for (int i=0;i<=p3->yexpo;i++)
    {
        p3->ycoeff[i] = p1.ycoeff[i] + p2.ycoeff[i];
    }
    printf("\nPolynomial after addition is:\n");
    printf("Polynomial of variable X:\n");
    for (int i = 0; i <= p3->xexpo; i++)
    {
        printf("\n Coeff=%d  Expo=%d ", p3->xcoeff[i], i);
    }
    printf("\nPolynomial of variable Y:\n");
    for (int i = 0; i <= p3->yexpo; i++)
    {
        printf("\n Coeff=%d  Expo=%d ", p3->ycoeff[i], i);
    }
}
int main()
{
    poly *ptr;
    ptr = (poly *)malloc(sizeof(poly));
    createpoly(ptr);
    poly *ptr2;
    ptr2 = (poly *)malloc(sizeof(poly));
    createpoly(ptr2);
    display(ptr);
    

    display(ptr2);
    add((*ptr),(*ptr2));
    return 0;
}