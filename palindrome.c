#include<stdio.h>
int main()
{
	int n,c,r,sum=0;
	printf("enter any number=");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(c==sum)
	printf("palindrome number");
	else
	printf("not palindrome number");
	return 0;
	}

