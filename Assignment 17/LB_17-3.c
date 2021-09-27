#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Countfreq(int arr[],int len)
{
	int i=0;
	for(i=0;i<len;i++)
	{
		if(arr[i] == 11)
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
	int len=0,i=0;
	bool bRet=false;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&len);
	
	ptr = (int*)malloc(sizeof(int) * len);
	printf("Enter elements\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	bRet=Countfreq(ptr,len);
	if(bRet==true)
	{
	    printf("11 is present");
	}
	else
	{
		printf("11 is absent");
	}
	free(ptr);
	return 0;
}