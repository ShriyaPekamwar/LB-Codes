#include<stdio.h>
#include<stdlib.h>

void Range(int arr[],int iSize,int iStart,int iEnd)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(arr[i]>iStart && arr[i]<iEnd)
		{
			printf("%d\t",arr[i]);
	    }
    }
}

int main()
{
	int i=0,iLength=0;
	int iStart=0,iEnd=0;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int) * iLength);
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter start range\n");
	scanf("%d",&iStart);
	
	printf("Enter end range\n");
	scanf("%d",&iEnd);
	
	Range(ptr,iLength,iStart,iEnd);
	return 0;
}