#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int len, x=0;
	char str1[10], str2[10], dest[10];
	printf("\n Enter the First String : ");
	scanf("%s", str1);
	printf("\n Enter the Second String : ");
	scanf("%s", str2);
	x=strcmp(str1,str2);
	if(x==0)
	{
		printf("\n Strings are Equal");
	}
	else
	{
		printf("\n Strings aren't Equal");
	}
	len=strlen(str1);
	printf("\n Length of %s is = %d", str1, len);
	printf("\n String Copying String = %s", strcpy(dest,str1));
	printf("\n String Concatenation = %s", strcat(dest,str2));
	printf("\n String Reversal = %s", strrev(str1)); //may not be supported in some inferior compilers like the ones in mobile phone.
	getch();
}
