all: target

target:main.o insert.o bubble.o selection.o quick.o merge.o
	gcc main.o insert.o bubble.o selection.o quick.o  merge.o -o target

main.o: main.c
	gcc -c main.c

insert.o: insertionsort.c
	gcc -c insertionsort.c -o insert.o

bubble.o: bubblesort.c
	gcc -c bubblesort.c -o bubble.o

selection.o: selectionsort.c
	
	gcc -c selectionsort.c -o selection.o

quick.o: quicksort.c
	gcc -c quicksort.c -o quick.o

merge.o: mergesort.c
	gcc -c mergesort.c -o merge.o

rm:
	rm -rf *.o target
run:
	@./target
