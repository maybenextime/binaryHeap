#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "binaryHeap.h"

#define MINVAL -1

bHeap* createHeap(int capacity) {
	//if (capacity > MAXVAL) return;
	bHeap* heap =(bHeap*) malloc(sizeof(bHeap));
	if (!heap) return NULL;	
	heap->capacity = capacity;
	heap->size = 0;
	heap->data = (int*)malloc(capacity * sizeof(int));
	for (int i = 0;i < capacity;i++) {
		heap->data[i] = MINVAL;
	}
	return heap;
}


void destroy(bHeap* heap) {
	free(heap->data);
	free(heap);
}

int isEmpty(bHeap* heap) {
	return (heap->size == 0);
}

int getParentIndex(int ind) {
	if (ind == 0) return -1;
	return (ind - 1) / 2;
}

void upHeapify(bHeap* heap, int ind) {
	int indP = getParentIndex(ind);
	if (indP != -1 && heap->data[ind] < heap->data[indP]) {
		int tmp;
		tmp = heap->data[ind];
		heap->data[ind]= heap->data[indP];
		heap->data[indP] = tmp;
		upHeapify(heap, indP);
	}
}
void downHeapify(bHeap*heap, int ind) {
	int indCh = 2 * ind + 1;
	if (indCh < heap->size) {
		if (heap->data[indCh + 1] < heap->data[indCh]) indCh++;
		if (heap->data[ind] > heap->data[indCh]) {
			int tmp;
			tmp = heap->data[ind];
			heap->data[ind] = heap->data[indCh];
			heap->data[indCh] = tmp;
			downHeapify(heap, indCh);
		}
	}
}

void insertHeap(bHeap* heap, int value) {
	if (heap->size == heap->capacity)
		return;
	heap->data[heap->size] = value;
	heap->size++;
	upHeapify(heap, heap->size - 1);
}


int findMin(bHeap* heap) {
	if(!isEmpty(heap)) return heap->data[0];
	else return -1;
}

int extractMin(bHeap* heap) {
	if (!isEmpty(heap)) {
		int res = heap->data[0];
		heap->data[0] = heap->data[heap->size - 1];
		heap->size--;
		downHeapify(heap, 0);
		return res;
	}
	return -1;
}
void heapSort(int* arr, int size) {
	bHeap* heap = createHeap(size);
	for (int i = 0; i < size; i++) {
		insertHeap(heap, arr[i]);
	}
	for (int i = 0; i < size; i++) {
		arr[i] = extractMin(heap);
	}
}


