#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}