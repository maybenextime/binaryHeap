#include <stdio.h>
#include "binaryHeap.h"

int main(void) {
	int arr[6] = { 9, 2, 5, 22, 11, 10 };
	bHeap* heap_test = createHeap(10);
	printf("Source array:\t");
	for (int i = 0; i < 6; i++) {
		printf("%d   ", arr[i]);
		insertHeap(heap_test, arr[i]);
	}

	printf("\n");

	printf("insert heap:\t");
	for (int i = 0; i < 6; i++) {
		printf("%d   ", heap_test->data[i]);
	};

	heapSort(arr, 6);

	printf("\n");
	printf("sorted array:\t");
	for (int i = 0; i < 6; i++) {
		printf("%d   ", arr[i]);
	}
}
