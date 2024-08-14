#include<stdio.h>
int main(){
	int arr[100],n,i,element,found=0;
	printf("Enter the number of elements in your array: ");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Array size must be greater than zero");
		return 1;
}
	printf("Enter %d elements: \n", n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element you want to search: ");
	scanf("%d", &element);
	
	for(i=0;i<n;i++){
		if(arr[i]==element){
			found=1;
			break;
		}
	}
	if(found){
		printf("Element %d found at position %d", element,i+1);
	}
	else{
		printf("Element %d not found in the array.");
	}
	}

