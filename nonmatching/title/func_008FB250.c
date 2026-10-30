/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int EIntr(void);
M2C_UNK func_00104BF8(M2C_UNK, M2C_UNK);            /* extern */
s32 DIntr();                                /* extern */

void func_008FB250(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0x828) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    temp_v0 = DIntr();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 = 0;
    *(s32 *)0x1000B400 = 0;
    *(s32 *)0x1000D400 = 0;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    if (temp_v0 != 0) {
        EIntr();
    }
    *(s32 *)0x1000B020 = 0;
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x1000D420 = 0;
    *(s32 *)0x10002010 = 0x40000000;
    func_00104BF8(0, 0);
}
