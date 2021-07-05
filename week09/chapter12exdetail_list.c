#include <stdio.h>

int main()
{
	int list_length; 
	int counter;     

	struct car_details {
		char brand[30];
		char color[30];
		char model[10];
	};

	struct car_details list[] = {
		{
			"Kia",
			"Blue",
			"Rio",
		},
	};

	list_length = sizeof(list) / sizeof(list[0]);

	for (counter = 0; counter < list_length; ++counter) {
		printf("Brand name: %s\n", list[counter].brand);
		printf("Color: %s\n", list[counter].color);
		printf("Model: %s\n", list[counter].model);

	}

	return 0;
}
