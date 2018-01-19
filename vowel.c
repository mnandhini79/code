#include<stdio.h>
void main()
{
	char a[5]={'a','e','i','o','u'};
	char b;
	scanf("%d",&b);
	if(b==a[5])
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
