#include <stdio.h>
int main(){
	int length = 1189 , breadth = 841 ,swap,num ;
	printf("Enter a number : ");
	scanf("%d",&num);
	int i = 0;
	while(i<=num){
		printf("\nA%d = %d mm X %d mm\n",i,length,breadth);
		swap = length;
		length = breadth;
		breadth = swap/2;
		i++;		
	}
	return 0;
}
