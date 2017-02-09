# Compiler variables
CCFLAGS = -Wall 

# Rule to link object code files to create executable file
Main.exe: Main.o BubbleSort.o InsertionSort.o SelectionSort.o MergeSort.o QuickSort.o
	gcc $(CCFLAGS) -o Main.exe Main.o BubbleSort.o	InsertionSort.o SelectionSort.o MergeSort.cc QuickSort.o

Main.o: Main.cc
	gcc $(CCFLAGS) -c Main.cc
# Rules to compile source code files to object code
BubbleSort.o: BubbleSort.cc
	gcc $(CCFLAGS) -c BubbleSort.cc

InsertionSort.o: InsertionSort.cc
	gcc $(CCFLAGS) -c InsertionSort.cc

SelectionSort.o: SelectionSort.cc
	gcc $(CCFLAGS) -c SelectionSort.cc

MergeSort.o: MergeSort.cc
	gcc $(CCFLAGS) -c MergeSort.cc

QuickSort.o: QuickSort.cc
	gcc $(CCFLAGS) -c QuickSort.cc
# Pseudo-target to remove object code and executable files
clean:
	-rm *.o Main.exe
