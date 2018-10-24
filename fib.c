#include<stdio.h>

int fib(int n);

int main()
{
	int in,out;
	printf("Which term: ");
	scanf("%d",&in);
	for(int i=0;i<in;i++)
	{
		out=fib(i);
		printf("%d ",out);
	}
	return 0;
}

int fib(int n)
{
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fib(n-1)+fib(n-2);
}
