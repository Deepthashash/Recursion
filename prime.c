#include<stdio.h>

int prime(int in,int x);
int main()
{
	int in,out,num;

	printf("Number: \n");
	scanf("%d",&in);
	num = in/2;
	out = prime(in,num);

	if(out==1) printf("%d is a prime number\n",in);
	else printf("%d is not a prime number\n",in);
	
	return 0;
}

int prime(int y, int x)
{
	if(x==1) return 1;
	else
		if(y%x==0) return 0;
		else return prime(y, x-1);
		
}


