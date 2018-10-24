#include<stdio.h>

int bin(int x);
int main()
{
	int num,ans;
	printf("Enter the number you want to convert: \n");
	scanf("%d",&num);
	
	ans = bin(num);
	printf("Binaray value is %d\n",ans);
	return 0;
	
}

int bin(int x)
{
	int binary;
	if(x==0) binary=0;
	else 
	{
		binary = (x%2) + (10*bin(x/2));
	} 
	return binary;
}
