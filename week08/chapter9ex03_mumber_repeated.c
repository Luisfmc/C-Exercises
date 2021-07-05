#include <stdio.h>

int count(int number, int *array, int length);

int main()
{
	    int range;
    int counter;
	int numbers[range];
  int numberRepeated;

    printf("Enter range of numbers:");
    scanf("%d", &range);

    printf("Enter the number repeated:");
    scanf("%d", &numberRepeated);

    printf("Enter %d elements\n", range);
    for (counter = 0; counter < range; counter++)    
    scanf("%d", &numbers[counter]);

	printf("Array contains %d times the number %d\n", count(numberRepeated, numbers, range), numberRepeated);

	return 0;
}

int count(int number, int *array, int length)
{
	if (length == 0)
		return 0;

	return (*array == number) + count(number, array+1, length-1);
}