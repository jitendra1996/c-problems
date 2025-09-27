#include <stdio.h>
int main(){
	int option;
	float temp,convertedTemp;
	printf("******** Temprature convetor ********\n");
	printf("********************************************************\n");
	printf("Choose 1 to convert temprature from Fahrenheit to centigrade\n");
	printf("Choose 2 to convert temperature from Centigrade to Fahrenheit\n");
	scanf("%d",&option);
	switch(option){
		case 1:
			printf("Enter temperature in fahrenheit : ");
			scanf("%f",&temp);
			convertedTemp = (temp - 32)*(5/9);
			printf("\nTemprature in centigrade is %f\n",convertedTemp);
			break;
		case 2:
			printf("Enter temperature in Centigrade : ");
			scanf("%f",&temp);
			convertedTemp = 1.8*temp + 32;
			printf("\nTempreature in Fahrenheit is %f\n",convertedTemp);
			break;
		default :
			printf("\nYou have selected wrong option\n");
	}

	return 0;
}
