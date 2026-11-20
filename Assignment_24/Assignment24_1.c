#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }    
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}