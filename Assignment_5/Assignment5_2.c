#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Input");
    }

    if((iYear % 400 == 0)||((iYear % 4 == 0) && ((iYear % 100) != 0)))
    {
        printf("It is Leap Year");
    }
    else
    {
        printf("It not a leap year");
    }
}

int main()
{
    int iYear = 0;
   
    printf("Enter Year : ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}