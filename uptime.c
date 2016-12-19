// Uptime.c
// William Riley
// 4/99
// Returns the amount of time since windows was started

#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
//Program variables
    long w_days, w_hours, w_minutes, w_seconds;
    DWORD uptime_ret;
    char timebuf[128];
//Get current time
    _tzset();
    _strtime_s(timebuf, 128);
//Initialize time values to zero
    w_days = 0;
    w_hours = 0;
    w_minutes = 0;
    w_seconds = 0;
//Get the number of milliseconds since Windows was started
    uptime_ret = GetTickCount64();
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
    if(w_days == 0)
    {
        printf("%s up %d:%d\n", timebuf, w_hours, w_minutes);
    } else {
        printf("%s up %d days, %d:%d\n", timebuf, w_days, w_hours, w_minutes);
    }
    //printf("offset %lds\n", timeinfo->tm_gmtoff);
//We're done
    return 0;
}

