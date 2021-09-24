#include<stdio.h>

void Display(int);
int main()
{
	int no = 0;
	printf("How many times?");
	scanf("%d",&no);
	
	Display(no);
	return 0;
}

void Display(int noo)
{
	int n=1;
	while(n<=noo)
	{
		printf("*\n");
		n++;
	}
}