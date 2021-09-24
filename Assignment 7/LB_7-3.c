#include<stdio.h>
int KMtoMeter(int);
int main()
{
	int iNo=0,meters=0;
	printf("Enter distance in kilometers\n");
	scanf("%d",&iNo);
	
	meters=KMtoMeter(iNo);
	printf("Distance in meters is :%d",meters);
	
	return 0;
}

int KMtoMeter(int iNo)
{
	int meters=0;
	meters=iNo*1000;
	return meters;
}
