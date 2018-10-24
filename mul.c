#include<stdio.h>

int mul(int x,int y);
int main()
{
	int in1,in2,out;
	printf("Number: \n");
	scanf("%d",&in1);
	printf("Limt: \n");
	scanf("%d",&in2);
	for(int i=1;i<(in2+1);i++)
	{	
		out = mul(in1,i);
		printf("%d\n",out);
	}
	
	return 0;
}

int mul(int x,int y)
{
	
	if(y==1) return x;
	else return x+mul(x,y-1);

	
}
