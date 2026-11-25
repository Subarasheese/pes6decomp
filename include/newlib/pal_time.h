#ifndef NEWLIB_PAL_TIME_H
#define NEWLIB_PAL_TIME_H

#include "newlib/pal_reent_types.h"

struct tm *func_001C3678(const long *seconds);
struct tm *func_001C3698(const long *seconds, struct tm *result);

#endif
