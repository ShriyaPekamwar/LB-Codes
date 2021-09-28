#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Countfreq(int arr[],int len,int no)
{
	int i=0;
	for(i=0;i<len;i++)
	{
		if(arr[i] == no)
		{
			break;
		}
	}
	if(i == len)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int len=0,i=0,no=0;
	bool bRet=false;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&len);
	
	printf("Enter number to be checked\n");
	scanf("%d",&no);
	
	ptr = (int*)malloc(sizeof(int) * len);
	printf("Enter elements\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	bRet=Countfreq(ptr,len,no);
	if(bRet==true)
	{
	    printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	free(ptr);
	return 0;
}