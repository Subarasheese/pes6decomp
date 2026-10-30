/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099DFF0();                                /* extern */
s32 func_009B30B0(u16, s32);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E7C[];

s32 func_00A10990(void *arg0, s32 arg1) {
    s32 temp_v0;

    if ((*(s32 *)D_00591E7C) == 0) {
        goto block_1;
    }
    if ((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), func_0099DFF0()) & 0xFFFF) < 0x21) {
        goto block_6;
    }
block_1:
    if ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0xC401U) {
        temp_v0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
        if (arg1 >= temp_v0) {
            return temp_v0;
        }
    }
block_6:
    return arg1;
}
