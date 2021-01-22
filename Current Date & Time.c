#include <stdio.h>
#include <time.h>

// Print current date and time in C
int main()
{
	// variables to store date and time components
	int day, month, year;

	// time_t is arithmetic time type
	time_t now;

	// Obtain current time
	// time() returns the current time of the system as a time_t value
	time(&now);

	// Convert to local time format and print to stdout
	printf("Today is : %s", ctime(&now));

	// localtime converts a time_t value to calendar time and
	// returns a pointer to a tm structure with its members
	// filled with the corresponding values
	struct tm *local = localtime(&now);

    day = local->tm_mday;        	// get day of month (1 to 31)
    month = local->tm_mon + 1;   	// get month of year (0 to 11)
    year = local->tm_year + 1900;	// get year since 1900

	// print current date
	printf("Date is : %02d/%02d/%d\n", day, month, year);

	return 0;
}

