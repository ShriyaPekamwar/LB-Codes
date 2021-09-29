#include<stdio.h>
#include<stdlib.h>

void Digits(int arr[],int iSize)
{
	int iDigit=0,i=0;
	int iNo=0;
	for(i=0;i<iSize;i++)
	{
		int iSum=0;
		iNo=arr[i];
		while(iNo != 0)
		{
			iDigit=iNo%10;
			iSum=iSum + iDigit;
			iNo=iNo/10;
		}
			    printf("%d\t",iSum);
	}
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
	
    Digits(ptr,iLength);
	
	free(ptr);
	return 0;
}

