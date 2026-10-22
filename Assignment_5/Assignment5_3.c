#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if((fMarks < 0) || (fMarks > 100))
    {
        printf("Invalid Marks");
    }
    

    if(fMarks <= 100 && fMarks > 89)
    {
        printf("Grade A");
    }
    else if(fMarks <= 89  && fMarks > 74)
    {
        printf("Grade B");
    }
    else if(fMarks <= 74 && fMarks > 59)
    {
        printf("Grade C");
    }
    else if(fMarks <= 59 && fMarks > 39)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks : ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}