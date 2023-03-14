#include<stdio.h>
#include<stdlib.h>



void swap(int *a, int *b){

	int min = *a; 
	*a = *b; 
	*b = min;

}
void selection(int a[], int size){

	int min ; 
	int i, j ; 	
	for(i = 0 ; i < size - 1; i++){
		min = i ; 
		
		for(j = i + 1; j < size ; j++){

			if(a[j] < a[min]){

				min = j; 

			}

		}
		swap(&a[i], &a[min]); 

	}


}

void display(int a[], int size){

	printf("\n"); 
	for(int i = 0 ; i < size; i++){

		printf("%d ", a[i]); 

	}
	printf("\n"); 
}


int main(){

	int a[] = {10, 2, 4, 20, 5, 2, 30, 11, 12}; 
	int size = sizeof(a)/sizeof(a[0]); 
	printf("\nBefore Sorting\n"); 
	display(a, size); 
	printf("\nAfter sorting\n"); 
	selection(a, size); 
	display(a, size); 
	return 0; 



}
