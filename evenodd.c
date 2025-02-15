//CHECK WHEATHER ENTERED NUMBER IS EVEN OR ODD

#include <stdio.h>

int main()
{
    int input;

    printf("Enter a nummber to check for even or odd:");
    scanf("%d",&input);

    if(input==0)
    {
        printf("0 IS A SPECIAL NUMBER (NOT EVEN NOR ODD)");
    }

    if(input%2==0)
    {
        printf("ENTERED NUMBER IS EVEN");
    }
    
    else
    {
        printf("ENTERED NUMBER IS ODD");
    }

    return 0;
}