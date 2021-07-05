#include <stdio.h>
#include <string.h>

char *replace_hyphens(char *string);

int main()
{
	
	char line[50]; 
	char string[50];
	printf("Enter your string (example: Hi-im-Luis)\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%s", &string); 

	printf("%s\n", replace_hyphens(string));

	return 0;
}


char *replace_hyphens(char *string)
{
	int counter;

	for (counter = 0; counter < strlen(string); ++counter) {
		if (string[counter] == '-')
			string[counter] = '_';
	}

	return string;
}
