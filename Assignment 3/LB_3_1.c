#include<stdio.h>

void PrintEven(int ino)
{
	int iCnt=0;
	int i=2;
	while(iCnt < ino)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
            iCnt++;			
		}
		i++;
	    //iCnt++;
	}
}
int main()
{
	int ino=0;
	printf("Enter number\n");
	scanf("%d",&ino);
	
	PrintEven(ino);
	return 0;
}