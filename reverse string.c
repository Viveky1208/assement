#include<stdio.h>
#include<string.h>
 main()
{
	char str[10];
	int len,i;
	printf("enter the string=");
	scanf("%s",str);
	len=strlen(str);
	
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}