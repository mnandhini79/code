#include<stdio.h>
void main()
{
	int yr;
	scanf("%d",&yr);
	if(yr%4==0)
	{
		printf("yes %d is leap year",yr);
	}
	else
	{
		printf("no %d is not leap year",yr);
	}
}
