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

};
void test_findMin() {
	bHeap* heap_test = createHeap(10);
	insertHeap(heap_test, 11);
	insertHeap(heap_test, 14);
	insertHeap(heap_test, 10);
	insertHeap(heap_test, 13);
	printf("%d", heap_test->data[0]);
	printf("%d", heap_test->data[1]);
	printf("%d", heap_test->data[2]);
	printf("%d", heap_test->data[3]);
	int k = findMin(heap_test);
	assert(k== 10);
	printf("test_findMin passed\n");

};
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