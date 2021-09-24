#include<stdio.h>
void DisplayRange(int,int);
int main()
{
	int iStart=0,iEnd=0;
	
	printf("Enter the starting range\n");
	scanf("%d",&iStart);
	
	printf("Enter the ending range\n");
	scanf("%d",&iEnd);
	
	DisplayRange(iStart,iEnd);
	return 0;
}

void DisplayRange(int iStart,int iEnd)
{
	if(iStart>iEnd)
	{
		printf("Invalid range");
	}
	for(int i=iStart;i<=iEnd;i++)
	{
		if(i%2 == 0)
		{
			printf("%d\t",i);
		}
	}
}