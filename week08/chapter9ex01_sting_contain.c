#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_words(char *string);

int main()
{
	char line[1000];
	printf("Enter string:\n");

  //Agarro el rango de el string
	fgets(line, sizeof(line), stdin);

	
	line[strlen(line)-1] = '\0';

	printf("String contains %d words\n", count_words(line));

	return 0;
}
int count_words(char *string)
{
	int word_count; 
	int counter; 
	word_count = 1;

	for (counter = 0; counter < strlen(string); ++counter) {
    //Devuelve si el index del string es un espacio
		if (isspace(string[counter])) {
				++word_count;
		}
		
	}

	return word_count;
}