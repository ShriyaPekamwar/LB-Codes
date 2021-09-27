#include<stdio.h>
#include<stdlib.h>


void Display(int arr[],int iSize)
{
	for(int i=0;i<iSize;i++)
	{
		if((arr[i] % 5) == 0)
		{
			printf("%d\t",arr[i]);
		}
	}
	
}
int main()
{
	int iLength=0,i=0;
	int *ptr=NULL;
	
	printf("Enter number of elements");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int) * iLength);
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	Display(ptr,iLength);
	
	free(ptr);
	return 0;
}