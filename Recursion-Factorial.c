#include<stdio.h>
long Fact(int n)
{
	if(n==0)
	return 1;
	return n*Fact(n-1);
}
int main()
{
	int n;
	printf("\n Enter the renge of n=");
	scanf("%d",&n);
	printf("%d!=%ld",n,Fact(n));
}