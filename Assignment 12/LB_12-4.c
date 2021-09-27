#include<stdio.h>
void Pattern(int,int);
int main()
{
	int iValue1=0,iValue2=0;
	printf("enter number of rows and columns\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}

void Pattern(int iRows,int iCols)
{
	int i=0,j=0;
	for(i=1;i<=iRows;i++)
	{
		printf("*\t");
		for(j=1;j<iCols-1;j++)
		{
			if(i == 1 || i == 6)
			{
                printf("*\t");
			}
			else
			{
				printf("@\t");
			}	
		}
		printf("*\t");
		printf("\n");
	}
}