#include <stdio.h>
#include <stdlib.h>
#define LIMIT 1000

void fun5(int n);

int main() {

	int a = 3;
	fun5(a);
	return 0;
}


void fun5(int n) {
	if (n <= 0)  return;
	if (n > LIMIT)  return;
	printf("%d ", n);
	fun5(2 * n);
	printf("%d ", n);
}