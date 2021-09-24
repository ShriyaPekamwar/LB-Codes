#include<stdio.h>
int MultDigits(int);
int main()
{
	int iNo=0,freq=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	
    freq=MultDigits(iNo);
	printf("%d",freq);
	return 0;
}
int MultDigits(int iNo)
{
	int iDigit=0,mult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		mult=mult*iDigit;
	    iNo=iNo/10;
	}
	
	return mult;
}