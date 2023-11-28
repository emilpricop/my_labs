/*Ecuatia grad 2*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float delta, x1, x2;
    printf("a= ");scanf("%d",&a);
    printf("b= ");scanf("%d",&b);
    printf("c= ");scanf("%d",&c);
    if(a!=0)
    {
        delta=b*b-4*a*c;
        if (delta==0)
            {    x1=-b/(2*a);
                 printf("Solutia ecuatiei este x1=x2=%f",x1);
            }
        else
            if (delta>0)
                {
                    x1=(-b+sqrt(delta))/(2*a);
                    x2=(-b-sqrt(delta))/(2*a);
                    printf("Solutiile sunt x1=%f si x2=%f ",x1,x2);
                }
            else
                printf("Solutii imaginare!");
    }
    else
    {//a=0
        if (b==0){
            if(c==0)
            {   
                printf("Ecuatie nedefinita");
            }
            else
            {
                printf("Ecuatie imposibila");
            }
        }
        else
        {
            x1=-c/(float)b;
            printf("Solutia ecuatiei este %f",x1);
        }
    }
    return 0;
}