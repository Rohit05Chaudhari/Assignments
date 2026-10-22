#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("Divisible by Both");
    }
    else if(((iValue % 3) == 0) && ((iValue % 5) != 0))
    {
        printf("Divisible by 3 Only");
    }
    else if(((iValue % 3) != 0) && ((iValue % 5) == 0))
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main()
{
    int iValue1 = 0;


    printf("Enter number : ");
    scanf("%d",&iValue1);

    CheckMultipleDivisibility(iValue1);

    return EXIT_SUCCESS;
}