#include <stdio.h>
#include <stdlib.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    return EXIT_SUCCESS;
}