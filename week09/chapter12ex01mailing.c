#include <stdio.h>

int main()
{
	int list_length; 
	int counter;     

	struct mailing {
		char name[30];
		char last_name[30];
		char gender[10];
		char mail[40];
	};

	struct mailing list[] = {
		{
			"Luis",
			"Mendez",
			"Male",
			"luis@gmail.com",
		},
	};

	list_length = sizeof(list) / sizeof(list[0]);

	for (counter = 0; counter < list_length; ++counter) {
		printf("First name: %s\n", list[counter].name);
		printf("Last name: %s\n", list[counter].last_name);
		printf("Gender: %s\n", list[counter].gender);
		printf("mail: %s\n", list[counter].mail);

	}

	return 0;
}
