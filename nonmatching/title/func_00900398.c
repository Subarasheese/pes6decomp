/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int EIntr(void);
s32 DIntr();                                /* extern */

void func_00900398(void) {
    s32 temp_v0;

    temp_v0 = DIntr();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 = 0;
    *(s32 *)0x1000B400 = 0;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    if (temp_v0 != 0) {
        EIntr();
    }
    *(s32 *)0x1000B020 = 0;
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x10002010 = 0x40000000;
}
