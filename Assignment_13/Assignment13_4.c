#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMultiplication = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit != 0)
        {
            iMultiplication = iMultiplication * iDigit;
        }

        iNo = iNo / 10;
    }
    
    return iMultiplication;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);
    return EXIT_SUCCESS;
}