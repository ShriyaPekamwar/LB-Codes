#include<stdio.h>
#include<stdlib.h>

int Minimum(int arr[],int iSize)
{
	int iMin=arr[0];
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(arr[i]<iMin)
		{
			iMin=arr[i];
		}
	}
	return iMin;
}

int main()
{
	int i=0,iLength=0,iRet=0;
	int *ptr=NULL;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int) * iLength);
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=Minimum(ptr,iLength);
	printf("Maximun number is : %d ",iRet);
	
	free(ptr);
	return 0;
}

