#include <stdio.h>
#include <string.h>

//Struct is a user defined data type.
//A structure creates a data type that can be used to group items/different type into a single type

//===== How to create struct =====
//with a keyword of 'struct'.
//to declare variable in struct, 
//i will use a variable declaration like basic data type
struct brand {
	char name[100];
	int price;
};


int main() {
	//In here, i'm using local variable with struct
	struct brand headset;

	//Strcpy has function for copies the string pointed by source to the destination
	//I'm using it because it will be efficient and simple.
	//To make variable, see the code below
	strcpy(headset.name, "Razer Electra V2");
	headset.price = 700000;

	//To access the structure element, using dot (.) operator.
	printf("Headset Name: %s\n", headset.name);
	printf("Headset Price: %d\n", headset.price);
	printf("\n");

	//==== How to use pointer in struct =====
	struct brand* pheadset = &headset;

	//This line will print the address of variable headset
	printf("&headset: %d\n", &headset);

	//This line will print the address of pointer variable
	printf("pheadset: %d\n", pheadset);

	//This line will print value of name from variable headset
	printf("pheadset->name: %s\n", pheadset->name);

	//This line will print value of price from variable headset
	printf("pheadset->price: %d\n", pheadset->price);
	printf("\n");

	//==== How to use array in struct =====
	struct brand headsets[5];

	//Im gonna make headsets count for counting how many data/value in headset array.
	int headsetscount = 0;
	headsets[0] = headset;
	printf("headsets[0].name: %s\n", headsets[0].name);
	printf("headsets[0].price: %d\n", headsets[0].price);
	printf("\n");

	//This line will increase the headsets count because there already data in headset array
	headsetscount++;

	//For input from user, i'm gonna use looping
	for (int i = 1; i < 10; i++) {
		printf("Input the name of headset: ");
		scanf("\n%[^\n]s", &headsets[headsetscount].name);
		printf("Input the price of headset: ");
		scanf("%d", &headsets[headsetscount].price);
		printf("\n");
		headsetscount++;

		//This line will print data inside the array with loop. So, the user will know.
		for (int j = 0; j < headsetscount; j++) {
			printf("headsets[%d].name: %s\n", j, headsets[j].name);
			printf("headsets[%d].price: %d\n", j, headsets[j].price);
		}
		printf("\n");
	}

	return 0;
}
