#include<stdio.h>
double AreaCircle(float);
int main()
{
	float fValue=0.0;
	double dRet=0.0;
	printf("Enter radius\n");
	scanf("%f",&fValue);
	
	 dRet=AreaCircle(fValue);
	printf("Area of circle is :%f",dRet);
	return 0;
}	
double AreaCircle(float fValue)
{
	
	double area=0.0;
	float pi=3.14;
	
	area=pi*fValue*fValue;
	//printf("Area of circle is :",area);
	return area;
}