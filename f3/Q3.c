#include<stdio.h>

int main(){
	float watts,luminous_efficacy;
	printf("enter watts: ");
	scanf("%f",&watts);
	printf("\nenter luminous efficacy (lumens per watt): ");
	scanf("%f",&luminous_efficacy);
	printf("\nluminous flux is %f lumens: ",watts*luminous_efficacy);
	return 0;

}
