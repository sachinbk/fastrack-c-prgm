#include<stdio.h>

int factorial(int n);

int main(){
	int n,i,f;
	float sum=0.00000000,temp;
	printf("enter number for series: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=factorial(i);
		temp=i/f;
		sum=sum+temp;
		printf("\nsum of series=%f",sum);
	}
	//printf("\nfactorial %d",factorial(4));
	
	return 0;
}

int factorial(int n)
{
  int c;
  int result = 1;
 
  for (c = 1; c <= n; c++)
    result = result * c;
 
  return result;
}