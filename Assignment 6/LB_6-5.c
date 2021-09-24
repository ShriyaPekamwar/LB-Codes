#include<stdio.h>
int CountDiff(int);
int main()
{
	int iNo=0,freq=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	
    freq=CountDiff(iNo);
	printf("%d",freq);
	return 0;
}
int CountDiff(int iNo)
{
	int iDigit=0,iSumOdd=0,iSumEven=0,iRet=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iDigit=iNo%10;
		if(iDigit%2 == 0)
		{
			iSumEven=iSumEven+iDigit;
		}
		if(iDigit%2 == 1)
		{
			iSumOdd=iSumOdd+iDigit;
		}
	iNo=iNo/10;
	}
	return iSumEven-iSumOdd;
}