/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from kfiv-decomp (src/sce/libc/time/mktime.c). */
typedef long time_t;
struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};
extern const int D_003D1BD0[12];
void
validate_structure (struct tm *tim_p);
time_t
mktime (struct tm *tim_p)
{
  time_t tim = 0;
  long days = 0;
  int year;
  validate_structure (tim_p);
  tim += tim_p->tm_sec + (tim_p->tm_min * 60) +
    (tim_p->tm_hour * 3600);
  days += tim_p->tm_mday - 1;
  days += D_003D1BD0[tim_p->tm_mon];
  if (tim_p->tm_mon > 1 && (((tim_p->tm_year) % 4) == 0 && (((tim_p->tm_year) % 100) != 0 || (((tim_p->tm_year)+1900) % 400) == 0)))
    days++;
  tim_p->tm_yday = days;
  if (tim_p->tm_year > 10000 || tim_p->tm_year < -10000)
    return (time_t) -1;
  if (tim_p->tm_year > 70)
    {
      for (year = 70; year < tim_p->tm_year; year++)
        days += ((((year) % 4) == 0 && (((year) % 100) != 0 || (((year)+1900) % 400) == 0)) ? 366 : 365);
    }
  else if (tim_p->tm_year < 70)
    {
      for (year = 70 - 1; year > tim_p->tm_year; year--)
        days -= ((((year) % 4) == 0 && (((year) % 100) != 0 || (((year)+1900) % 400) == 0)) ? 366 : 365);
      days -= ((((year) % 4) == 0 && (((year) % 100) != 0 || (((year)+1900) % 400) == 0)) ? 366 : 365);
    }
  tim_p->tm_wday = (days + 4) % 7;
  if (tim_p->tm_wday < 0)
    tim_p->tm_wday += 7;
  tim += days * 86400;
  return tim;
}