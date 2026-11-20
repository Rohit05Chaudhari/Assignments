#include <stdio.h>
#include <stdlib.h>


void DisplayASCII()
{
    int iCnt = 0;
    printf("--------------------------------------------------------\n");
    printf("Symbol\t| Dec\t| hexa\t| Octal\n");
    printf("--------------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 225; iCnt++)
    {
        if(iCnt < 32 || iCnt == 127)
        {
            printf("N/A\t| %d\t| %X\t| %o\n",iCnt,iCnt,iCnt);
        }
        else
        {
            printf("%c\t| %d\t| %X\t| %o\n",iCnt,iCnt,iCnt,iCnt);
        }
        

    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}