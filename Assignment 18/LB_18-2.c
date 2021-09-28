#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int arr[],int len,int no)
{
	int i=0;
	for(i=0;i<len;i++)
	{
		if(arr[i] == no)
		{
			return i;
		}
	}	
	return -1;
}

int main()
{
	int len=0,j=0,no=0;
	int iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&len);
	
	printf("Enter number to be checked\n");
	scanf("%d",&no);
	
	ptr = (int*)malloc(sizeof(int) * len);
	printf("Enter elements\n");
	for(j=0;j<len;j++)
	{
		scanf("%d",&ptr[j]);
	}
	
	iRet=FirstOcc(ptr,len,no);
	if(iRet == -1)
	{
	    printf("-1");
	}
	else
	{
		printf("First occurence of number is : %d",iRet);
	}
	free(ptr);
	return 0;
}