#include<stdio.h>
#include<stdlib.h>


int Countfreq(int arr[],int len,int no)
{
	int i=0,freq=0;
	
	for(i=0;i<len;i++)
	{
		if(arr[i] == no)
		{
			freq++;
		}
	}
	return freq;
}

int main()
{
	int len=0,i=0,no=0;
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
	
	printf("enter number to check\n");
	scanf("%d",&no);
	
	iRet=Countfreq(ptr,len,no);
    printf("frequency of no is : %d",iRet);
	free(ptr);
	return 0;
}