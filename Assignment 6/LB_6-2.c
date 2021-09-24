#include<stdio.h>
int CountOdd(int);
int main()
{
	int iNo=0,freq=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	
    freq=CountOdd(iNo);
	printf("%d",freq);
	return 0;
}
int CountOdd(int iNo)
{
	int iDigit=0,freq=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2 == 1)
		{
			freq++;
		}
	iNo=iNo/10;
	}
	return freq;
}