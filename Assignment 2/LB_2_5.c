#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int);
int main()
{
	int no = 0;
	bool bRet=false;
	printf("Enter number\n");
	scanf("%d",&no);
	
	bRet = ChkEven(no);
	if(bRet == true)
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
	return 0;
}

bool ChkEven(int no)
{
	bool bRet=false;
	if(no%2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	return bRet;
}