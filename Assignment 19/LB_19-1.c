#include<stdio.h>
#include<stdlib.h>

int Maximum(int arr[],int iSize)
{
	int iMax=arr[0];
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(arr[i]>iMax)
		{
			iMax=arr[i];
		}
	}
	return iMax;
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
	
	iRet=Maximum(ptr,iLength);
	printf("Maximun number is : %d ",iRet);
	
	free(ptr);
	return 0;
}

