// Uptime.c
// William Riley
// 4/99
// Returns the amount of time since windows was started

#include <stdio.h>
#include <windows.h>
//#include <Windows32/CommonFunctions.h>

int main()
{
//Program variables
	long w_days, w_hours, w_minutes, w_seconds;
	DWORD uptime_ret;
//Initialize time values to zero
	w_days = 0;
	w_hours = 0;
	w_minutes = 0;
	w_seconds = 0;
//Get the number of milliseconds since Windows was started
	uptime_ret = GetTickCount();
//Calculate number of seconds
	w_seconds = uptime_ret/1000;
//Calculate number of minutes
	w_minutes = w_seconds/60;
	w_seconds = w_seconds % 60;
//Calculate number of hours
	w_hours = w_minutes/60;
	w_minutes = w_minutes % 60;
//Calculate number of days
	w_days = w_hours/24;
	w_hours = w_hours % 24;
//Print the information
	printf("up %d days, %d hours, %d minutes, %d seconds\n", w_days, w_hours, w_minutes, w_seconds);
//We're done
	return 0;
}
