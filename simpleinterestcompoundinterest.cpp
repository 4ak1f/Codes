#include <stdio.h>
#include <math.h>
	int main(){
	

	double principal, rate, time;
	double sinterest, cinterest;
	
	printf("Enter the principal: ");
	scanf("%lf", &principal);
	printf("Enter rate: ");
	scanf("%lf", &rate);
	printf("Enter time: ");
	scanf("%lf", &time);
	
	sinterest=(principal*rate*time)/100;
	cinterest=principal *(pow((1+rate/100),time))-principal;
	
	printf("Your Simple Interest is: %.2lf\n", sinterest);
	printf("Your Compound Interest is: %.2lf", cinterest);
	
}
