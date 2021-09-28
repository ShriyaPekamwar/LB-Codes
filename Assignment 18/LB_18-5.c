#include<stdio.h>
#include<stdlib.h>


int ProductOdd(int arr[],int len)
{
	int i=0,iMult=1;
	for(i=0;i<len;i++)
	{	
		if((arr[i]%2) != 0)
		{
			iMult=iMult*arr[i];
		}
	}	
	return iMult;
}

int main()
{
	int len=0,i=0;
	int iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&len);
	
	ptr = (int*)malloc(sizeof(int) * len);
	printf("Enter elements\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=ProductOdd(ptr,len);
	printf("MUltiplication of odd elements is : %d",iRet);
	
	free(ptr);
	return 0;
}