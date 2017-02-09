/****************************************************************
   PROGRAM:   	Sorting Techniques
   AUTHOR:    	Aditya Sabbineni

   FUNCTION:	This is the main program which gives you a menu to 
		use the various sorting techniques
              

   INPUT:     	Array of integers
              

   OUTPUT:    	Prints the sorted elements

****************************************************************/
#include <stdio.h>
void bubbleSort(int a[10]);
void insertionSort(int a[10]);
void selectionSort(int a[10]);
void mergeSort(int low,int high,int a[10]);
void quickSort(int low,int high,int a[10]);
void display(int a[10], char* s){
	printf("Array %s sorting : \n",s);
        for(int i=0;i<10;i++){
                printf("%d ",a[i]);
        }
	printf("\n");
}
int main(){
	
	int a[10];
	int b[10];
	int ch=0;
	printf("Enter 10 elements into array ");
	for(int i=0;i<10;i++){
		scanf("%d%*c", &a[i]);
		b[i] = a[i];
	}
	fflush(stdout);
	
	printf("Menu\n");
	printf("1 - Bubble Sort\n");
	printf("2 - Insertion Sort\n");
	printf("3 - Selection Sort\n");
	printf("4 - Merge Sort\n");
	printf("5 - Quick Sort\n");
	printf("6 - Enter new list of numbers\n");
	printf("7 - Use the previous list of numbers and continue \n");
	printf("8 - Exit \n");
	while(1){
			
		printf("Enter choice : ");
		scanf("%d", &ch);
		printf("Choice = %d\n", ch);
		if(ch != 6 && ch != 7) display(a, (char *)"before");
		fflush(stdout);
		
		switch(ch)
		{
			case 1:	bubbleSort(a);
				display(a,(char *)"after");
				break;

			case 2:	insertionSort(a);
				display(a, (char *)"after");
				break;
			
			case 3:	selectionSort(a);
				display(a, (char *)"after");
				break;

			case 4:	mergeSort(0,9,a);
				display(a, (char *)"after");
				break;
			
			case 5:	quickSort(0,9,a);
				display(a, (char *)"after");
				break;
	
			case 6: printf("Enter new list of numbers : ");
				for(int i=0;i<10;i++){
			                scanf("%d%*c", &a[i]);
			                b[i] = a[i];
					fflush(stdout);
			        }
				break;

			case 7: for(int i=0;i<10;i++)   a[i] = b[i];
				break;
		}
		if(ch == 8)	break;
	}
}

