//CHECK WHEATHER THE ENTERED YEAR IS LEAP YEAR OR NOT.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year you want to check for leap:");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("ENTERED YEAR IS LEAP YEAR");
    }
    
    else
    {
        printf("ENTERED YEAR IS NOT A LEAP YEAR");
    }
    
    return 0;
}