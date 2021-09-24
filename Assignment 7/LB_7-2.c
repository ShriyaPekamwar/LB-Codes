#include<stdio.h>
double RectArea(float,float);
int main()
{
	float fwidth=0.0;
	float fheight=0.0;
	double dRet=0.0;
	printf("Enter width\n");
	scanf("%f",&fwidth);
	
	printf("Enter height\n");
	scanf("%f",&fheight);
	
	dRet=RectArea(fwidth,fheight);
	printf("Area of rectangle is :%f",dRet);
	return 0;
}	
double RectArea(float fValue1,float fValue2)
{
	
	double area=0.0;
	area=fValue1 * fValue2;
	return area;
}