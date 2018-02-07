#include<stdio.h>
void main()
{
	char a[100]="laptop is good";
	int b=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))&&(a[i]!=' '))
		{
			b++;
		}
	}
	printf("%d",b);
}
