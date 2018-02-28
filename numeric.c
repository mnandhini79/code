#include<stdio.h>
void main()
{
	int i,c=0;
	char a[100]="hello world.123";
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]==' '||a[i]=='\0'||a[i]=='.');
		else
		{
			c++;
		}
	}
	printf("%d",c);
}
