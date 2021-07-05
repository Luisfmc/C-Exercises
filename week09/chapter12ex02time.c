#include <stdio.h>

struct time {
	int day;   
	int month; 
	int year;   
	int hour;    
	int minutes; 
};

int timediff(struct time first_time, struct time second_time);

int main()
{
	struct time times[] = {
		{
			2,    
			12,   
			2018, 
			15,   
			23    
		},
		{
			7,    
			8,   
			2019, 
			16,  
			20  
		}
	};

	printf("Time difference is %d minutes\n", timediff(times[0], times[1]));

	return 0;
}

int timediff(struct time first_time, struct time second_time)
{
	int first_minutes;  
	int second_minutes; 

	first_minutes = first_time.minutes + (first_time.hour * 60);
	second_minutes = second_time.minutes + (second_time.hour * 60);

	if (first_minutes >= second_minutes)
		return first_minutes - second_minutes;
	else
		return second_minutes - first_minutes;
}
