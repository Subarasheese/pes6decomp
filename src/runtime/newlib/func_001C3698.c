/* compiler: ee-gcc-2.96-G0 */
/* The original implementation was adapted from tzcode maintained by Arthur David Olson. */
/* Adapted from newlib 1.9.0, libc/time/lcltime_r.c (localtime_r).
 * licence: newlib (see THIRD_PARTY.md) */
#include "newlib/pal_time.h"

typedef long time_t;
static const int mon_lengths[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                       {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
static const int year_lengths[2] = {365, 366};

struct tm *func_001C3698(const time_t *tim_p, struct tm *res) {
    long days;
    long rem;
    int y;
    int yleap;
    const int *ip;
    days = ((long)(*tim_p)) / ((60L * 60L) * 24L);
    rem = ((long)(*tim_p)) % ((60L * 60L) * 24L);
    while (rem < 0) {
        rem += (60L * 60L) * 24L;
        --days;
    }

    while (rem >= ((60L * 60L) * 24L)) {
        rem -= (60L * 60L) * 24L;
        ++days;
    }

    res->tm_hour = (int)(rem / (60L * 60L));
    rem %= 60L * 60L;
    res->tm_min = (int)(rem / 60L);
    res->tm_sec = (int)(rem % 60L);
    if ((res->tm_wday = (4 + days) % 7) < 0)
        res->tm_wday += 7;
    y = 1970;
    if (days >= 0) {
        for (;;) {
            yleap = (((y % 4) == 0) && ((y % 100) != 0)) || ((y % 400) == 0);
            if (days < year_lengths[yleap])
                break;
            y++;
            days -= year_lengths[yleap];
        }

    } else {
        do {
            --y;
            yleap = (((y % 4) == 0) && ((y % 100) != 0)) || ((y % 400) == 0);
            days += year_lengths[yleap];
        } while (days < 0);
    }
    res->tm_year = y - 1900;
    res->tm_yday = days;
    ip = mon_lengths[yleap];
    for (res->tm_mon = 0; days >= ip[res->tm_mon]; ++res->tm_mon)
        days -= ip[res->tm_mon];

    res->tm_mday = days + 1;
    res->tm_isdst = -1;
    return res;
}
