#include<stdio.h>

/*
* Why is the second struct eight bytes bigger than the first one despite of
* containing the same three variables. It's the order! long is of size 
* eight and it must stand at an address which is divisible by eight.
* That's why there is a gap of four bytes between one and two in person_big.
* After three is also a gap of four bytes because every struct is filled up
* to an address which is divisible by eight.
* In person_little the one and two have together a size of eight bytes, so
* there is no gap necessary to get an address divisible by eight.
*
*/

struct person_little {
	int one;
	int two;
	long three;
};

struct person_big {
	int one;
	long two;
	int three;
};

void main() {
	printf("Size: %lu, %lu", sizeof(struct person_little), sizeof(struct person_big));
}
