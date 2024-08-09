#include <stdio.h>
int ispalindrome(int num){
	int ognum= num;
	int revnum=0,remainder;

	while (num!=0){
		remainder=num%10;
		revnum=revnum*10+remainder;
		num/=10;
	}
	return ognum==revnum;
}
	int main(){
		int number;
		
		printf("Number daliye: ");
		scanf("%d", &number);
		
		if(ispalindrome(number)){
			printf("Yes, the number is palindrome!");
		}
			else{
			
			printf("No, the number is not palindrome");
		}
		}

