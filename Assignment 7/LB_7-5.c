#include<stdio.h>
double SquareMeter(int);
int main()
{
	int iNo=0;
	double meters=0.0;
	printf("Enter area in square feet\n");
	scanf("%d",&iNo);
	
	meters=SquareMeter(iNo);
	printf("%f",meters);
	
	return 0;
}

double SquareMeter(int iNo)
{
	double meters=0;
	meters=iNo*0.0929;
	return meters;
}
