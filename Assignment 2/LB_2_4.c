#include<stdio.h>

void Display(int,int);
int main()
{
	int no1=0,freq=0;
	
	printf("Enter number\n");
	scanf("%d",&no1);
	
	printf("Enter number\n");
	scanf("%d",&freq);
	
	Display(no1,freq);
	
	return 0;
}

void Display(int num1,int frequency)
{
	for(int i=0;i<frequency;i++)
	{
		printf("%d\t",num1);
	}
}
