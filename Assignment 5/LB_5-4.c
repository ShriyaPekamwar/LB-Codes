#include<stdio.h>
int CountFour(int);
int main()
{
	int iNo=0,freq=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	
    freq=CountFour(iNo);
	printf("%d",freq);
	return 0;
}
int CountFour(int iNo)
{
	int iDigit=0,freq=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==4)
		{
			freq++;
		}
	iNo=iNo/10;
	}
	return freq;
}