#include<stdio.h>

int main(){
	float joules,seconds;
	printf("enter power in joules: ");
	scanf("%f",&joules);
	printf("\nenter time in seconds: ");
	scanf("%f",&seconds);
	printf("\npower consumption is %f kilowatts: ",joules/(1000*seconds));
	return 0;

}
