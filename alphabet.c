#include<stdio.h>
void main()
{
	char let;
	scanf("%c",&let);
	if( ((let>='a')&&(let<='z')) || ((let>='A')&&(let<='Z')) )
	{
		printf("the character is alphabet");
	}
	else
	{
		printf("the character is not a alphabet");
	}
}
