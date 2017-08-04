#include<stdio.h>

int main(){
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	(year%4==0?printf("leap"):printf("not leap"));
	return 0;
}
