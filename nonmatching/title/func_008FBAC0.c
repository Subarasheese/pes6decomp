/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int EIntr(void);
M2C_UNK func_00104CD8();                            /* extern */
s32 DIntr();                                /* extern */

s32 func_008FBAC0(void) {
    s32 temp_v0;

    temp_v0 = DIntr();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 &= 0xFFFFFEFF;
    *(s32 *)0x1000B400 &= 0xFFFFFEFF;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    if (temp_v0 != 0) {
        EIntr();
    }
    *(s32 *)0x1000B020 = 0;
    *(s32 *)0x1000B420 = 0;
    func_00104CD8();
    return 1;
}
