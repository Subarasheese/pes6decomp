/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 mktime(s32 *);                           /* extern */

s64 func_00827B20(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;

    sp10 = arg5;
    sp14 = arg4;
    sp18 = arg3;
    sp1C = arg2;
    sp20 = arg1 - 1;
    sp24 = arg0 - 0x76C;
    sp28 = 0;
    sp2C = 0;
    sp30 = 0;
    return (s64) (mktime(&sp10) << 0x20) >> 0x20;
}
