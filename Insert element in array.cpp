#include <stdio.h>
int main (){
	int n,pos,element;
	printf("Enter the number of elements in your array: ");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Array size must be greater than zero");
		return 1;
	}
	int arr[n];
	printf("Enter %d elements: \n", n);
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the position where you want to enter the element: ");
	scanf("%d", &pos);
	
	printf("Enter the element you want to insert: ");
	scanf("%d", &element);
	
	for(int i=n; i>=pos;i--){
		arr[i]=arr[i-1];
		
	}
	arr[pos-1]=element;
		n++;
		
	printf("Array after insertion: ");
	for(int i=0;i<n;i++){
		printf("%d\n", arr[i]);
	}
	printf("\n");
	return 0;
}
