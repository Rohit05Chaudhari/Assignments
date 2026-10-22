#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
   if(iNo == 0)
    {
        printf("%d -> Zero",iNo);
    }
    else if(iNo > 0)
    {
        printf("%d -> Positive Number\n",iNo);
    }
    else
    {
        printf("%d -> Negative Number\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}