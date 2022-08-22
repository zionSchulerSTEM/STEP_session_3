#include <stdio.h>
#include <string.h>

int main() {
	int addResult;
	int subtractResult;
	int multiplyResult;
	int divideResult;
	int incrementResult;
	int decrementResult;
	bool greaterThanResult;
	bool lessThanResult;
	bool equalsResult;
	bool doesNotEqualResult;

	int x = 7;
	int y = 4;

	addResult = x + y;
	subtractResult = x - y;
	multiplyResult = x * y;
	divideResult = x / y;
	greaterThanResult = x > y;
	lessThanResult = x < y;
	equalsResult = x == y;
	doesNotEqualResult = x != y;
	incrementResult = ++x;
	decrementResult = --y;

	printf("The result is %d\n", addResult);
	printf("Operator demo complete.\n");

	// example if, else if, else statement in c
	int x = 1;
	int y = 0;
	if (x > y) {
  		printf("x is greater than y\n");
	} else if(y > x) {
  		printf(y is greater than x\n");
	} else {
  		printf("x is equal to y\n");
	}
	printf("Conditional logic demo is done running\n");

	// example for statement in C
	for (int x = 0; x < 3; x++) {
  		printf("x is %d", x);
	}
	
	printf("For loop demo is done running.\n");

	// example while statement in C
	int x = 5;
	while (x > 0) {
  		printf("x is %d", x);
  		x--;
	}
	
	printf("While loop demo done running.\n");

	return 0;
}
