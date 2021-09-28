#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int arr[],int len,int no)
{
	int i=0,index=0;
	for(i=0;i<len;i++)
	{	
		if(arr[i] == no)
		{
			index = i;
		}
	}	
	return index;
}

int main()
{
	int len=0,i=0,no=0;
	int iRet=0;
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
	
	iRet=FirstOcc(ptr,len,no);
	if(iRet == -1)
	{
	    printf("-1");
	}
	else
	{
		printf("Last occurence of number is : %d",iRet);
	}
	
	free(ptr);
	return 0;
}