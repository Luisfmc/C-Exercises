#include <stdio.h>

int maximum(int *array, int length);

int main()
{
	int numbers[5] = {4, 2, 4, 3, 5};
	
	printf("Los numero pares son \n");
	maximum(numbers, 5);

	return 0;
}


int maximum(int *array, int length)
{
	int counter;

	for (counter = 0; counter < length; ++counter) {
		if (array[counter] % 2 == 0)
			printf("%d\n", array[counter]);
	}

	return 0;

	
}
