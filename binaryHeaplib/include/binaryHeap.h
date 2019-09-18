#ifndef BINARY_HEAP_H
#define BINARY_HEAP_H
typedef struct binaryHeap bHeap;
struct binaryHeap {
	int capacity;
	int size;
	int* data;
};
bHeap* createHeap(int capacity);
void destroy(bHeap* heap);
int isEmpty(bHeap* heap);
void insertHeap(bHeap* heap, int value);
int findMin(bHeap* heap);
int extractMin(bHeap* heap);
void heapSort(int* arr, int size);

#endif

