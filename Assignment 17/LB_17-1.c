#include<stdio.h>
#include<stdlib.h>

int Countfreq(int arr[],int len)
{
	int i=0,freq=0;
	for(i=0;i<len;i++)
	{
		if((arr[i]%2) ==0)
		{
			freq++;
		}
	}
	return freq;
}

int main()
{
	int len=0,i=0,iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&len);
	
	ptr = (int*)malloc(sizeof(int) * len);
	printf("Enter elements\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=Countfreq(ptr,len);
	printf("frequency of even numbers is : %d",iRet);
	
	free(ptr);
	return 0;
}