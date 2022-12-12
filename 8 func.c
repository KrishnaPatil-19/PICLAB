#include <stdio.h>
#include <conio.h>
#define pi 3.14
void cirarea(float r);
void recarea(float l, float b);
int main()
{
	float radius, length, breadth;
	printf("\n Enter Radius of Circle : ");
	scanf("%f", &radius);
	cirarea(radius);
	printf("\n Enter Length of Rectangle : ");
	scanf("%f", &length);
	printf("\n Enter Breadth of Rectangle : ");
	scanf("%f", &breadth);
	recarea(length,breadth);
}
void cirarea(float r)
{
	float cir_area;
	cir_area=pi*r*r;
	printf("\n Area of Circle is %.2f", cir_area);
}
void recarea(float l, float b)
{
	float rec_area;
	rec_area=l*b;
	printf("\n Area of Rectangle is %.2f", rec_area);
	getch();
}
