#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            ch = 'a';
        }
        else
        {
            ch = 'A';
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
 
    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}