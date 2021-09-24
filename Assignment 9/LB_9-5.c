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
	int iCnt=0;
	while(iCnt!=8)
	{
	for(int i=1;i%2==0;i++)
	{
		
		    printf("%d\t",i);
		
		iCnt++;
	}
	}
}