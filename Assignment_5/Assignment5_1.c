#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst,int iSecond,int iThird)
{
    if((iFirst > iSecond) && (iFirst > iThird))
    {
        printf("%d is Greater",iFirst);
    }
    else if((iSecond > iFirst) && (iSecond > iThird))
    {
        printf("%d is Greater",iSecond);
    }
    else
    {
        printf("%d is Greater",iThird);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter three number : ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3 );

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}