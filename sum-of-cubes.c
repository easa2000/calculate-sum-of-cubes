// Calculate sum of cubes

#include<stdio.h>
void main(){
	int n;
	float i,a,sum=0.0;
	printf("\n enter the value of N: ");
	scanf("%d",&n);
	for(i=1.0;i<=n;i++){
		a = pow(i,3);
		sum += a;
	}
	
	printf("\n 1^3 + 2^3 + 3^3 + 4^3 .. = %f",sum);
}
