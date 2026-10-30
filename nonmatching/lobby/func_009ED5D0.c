/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213920(s32, s32, s32, void *, s32);
M2C_UNK func_002136B0(s32, s16);                    /* extern */
extern char D_00A7E004[];
extern char D_00A7E008[];
extern char D_00A7E00C[];
extern char D_00A7E010[];

void func_009ED5D0(void *arg0, s32 arg1, s16 arg2, s32 arg3) {
    if (((u64) ((s64) (*(u8 *)D_00A7E010) << 0x3E) >> 0x3F) == 0) {
        func_00213920((*(s32 *)D_00A7E00C), arg3, 0, arg0, arg1);
        func_002136B0((*(s32 *)D_00A7E00C), arg2);
        (*(s16 *)D_00A7E008) = arg2;
        (*(s32 *)D_00A7E004) = arg1;
        (*(u8 *)D_00A7E010) = ((*(u8 *)D_00A7E010) & ~2) | 2;
    }
}
