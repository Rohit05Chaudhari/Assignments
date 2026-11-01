#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dSquaremeter = 0.0;

    dSquaremeter = iValue * 0.0929;

    return dSquaremeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter : %lf",dRet);
    return EXIT_SUCCESS;
}