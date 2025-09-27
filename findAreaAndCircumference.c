#include <stdio.h>

int main(){
	float circleArea,recArea,circumference,perimeter,length,breadth,radius;
	printf("Enter length , breadth of rectangle : ");
	scanf("%f%f",&length,&breadth);
	printf("\nEnter radius of circle : ");
	scanf("%f",&radius);
	perimeter = 2 * (length + breadth);
	recArea = length * breadth;
	circleArea = 3.14 * radius * radius;
	circumference = 2 * 3.14 * radius;
	printf("\nArea and Perimeter of rectangle is %f and %f\n",recArea,perimeter);
	printf("Area and circumference of circle is %f and %f\n",circleArea,circumference);
	return 0;
}
