#include <stdio.h>

int main(){
	float kmph;
	printf("enter speed in km/h ");
	scanf("%f",&kmph);
	printf("speed in m/s: %.2fm/s", kmph*5/18);
	return 0;
}
