/****************************************************************
   PROGRAM:     Merge Sort
   AUTHOR:      Aditya Sabbineni

   FUNCTION:    This program sorts the elements using Merge Sort

   INPUT:       Array of integers

   OUTPUT:      Prints the sorted elements

****************************************************************/

#include <stdio.h>
void merge(int low, int mid, int high, int *a){
	int i=low, j=mid+1, k=low;
	int b[10];

	while(i<=mid && j<=high){
		if(a[i] <= a[j])	{
			b[k] = a[i];
			k++;i++;
		}
		else	{
			b[k] = a[j];
			k++;j++;
		}
	}
	while(i<=mid){
		b[k] = a[i];
		i++;
		k++;
	}

	while(j<=high){
		b[k] = a[j];
		j++;
		k++;
	}
	for(i=low;i<k;i++){
		a[i] = b[i];
	}
		
}

void mergeSort(int low, int high, int *a){	
	int mid;

	if(low < high){
		mid = (high+low)/2;
		mergeSort(low, mid, a);
		mergeSort(mid+1,high, a);
		merge(low, mid, high,a);
	}
}
