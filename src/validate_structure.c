/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from kfiv-decomp (src/sce/libc/time/mktime.c). */
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
typedef struct {
    int quot;
    int rem;
} div_t;
extern div_t div(int numer, int denom);
extern const int D_003D1BA0[12];
static void
validate_structure (struct tm *tim_p)
{
  div_t res;
  int days_in_feb = 28;
  if (tim_p->tm_sec < 0 || tim_p->tm_sec > 59)
    {
      res = div (tim_p->tm_sec, 60);
      tim_p->tm_min += res.quot;
      if ((tim_p->tm_sec = res.rem) < 0)
        {
          tim_p->tm_sec += 60;
          --tim_p->tm_min;
        }
    }
  if (tim_p->tm_min < 0 || tim_p->tm_min > 59)
    {
      res = div (tim_p->tm_min, 60);
      tim_p->tm_hour += res.quot;
      if ((tim_p->tm_min = res.rem) < 0)
        {
          tim_p->tm_min += 60;
          --tim_p->tm_hour;
        }
    }
  if (tim_p->tm_hour < 0 || tim_p->tm_hour > 23)
    {
      res = div (tim_p->tm_hour, 24);
      tim_p->tm_mday += res.quot;
      if ((tim_p->tm_hour = res.rem) < 0)
        {
          tim_p->tm_hour += 24;
          --tim_p->tm_mday;
        }
    }
  if (tim_p->tm_mon > 11)
    {
      res = div (tim_p->tm_mon, 12);
      tim_p->tm_year += res.quot;
      if ((tim_p->tm_mon = res.rem) < 0)
        {
          tim_p->tm_mon += 12;
          --tim_p->tm_year;
        }
    }
  if ((((tim_p->tm_year) % 4) == 0 && (((tim_p->tm_year) % 100) != 0 || (((tim_p->tm_year)+1900) % 400) == 0)))
    days_in_feb = 29;
  if (tim_p->tm_mday <= 0)
    {
      while (tim_p->tm_mday <= 0)
        {
          if (--tim_p->tm_mon == -1)
            {
              tim_p->tm_mon = 11;
              --tim_p->tm_year;
              days_in_feb = (((tim_p->tm_year) % 4) == 0 && (((tim_p->tm_year) % 100) != 0 || (((tim_p->tm_year)+1900) % 400) == 0)) ? 29 : 28;
            }
          tim_p->tm_mday += ((tim_p->tm_mon == 1) ? days_in_feb : D_003D1BA0[tim_p->tm_mon]);
        }
    }
  else
    {
      while (tim_p->tm_mday > ((tim_p->tm_mon == 1) ? days_in_feb : D_003D1BA0[tim_p->tm_mon]))
        {
          tim_p->tm_mday -= ((tim_p->tm_mon == 1) ? days_in_feb : D_003D1BA0[tim_p->tm_mon]);
          if (++tim_p->tm_mon == 12)
            {
              tim_p->tm_mon = 0;
              ++tim_p->tm_year;
              days_in_feb = (((tim_p->tm_year) % 4) == 0 && (((tim_p->tm_year) % 100) != 0 || (((tim_p->tm_year)+1900) % 400) == 0)) ? 29 : 28;
            }
        }
    }
}