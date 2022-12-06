#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i=0,v=0,c=0;
	
	printf("enter the string=");
	gets(str);
	
	
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
		{
			v++;
		}
		else
		{
			c++;
		}
		i++;
	}
	printf("no of vowels=%d",v);
	printf(" no of consonants=%d",c);
}
	

