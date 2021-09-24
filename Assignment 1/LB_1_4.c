#include<stdio.h>
#include<stdbool.h>

//typedef TRUE 1
//typedef FALSE 0
#define TRUE 1
#define FALSE 0

bool Chkdivisible(int no)
{
	
	if(no % 5 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}

int main()
{
	int a = 0;
	bool bRet=FALSE;
	printf("Enter number\n");
	scanf("%d",&a);
	bRet = Chkdivisible(a);
	
	if (bRet == TRUE)
	{
		printf("Number is divisible\n");
	}
	else{
	    	printf("Number is not divisible\n");
	}
	return 0;
}