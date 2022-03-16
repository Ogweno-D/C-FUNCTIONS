#include<stdio.h>

void area();  //The function does not have any arguments.

void main()
{
	//The function call.
	area();
}


//Function definition.
void  area()
{
    float area;
    float r;
	
    //Prompt the user to enter the radius of the circle.
    printf("enter the radius of the circle:");
    scanf("%f",&r);
    
    area=3.142 *r*r;
	
    //Display the area of the circle.
    printf("The area of the circle is %f",area);

    //No return value.
    
}
