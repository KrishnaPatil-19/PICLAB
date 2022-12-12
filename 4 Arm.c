#include <stdio.h>
#include <conio.h>
int main()
{
    int n, or, rem, sum=0, co=0;
    printf("\n Enter a Number : ");
    scanf("%d", &n);
    or=n;
    while(n!=0)
    {
        rem=n%10;
        co=rem*rem*rem;
        sum=sum+co;
        n=n/10;
    }
    printf("\n Resultant number is = %d.", sum);
    if(sum==or)
    {
        printf("\n %d is an Armstrong Number.", or);
    }
    else
    {
        printf("\n %d is not an Armstrong Number.", or);
    }
    getch();
}
