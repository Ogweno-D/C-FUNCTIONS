#include<stdio.h>

void area();//The function does not have any arguments.

void main()
{
	area();
}

void  area()
{
    float area;
    float r;
    printf("enter the radius of the circle:");
    scanf("%f",&r);
    
    area=3.142 *r*r;
    
    printf("The area of the circle is %f",area);

    //No return value.
    
}
