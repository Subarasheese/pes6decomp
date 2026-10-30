/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00171000();                                /* extern */

s64 func_00171088(void) {
    return (s64) ((func_00171000() & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20;
}
