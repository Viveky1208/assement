#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50];
	char str2[50];
	printf("enter any string in str1=");
	gets(str1);
	strcpy(str2,str1);
	printf("after copy str2:%s",str2);
}