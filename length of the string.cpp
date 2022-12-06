#include<stdio.h>
#include<string.h>
 main()
{
	char str[50];
	printf("enter any string=");
	gets(str);
	int c=0;
	for(int i=0;str[i]!='\0';i++)
	{
	c++;
	}
	printf("the length of the string is %d",c);
}