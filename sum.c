#include<stdio.h>

int sum(int x);
int main()
{
	int in,out;
	printf("Enter number 1: \n");
	scanf("%d",&in);
	out = sum(in);
	printf("%d",out);
	return 0;
}

int sum(int x)
{
	if(x==0) return 0;
	else return x+sum(x-1);
}
