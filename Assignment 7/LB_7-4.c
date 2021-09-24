#include<stdio.h>
double FhtoCs(float);
int main()
{
	float temp=0.0;
	double dRet=0.0;
	printf("Enter the temperature in Fahrenheit\n");
	scanf("%d",&temp);
	
	dRet=FhtoCs(temp);
	printf("%f",dRet);
	return 0;
}

double FhtoCs(float temp)
{
	float celsius=0.0;
	celsius = ((temp-32) * (5/9));
	return celsius;
}
