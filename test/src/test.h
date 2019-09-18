#ifndef test_h
#define test_h

#include <stdlib.h>
#include <stdio.h>

void test_Insert();
void test_findMin();
void test_extractMin();

int main(void) {

	test_Insert();
	test_findMin();
	test_extractMin();
	printf("\nAll tests are passed!\n");
}
#endif