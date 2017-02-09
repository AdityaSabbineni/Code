/****************************************************************
   PROGRAM:     Insertion Sort
   AUTHOR:      Aditya Sabbineni

   FUNCTION:    This program sorts the elements using Insertion Sort

   INPUT:       Array of integers

   OUTPUT:      Prints the sorted elements

****************************************************************/

#include <stdio.h>

void insertionSort(int a[10]){
	for(int i=1;i<10;i++){
		int j=i;
		while(j>0 && a[j-1]>a[j]){
			int temp;
			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			j = j-1;
		}
	}
}
