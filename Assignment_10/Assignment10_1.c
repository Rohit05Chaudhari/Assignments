#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dPI = 3.14;
    double dArea = 0.0;

    dArea = dPI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle : %lf",dRet);
    return EXIT_SUCCESS;
}