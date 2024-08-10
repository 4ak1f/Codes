#include <stdio.h>
 int main(){
 	int start;
 	int end;
 	printf("Enter the start of the range: ");
 	scanf("%d", &start);
 	printf("Enter the end of the range: ");
 	scanf("%d", &end);
 	
 	printf("Prime numbers between %d and %d are: \n", start, end);
 	
 	for(int num=start;num <=end;num++){
 		if(num<=1){
 			continue;
		 }
		 if(num==2){
		 	printf("%d\t", num);
		 	continue;
		 }
		 if(num%2==0){
		 	continue;
		 }
		 int isprime=1;
		 for(int i =3;i*i<=num;i+=2){
		 	if (num %i==0){
		 		isprime=0;
		 		break;
			 }
		 }
		 if(isprime){
		 	printf("%d\t",num);
		 }
	 }
 }
