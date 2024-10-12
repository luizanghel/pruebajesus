/**
* The purpose of this file is to contain all the tests done to check that
* the program is working correctly. If desired, tests could be distributed 
* between different .c files. 
**/

#include <stdio.h>
#include "add.h"
#include "sub.h"

/*
* The goal of this test is to check if when two positive integer
* operands are given, the progrm is able to add them correctly;
*/
void TEST_shouldAddAndPrint5() {
	int op1, op2;
	int result = 0;

	op1 = 2;
	op2 = 3;

	result = ADD_twoOperands(op1, op2);
	printf("TEST - Result in shouldAddAndPrint5 is: %d\n", result);
}

/*
* The goal of this test is to check if when a positive integer
* operand and a negative operand are given, the progrm is able to 
* add them correctly;
*/
void TEST_shouldAddAndPrint4() {
	int op1, op2;
	int result = 0;

	op1 = 5;
	op2 = -1;

	result = ADD_twoOperands(op1, op2);
	printf("TEST - Result in shouldAddAndPrint4 is: %d\n", result);
}

/*
* This test will check that two positive integers can be subtracted
*/
void TEST_shouldSubAndPrint1() {
	int op1, op2;
	int result = 0;

	op1 = 15;
	op2 = 14;

	result = SUB_twoOperands(op1, op2);
	printf("TEST - Result in shouldSubAndPrint1 is: %d\n", result);

}


int main() {
	// Let's try a variety of functionalities
	TEST_shouldAddAndPrint5();
	TEST_shouldAddAndPrint4();
	TEST_shouldSubAndPrint1();
	// More tests could be added
	
	return 0;
}
