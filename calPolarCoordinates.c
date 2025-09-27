#include <stdio.h>
#include <math.h>

int main(){
	int x,y;
	float angle,r;

	printf("Enter x and y coordinates : ");
	scanf("%d%d",&x,&y);
	r = sqrt((x*x)+(y*y));
	angle = atan(y/x);
	printf("\nPolar coordinates are (%f,%f)\n",r,angle);
	return 0;
}
