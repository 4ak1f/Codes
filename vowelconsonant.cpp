#include <stdio.h>
#include <ctype.h>
int main(){
	char ch;
	printf("Enter your letter: ");
	scanf("%c", ch);
	
	ch=tolower(ch);
	
	if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u'){
		printf("%c is a vowel!", ch);
	}
	else if((ch>='a' && ch<='z')){
		printf("%c is a consonant!",ch);
	}
	else{
		printf("Your letter isn't a letter \nPlease check your entry");
	}
	
}
