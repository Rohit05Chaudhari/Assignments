#include <stdio.h>
#include <stdlib.h>


void Reverse(char *str)
{  
    char *start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;

    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}