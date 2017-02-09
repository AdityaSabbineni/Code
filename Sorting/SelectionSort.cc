/****************************************************************
   PROGRAM:     Selection Sort
   AUTHOR:      Aditya Sabbineni

   FUNCTION:    This program sorts the elements using Selection Sort

   INPUT:       Array of integers

   OUTPUT:      Prints the sorted elements

****************************************************************/

#include <stdio.h>

void selectionSort(int a[10]){
	for(int j=0;j<9;j++){
		int min = j;
		for(int i = j+1;i<10;i++){
			if(a[i] < a[min])	min = i;
		}
		if(min != j){
			int temp = a[j];
			a[j] = a[min];
			a[min] = temp;
		}
	}
}
