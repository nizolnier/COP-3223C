/* Nicole Zolnier
Finding how many years, months, weeks, days, hours and minutes have elapsed from Jan 1 1970
6/16/21  
COP 3223 */

#include <stdio.h>
#include <time.h>

// declaring all constants that will be used in the process
const double HOURS_IN_DAY = 24;
// this two constants were given by the exercise and it is more secure to use them since some months have different amounts of weeks
const double DAYS_IN_YEAR = 365;
const double DAYS_IN_MONTH = 30.42;
const double DAYS_IN_WEEK = 7;
// converting everything to seconds
const double SECONDS_IN_MINUTE = 60;
const double SECONDS_IN_HOUR = 60 * SECONDS_IN_MINUTE;
const double SECONDS_IN_DAY = HOURS_IN_DAY * SECONDS_IN_HOUR;
const double SECONDS_IN_WEEK = DAYS_IN_WEEK * SECONDS_IN_DAY;
const double SECONDS_IN_MONTH = DAYS_IN_MONTH * SECONDS_IN_DAY;
const double SECONDS_IN_YEAR = DAYS_IN_YEAR * SECONDS_IN_DAY;

int main (void) {
    // declaring variables as integers because we want the approximated value
    int years, months, weeks, days, hours, minutes;
    // time has an appropriate datatype to be used
    time_t now = time(NULL);
    // i set the timestamp as a long long after declaring it 
    long long timestamp = now;  

    // printing for the user to understand where the calculation is coming from
    printf("Since Jan 1, 1970, it has gone by\n");

    // so here the "principle" is:
    // first: dividing the timestamp by seconds in years to get how many numbers have gone by
    years = timestamp / SECONDS_IN_YEAR;

    // printing it as an integer to get rounded numbers
    printf("%d years\n", years);

    // setting the timestamp as the rest of the division to move along
    timestamp %= (long long)SECONDS_IN_YEAR;

    // then do the same for every other variable
    months = timestamp / SECONDS_IN_MONTH;
    printf("%d months\n", months);
    timestamp %= (long long)SECONDS_IN_MONTH;

    weeks = timestamp / SECONDS_IN_WEEK;
    printf("%d weeks\n", days);
    timestamp %= (long long)SECONDS_IN_WEEK;

    days = timestamp / SECONDS_IN_DAY;
    printf("%d days\n", days);
    timestamp %= (long long)SECONDS_IN_DAY;
    
    hours = timestamp / SECONDS_IN_HOUR;
    printf("%d hours\n", hours);
    timestamp %= (long long)SECONDS_IN_HOUR;
    
    // and that's a wrap!
    minutes = timestamp / SECONDS_IN_MINUTE;
    printf("%d minutes\n", minutes);

    return 0;
}