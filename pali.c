#include<stdio.h>
void main()
{
	int n,rev=0,rem,n1;
	printf("enter the no");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
if(n1==rev)
	printf("palindrome");
else
	printf("not palindrome");
}

