#include <stdio.h>
#include "add.h"
#include "sub.h"

#define ADD 1
#define SUB 2
#define EXIT 3

int printMenu() {
	int option = 0;

	printf("Select an option:\n");
	printf("\t1.Add\n");
	printf("\t2.Subtract\n");
	printf("\t3.Exit\n");

	scanf("%d", &option);

	return option;
}

void doAdd() {
	int num1, num2, result;
	
	// Let's add two numbers with our code
	printf("Insert number 1: ");
	scanf("%d", &num1);

	printf("Insert number 2: ");
	scanf("%d", &num2);
	
	result = ADD_twoOperands(num1, num2);

	printf("The result of adding these two integers is %d\n", result);
}



void doSub() {
	int num1, num2, result;
	
	// Let's subtract two numbers with our code
	printf("Insert number 1: ");
	scanf("%d", &num1);

	printf("Insert number 2: ");
	scanf("%d", &num2);
	
	result = SUB_twoOperands(num1, num2);

	printf("The result of subtracting these two integers is %d\n", result);

}

void manageOption(int option) {
	if (option != ADD && option != SUB && option != EXIT) {
		printf("ERROR! Insert a correct number\n");
	} else {
		switch (option) {
			case ADD:
				doAdd();
				break;

			case SUB:
				doSub();
				break;
		}		
	}

}

int main() {
	int option = 0;
	
	printf("Welcome to the simple program! Let's do some maths\n");

	do {
		option = printMenu();
		manageOption(option);
	} while (option != EXIT);

	printf("Bye!!\n");

	return 0;
}
