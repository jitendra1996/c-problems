#include <stdio.h>

int octal(int);
int reverseNum(int);

int main(){
	int i , oct;
	printf("Enter a decimal number : ");
	scanf("%d",&i);
	oct = octal(i);
	printf("\noctal number : %d\n",oct);
	return 0;
}

int octal(int num){
	int sum=0 ,rem;
	while(num != 0){
		rem = num % 8 ;
		sum = sum*10 + rem;
		num /= 8 ; 
	}
	return reverseNum(sum); 
}

int reverseNum(int num){
	int temp = 0;
	while(num != 0){
		temp = temp * 10 + (num % 10);
		num /= 10;
	}
	return temp;
}
