#include<stdio.h>
int main()
{
	char a[50],ch;
	int i,c=0;
	printf("\nenter the string=");
	gets(a);
	
	printf("\nEnter the character which you want to count= ");
	scanf("%c",&ch);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==ch)
		 c++;
	}
	printf("\nTotal =%d",c,a);
	return 0;
}