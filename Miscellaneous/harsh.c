#include <stdio.h>

void km_mile(double a)
{
    double b = 0.62 * a;
    printf("In MIles:%lf \n",b);
}

void inch_foot(double b)
{
    double c = 0.08 * b;
    printf("In Foot:%lf \n",c);
}

void cm_inch(double c)
{
    double e = 0.39 * c;
    printf("In Inch:%lf \n",e);
}

void pound_kg(double d)
{
    double k = 0.45 * d;
    printf("In Kg:%lf \n",k);
}

void inch_metre(double e)
{
    double z = 0.02 * e;
    printf("In metre:%lf \n",z);
}

int main()
{
    int m;
    do
    {
        printf("Enter 1 to convert km to mile. \n");
        printf("Enter 2 to convert inch to foot. \n");
        printf("Enter 3 to convert cm to inch.\n");
        printf("Enter 4 to convert pound to kg.\n");
        printf("Enter 5 to convert inch to metre.\n");
        printf("Enter 6 to Exit.\n");
        printf("Enter Choice :");
        scanf("%d", &m);
        switch(m)
        {
            case 1:
            double v,p;
            printf("Enter Distance in Km:");
            scanf("%lf",&v);
            km_mile(v);
            break;
            case 2:
            double u,r;
            printf("Enter Distance in Inch:");
            scanf("%lf",&u);
            inch_foot(u);
            break;
            case 3:
            double q,s;
            printf("Enter Distance in Cm:");
            scanf("%lf",&q);
            cm_inch(q);
            break;
            case 4:
            double h,i;
            printf("Enter in pounds:");
            scanf("%lf",&h);
            pound_kg(h);
            break;
            case 5:
            double x,y;
            printf("Enter Distance in Inch:");
            scanf("%lf",&x);
            inch_metre(x);
            break;
            case 6:
            printf("Program Excecuted.");
            break;
        }
    } while(m!=6);
    return 0;
}