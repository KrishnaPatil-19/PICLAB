/* Published by Krishna Patil on 24/11/2022 */
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	double a,b,c,d;
	int i;
	double e,f;
	char ch='y';
	while(ch=='y'||ch=='y')
	{
		printf("\n 1] Addition");
		printf("\n 2] Subtraction");
		printf("\n 3] Multiplication");
		printf("\n 4] Division");
		printf("\n 5] Square of a");
		printf("\n 6] Square of b");
		printf("\n 7] Cube of a");
		printf("\n 8] Cube of b");
		printf("\n 9] Exponential a^b");
		printf("\n 10] Exponential b^a");
		printf("\n 11] Square Root of va"); // You still need to Enter both number for . The 11th one would perform operation on 1st no -
		printf("\n 12] Square Root of vb"); // while the 12th one would perform operation on 2nd no.
		printf("\n Select the function you would like to perform := ");
		scanf("%d",&i);
		printf("\n Enter any two numbers := ");
		scanf("%lf%lf", &a,&b);
		switch(i)
		{
			case 1: c=a+b;
			printf("\n Addition is %lf", c);
			break;
			case 2: c=a-b;
			printf("\n Subtraction is %lf", c);
			break;
			case 3: c=a*b;
			printf("\n Multiplication is %lf", c);
			break;
			case 4: c=a/b;
			printf("\n Division is %lf", c);
			break;
			case 5: c=a*a;
			printf("\n Square of a is %lf", c);
			break;
			case 6: c=b*b;
			printf("\n Square of b is %lf", c);
			break;
			case 7: c=a*a*a;
			printf("\n Cube of a is %lf", c);
			break;
			case 8: c=b*b*b;
			printf("\n Cube of b is %lf", c);
			break;
			case 9: c= pow(a,b);
			printf("\n a^b is %lf", c);
			break;
			case 10: c= pow(b,a);
			printf("\n b^a is %lf", c);
			break;
			case 11: c= sqrt(a);
			printf("\n Square Root of a is %lf", c);
			break;
			case 12: c= sqrt(b);
			printf("\n Square Root of b is %lf", c);
			break;
		}
		printf("\n Do you want to continue? \n \t y/n = ");
		scanf(" %c", &ch);
	}
	return 0;
}
