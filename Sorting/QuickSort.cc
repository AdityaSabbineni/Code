/****************************************************************
   PROGRAM:     Quick Sort
   AUTHOR:      Aditya Sabbineni

   FUNCTION:    This program sorts the elements using Quick Sort

   INPUT:       Array of integers

   OUTPUT:      Prints the sorted elements

****************************************************************/

#include <stdio.h>

int partition(int low, int high, int *a){
	int pivot = a[low];
	int i = low;
	int j = high;

	do{
		while(a[i] < pivot)	i++;
		while(a[j] > pivot)	j--;
		if(i >= j)	return j;
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}while(1);
}
void quickSort(int low, int high, int *a){
	if(low<high){
		int p = partition(low, high, a);
		quickSort(low, p-1, a);
		quickSort(p+1, high, a);
	}
}

