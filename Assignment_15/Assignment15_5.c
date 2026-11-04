#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal,int iObtained)
{
    float fPercentage = 0.0;
    if(iTotal <= 0)
    {
        return 0.0f;
    }

    fPercentage = ((float)iObtained/(float)iTotal) * 100.0f;
    
    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;
    
    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%f",fRet);

    return EXIT_SUCCESS;
}