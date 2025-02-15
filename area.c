//AREA OF A RECTANGLE

#include <stdio.h>
int main()
{

    int l;
    int b;

    printf("Enter the value of Length:");
    scanf("%d", &l);

    printf("Enter the value of Breadth:");
    scanf("%d", &b);

    int a = l * b;
    printf("The value of Area:%d", a);
    
    return 0;
}