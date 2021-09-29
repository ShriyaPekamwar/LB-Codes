#include<stdio.h>
#include<stdlib.h>

void Digits(int arr[],int iSize)
{
	int i=0;
	int iNo=0;
	for(i=0;i<iSize;i++)
	{
		int iDigit=0,iCnt=0;
		iNo=arr[i];
		while(iNo != 0)
		{
			iDigit=iNo%10;
			iCnt++;
			iNo=iNo/10;
		}
		if(iCnt == 3)
		    {
			    printf("%d\t",arr[i]);
		    }
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

