#include <stdio.h>
#include <math.h>

int sumOfSeries(int,int);

int main(){
	int num,power;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("\nEnter power : ");
	scanf("%d",&power);
	printf("\nSum of Series : %d",sumOfSeries(num,power));
	return 0;
}

int sumOfSeries(int num,int power){
	if(power == 0) return 0;
	return pow(num,power) + sumOfSeries(num,power-1)
}
