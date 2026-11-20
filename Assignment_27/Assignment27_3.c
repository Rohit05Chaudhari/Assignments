#include <stdio.h>
#include <stdlib.h>

int Difference(char *str)
{
    int iCapitalCnt = 0;
    int iSmallCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        } 

        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCnt++;
        }    
        str++;
    }
    return iSmallCnt - iCapitalCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}