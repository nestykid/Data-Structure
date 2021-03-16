#include <stdio.h>

int main() {
	//===== How to create Array =====
	//the number inside [] are the the length of array. It called index
	//Index array are start from 0.
	//Exampe : arr[5] = {'h','a','n','s'};
	//If u want print char a, it will be index arr[1]. If u want print s, it will be index arr[4].
	//whitespace is include to array.
	int arr[10] = {1,2,3,4,5};

	printf("arr[2]: %d\n", arr[2]);
	printf("\n");

	//===== Input value to array =====
	//We also can replace the value in array with declaration command.
	int arr2[5] = {'h','a','n','s'};
	arr2[1] = { 'e' };

	printf("arr2[1]: %c\n", arr2[1]);
	printf("\n");

	//===== Looping with Array =====
	//In array, we can also looping the value.
	int arr3[10] = {1,2,3,4,5};
	
	//In here, im using the for command to loop it.
	for(int i=0; i<10;i++) {
		printf("arr[%d]: %d\n", i, arr3[i]);
	}
	printf("\n");

	//===== 2 Dimensional Array =====
	//We can also create multi-dimensional array
	//For input, it will gonna arr[index][index]={{}}.
	//See the code below
	int arr4[3][2] = {
		{1,2},
		{3,4},
		{5,6}
	};

	//Im gonna use looping for show all value in array.
	for (int j = 0; j < 3; j++) {
		for (int k = 0; k < 2; k++) {
			printf("arr4[%d][%d] : %d  ", j, k, arr4[j][k]);
		}
		printf("\n");
	}
	printf("\n");

	//===== 3 Dimensional Array =====
	//Same as before, but in this part
	//it will be arr[index][index][index] = {{{}}}.
	int arr5[3][2][5] = {
		{{1,2,3,4,5},{6,7,8,9,10}},
		{{1,2,3,4,5},{6,7,8,9,10}},
		{{1,2,3,4,5},{6,7,8,9,10}}
	};

	//Im gonna use looping
	for (int l = 0; l < 3; l++) {
		for (int p = 0; p < 2; p++) {
			for (int o = 0; o < 5; o++) {
				printf("arr5[%d][%d][%d]: %d  ", l, p, o, arr5[l][p][o]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
