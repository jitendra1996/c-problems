#include <stdio.h>

int main(){
	int num ,sum=0 ,count=0,realNum;
	printf("******** Sum of digits of five digit number ********\n");
	printf("Enter five digit number : ");
	scanf("%d",&realNum);
	num = realNum;
	while(num>0){
		count++;
		num/=10;
	}
	
	if(count != 5){
		printf("\nEnter number has %d digits ,not 5\n",count);
		return 0;	
	}
	
	num = realNum;
	
	while(num > 0){
		sum += num % 10;
		num /= 10;
	}
	
	printf("\nSum of the digits are %d\n",sum);
	return 0;
}
