#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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
    printf("x is %d\n", x);
    printf("y is %d\n", y);
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

	printf("The result is x + y is %d\n", addResult);
    printf("The result is x - y is %d\n", subtractResult);
    printf("The result is x * y is %d\n", multiplyResult);
    printf("The result is x / y is %d\n", divideResult);
    printf("The result is x > y is %d\n", greaterThanResult);
    printf("The result is x < y is %d\n", lessThanResult);
    printf("The result is x == y is %d\n", equalsResult);
    printf("The result is x != y is %d\n", doesNotEqualResult);
    printf("The result is ++x is %d\n", incrementResult);
    printf("The result is --y is %d\n", decrementResult);
	printf("Operator demo complete.\n\n");

	// example if, else if, else statement in c
	x = 1;
	y = 0;
	if (x > y) {
  		printf("x is greater than y\n");
	} else if(y > x) {
  		printf("y is greater than x\n");
	} else {
  		printf("x is equal to y\n");
	}
	printf("Conditional logic demo is done running\n\n");

	// example for statement in C
	for (int x = 0; x < 3; x++) {
  		printf("x is %d\n", x);
	}
	
	printf("For loop demo is done running.\n\n");

	// example while statement in C
	x = 5;
	while (x > 0) {
  		printf("x is %d\n", x);
  		x--;
	}
	
	printf("While loop demo done running.\n");

	return 0;
}
