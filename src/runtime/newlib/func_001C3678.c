/* compiler: ee-gcc-2.96 */
#include "newlib/pal_time.h"

extern struct _reent *_impure_ptr __attribute__((section(".data")));

struct tm *func_001C3678(const long *seconds) {
    return func_001C3698(seconds, &_impure_ptr->_new._reent._localtime_buf);
}
