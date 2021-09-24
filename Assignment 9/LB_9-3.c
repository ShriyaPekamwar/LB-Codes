#include<stdio.h>
void Pattern(int);
int main()
{
	int iValue=0;
	printf("Enter number of elements\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	return 0;
}

void Pattern(int iNo)
{
	for(int i=1;i<=iNo;i++)
	{
		printf("%d\t*\t",i);
	}
}