#include <stdio.h>

int main(){
	//===== How to Create Pointer ======
	//just declare a variable
//	int a;
	
	//Output address of variable a
//	printf("%p", &a);

	//===== Create pointer variable =====
//	int a;

	//A pointer variable that holds address to variable a
//	int *x = &a;

	//Output will show address of variable a
	//In this line, we dont need & operator. Because pointer x already assign it.
//	printf("%p", x);

	//===== Print value with address stored in ptr =====
//	int a = 10;
//	int *x = &a;

	//To print the output value, we need * operator for pointing the value of var a
	//The output must be 10.
//	printf("%d\n", *x);

	//If we didn't add * operator, the output gonna be address of var a, not the value.
//	printf("%p\n", x);

	//===== Add new value variable with pointer =====
	int a = 10;
	int *x = &a;

	//Print the output of value variable a before we assign new value.
	printf("%d\n", *x);

	//Assign new value with pointer to variable a
	*x = 20;

	//Print the output with variable a
	//The output will gonna be 20.
	printf("%d\n", a);
	
	return 0;
}
