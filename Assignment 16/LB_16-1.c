#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int iSize)
{
	int i=0;
	int iSumEven=0,iSumOdd=0;
	
	for(i=0;i<iSize;i++)
	{
		if((arr[i]%2) == 0)
		{
			iSumEven=iSumEven+arr[i];
		}
		else
		{
			iSumOdd=iSumOdd+arr[i];
		}
	}
	return iSumEven-iSumOdd;
}

int main()
{
	int iLength=0,i=0;
	int *ptr = NULL;
	int iRet=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int) * iLength);
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=Difference(ptr,iLength);
	printf("difference is : %d",iRet);
	
	free(ptr);
	return 0;
}

