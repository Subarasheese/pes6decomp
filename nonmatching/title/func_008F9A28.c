/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int EIntr(void);
s32 DIntr();                                /* extern */

void func_008F9A28(u32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_s0;

    temp_a1 = DIntr();
    if ((arg0 >> 0x1C) == 7) {
        var_s0 = (arg0 & 0x0FFFFFFF) | 0x80000000;
    } else {
        var_s0 = arg0 & 0x0FFFFFFF;
    }
    *(s32 *)0x1000B010 = var_s0;
    *(s32 *)0x1000B020 = arg1 >> 4;
    *(s32 *)0x1000B000 = 0x100;
    if (temp_a1 != 0) {
        EIntr();
    }
}
