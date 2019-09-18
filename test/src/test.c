#include <stdio.h>
#include <assert.h>
#include "binaryHeap.h"
#include "test.h"

void test_Insert() {
	bHeap* heap_test = createHeap(10);
	assert(heap_test->size== 0);
	insertHeap(heap_test, 14);
	insertHeap(heap_test, 11);
	insertHeap(heap_test, 10);
	insertHeap(heap_test, 13);
	assert(heap_test->size == 4);
	printf("test_Insert passed\n");

}
void test_findMin() {
	bHeap* heap_test = createHeap(10);
	insertHeap(heap_test, 13);
	insertHeap(heap_test, 14);
	insertHeap(heap_test, 18);
	insertHeap(heap_test, 16);
	insertHeap(heap_test, 17);
	insertHeap(heap_test, 10);
	insertHeap(heap_test, 11);
	for (int i = 0;i < heap_test->size;i++) {
		printf("%d\n", heap_test->data[i]);
	}
	int k = findMin(heap_test);
	assert(k== 10);
	printf("test_findMin passed\n");

}
void test_extractMin() {
	bHeap* heap_test = createHeap(10);
	insertHeap(heap_test, 11);
	insertHeap(heap_test, 13);
	insertHeap(heap_test, 10);
	insertHeap(heap_test, 14);
	int res= extractMin(heap_test);
	assert(res== 10);
	assert(heap_test->size == 3);
	printf("test_extractMin passed\n");

	}