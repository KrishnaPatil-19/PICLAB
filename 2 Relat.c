#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("\n Enter the First Number : ");
    scanf("%d", &a);
    printf("\n Enter the Second Number : ");
    scanf("%d", &b);
    if(a>b)
    {
        printf("\n %d is greater than %d", a,b);
    }
    else
    {

        if(a==b)
        {
            printf("\n %d is equal to %d", a,b);
        }
        else
        {
            printf("\n %d is greater than %d", a,b);
        }
    }
    getch();
}
