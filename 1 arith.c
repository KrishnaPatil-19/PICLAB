#include <stdio.h>
int main()
{
	int a,b,c;
	float div;
	printf("\n Enter First Number : ");
	scanf("%d", &a);
	printf("\n Enter Second Number : ");
	scanf("%d", &b);
	c=a+b;
	printf("\n Addition of %d & %d = %d", a,b,c);
	c=a-b;
	printf("\n Subtraction of %d & %d = %d", a,b,c);
	c=a*b;
	printf("\n Multiplication of %d & %d = %d", a,b,c);
	div=(float)a/b;
	printf("\n Division of %d & %d = %f", a,b,div);
	return 0;
}
