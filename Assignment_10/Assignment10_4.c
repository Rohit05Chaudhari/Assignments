#include<stdio.h>
#include<stdlib.h>

double FstoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0/9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FstoCs(fValue);

    printf("in celsius : %lf",dRet);
    return EXIT_SUCCESS;
}