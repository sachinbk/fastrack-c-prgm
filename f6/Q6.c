#include<stdio.h>
#include<assert.h>

void main()
{
	int invalkmph=320,length=1400;
	float accelaration=2.85,invalmph,dist;
 	invalmph=0.2777778*invalkmph;
	dist=(invalmph*invalmph)/(2*accelaration);
	
	assert(dist<=length);
	printf("dist=%f\n",dist);
	printf("safety landing!!\n");
	
}
