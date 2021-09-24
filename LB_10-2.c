#include<stdio.h>
void Pattern(int,int);
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&iValue1,&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
void Pattern(int iValue1,int iValue2)
{
	for(int i=1;i<=iValue1;i++)
	{
		for(int j=1;j<=iValue2;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}