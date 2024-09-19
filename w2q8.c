#include <stdio.h>
#include <omp.h>
#include <math.h>
int isarm(int num){
	int ognum=num,sum=0,digit=0,rem;
	while(ognum!=0){
		ognum/=10;
		digit++;
	}
	ognum=num;
	while(ognum!=0){
		rem=ognum%10;
		sum+=pow(rem,digit);
		ognum/=10;
}
return(sum==num);
}
int main(){
	int arr[20]={153,268,370,371,4684,1565,152,346,469,657,2365,123,147,569,568,536,349,986,246,577};
	int i;
	#pragma omp parallel for
	for(i=0;i<20;i++){
		if(isarm(arr[i])){
			printf("%d is an Armstrong number\n",arr[i]);
		}
		else{
			printf("%d is not an Armstrong number\n",arr[i]);
		}
	}
}

