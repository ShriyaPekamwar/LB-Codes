#include<stdio.h>
void Pattern(int,int);
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the values of rows and columns\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}

void Pattern(int iRows,int iCols)
{
	for(int i=1;i<=iCols;i++)
	{
		char ch1='A',ch2='a';
		for(int j=1;j<=iRows;j++)
		{
			if(i%2 != 0)
			{
				printf("%c\t",ch1++);
			}
			else
			{
				printf("%c\t",ch2++);
			}
		}
	  printf("\n");
	}
}