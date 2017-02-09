/****************************************************************
   PROGRAM:     Bubble Sort
   AUTHOR:      Aditya Sabbineni

   FUNCTION:    This program sorts the elements using Bubble Sort

   INPUT:       Array of integers

   OUTPUT:      Prints the sorted elements

****************************************************************/

#include <stdio.h>

void bubbleSort(int a[10]){
	int swap = 0;
	int n = 10;
	do{
		swap = 0;
		for(int i=1;i<n;i++){
			if(a[i-1] > a[i]){
				int temp;
				temp = a[i-1];
				a[i-1] = a[i];
				a[i] = temp;
				swap = 1;
			}
		}
		n = n-1;
	}while(swap != 0);
}
	

