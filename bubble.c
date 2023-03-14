#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){

 	int tmp = 0 ; 
	tmp = *a; 
	*a = *b; 
	*b = tmp ;  
}

void bubble(int a[], int size){

	for(int i = 0 ; i < size - 1 ; i++){
		for(int j = 0 ; j < size - i - 1 ; j++){

			if(a[j + 1] < a[j]){
				swap(&a[j + 1], &a[j]); 

			}
		}

	}
}

void display(int a[], int size){
	printf("\n"); 
	for(int i = 0 ; i < size ; i++){
		
		printf("%d " , a[i]); 


	}
	printf("\n"); 

}

int main(){

	int a[] = {2, 5, 23, 58, 200, -10}; 

	int size = sizeof(a)/sizeof(a[0]); 

	printf("\nBefore Sorting\n"); 

	display(a, size); 
	
	printf("\n After sorting \n"); 

	bubble(a, size); 

	display(a, size); 


	return 0; 	

}
