#include<stdio.h>

int Display(int a)
{
	//int a=0;
	for(int i=1;i<=a;i++)
	{
		printf("Marvellous\n");
	}
}

int main()
{
	int n;
	printf("How many times?\n");
	scanf("%d",&n);
	
	Display(n);
	return 0;
}
	