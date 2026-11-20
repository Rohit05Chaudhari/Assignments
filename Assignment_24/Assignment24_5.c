#include <stdio.h>
#include <stdlib.h>


void StrRevX(char *str)
{
    int i = 0;
    int j = 0;
    char cTemp = '\0';

    while(str[j] != '\0')
    {
        j++;
    }
    j--;

    while(i < j)
    {
        cTemp = str[i];
        str[i] = str[j];
        str[j] = cTemp;

        i++;
        j--;
    }

}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}