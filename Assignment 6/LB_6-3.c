#include<stdio.h>
int CountRange(int);
int main()
{
	int iNo=0,freq=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	
    freq=CountRange(iNo);
	printf("%d",freq);
	return 0;
}
int CountRange(int iNo)
{
	int iDigit=0,freq=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit > 3 && iDigit<7)
		{
			freq++;
		}
	iNo=iNo/10;
	}
	return freq;
}