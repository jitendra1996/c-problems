#include <stdio.h>

int isPerfectNum(int);

int main(){
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	printf("\nIf result is \n0 : number is not perfect \n1 : number is perfect \nResult : %d\n",isPerfectNum(num));
	return 0;
}

int isPerfectNum(int num){
	int sum=0,isPerfect = 0;

	if(num < 0) return isPerfect;

	for(int i = 1;i<num;i++){
		if(num % i == 0){
			sum =i+sum;
		}
		if(sum>num) return isPerfect;
	}
	if(sum == num){
		isPerfect = 1;
	}
	return isPerfect;
}
