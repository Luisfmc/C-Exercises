#include <stdio.h>
#include <string.h>

int begins(char *string1, char *string2);

int main()
{
	char first_input[100];
	char second_input[100]; 

	printf("First string\n");
	fgets(first_input, sizeof(first_input), stdin);
	first_input[strlen(first_input)-1] = '\0';
	
	printf("Second string\n");
	fgets(second_input, sizeof(second_input), stdin);
	second_input[strlen(second_input)-1] = '\0';

	if (begins(first_input, second_input) != 0)
		printf("Does start\n");
	else
		printf("Does not start\n");

	return 0;
}

int begins(char *string1, char *string2)
{
	int counter;

	for (counter = 0; counter < strlen(string2); ++counter) {
		if (string1[counter] != string2[counter])
			return 0;
	}

	return 1;
}
