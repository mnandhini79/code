#include<stdio.h>
void main()
{
    char s[40]="hello world";
    int i,a=1;
    for(i=0;s[i]!='\0';i++)
{
    if(s[i]==' '||s[i]=='\0')
    {
        a++;
    }
}
printf("%d",a);
}
