#include<stdio.h>

void Display(int iValue)
{
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(int i=1;i<=iValue;i++)
	{
		printf("*\n");
	}
	
}
int main()
{
	int n =0;
	printf("Enter no\n");
	scanf("%d",&n);
	
	Display(n);
	return 0;
}