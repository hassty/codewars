#include <stdbool.h>

bool IsLeapYear(int year)
{
    return (!(year % 400) || !(year % 4) && (year % 100));
}