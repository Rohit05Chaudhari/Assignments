#include <stdio.h>
#include <stdlib.h>


int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iLastIndex = -1;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastIndex = iCount;
        }    
        str++;
        iCount++;
    }
    return iLastIndex;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d",iRet);

    return EXIT_SUCCESS;
}