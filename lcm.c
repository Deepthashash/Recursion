#include<stdio.h>

int lcm(int x,int y,int z);
int main()
{
	int in1,in2,out,num;
	printf("Enter number 1: \n");
	scanf("%d",&in1);
	printf("Enter number 2: \n");
	scanf("%d",&in2);
	
	if(in2>in1) num=in2;
	else num=in1;
	out = lcm(in1,in2,num);
	printf("lcm is %d\n",out);
	return 0;
}

int lcm(int x,int y,int z)
{
	if(z%x==0 && z%y==0) return z;
	else lcm(x,y,z+1);
}
