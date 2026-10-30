/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00188690();                                /* extern */
s32 func_001A3330();                                /* extern */
M2C_UNK func_00237C40(s32 *);                       /* extern */
s64 func_0090F520();                                /* extern */
extern u8 D_003E9A24;
extern char D_0051FF48[];
extern char D_00591BB4[];
extern char D_0092F0D0[];

void func_00908650(void) {
    s32 temp_v0;
    s32 var_v1;

    if (((s64) (func_0090F520() << 0x38) >> 0x38) == 1) {
        func_00237C40(((void *)D_0092F0D0));
    }
    switch (D_003E9A24) {                           /* irregular */
    case 2:
        temp_v0 = func_00188690();
        if (temp_v0 != 1) {
            if (temp_v0 != 8) {
                var_v1 = ((*(s32 *)D_0092F0D0) | 0x800) & 0xFFFF7FFF;
            } else {
                var_v1 = (*(s32 *)D_0092F0D0) | 0x800 | 0x8000;
            }
        } else {
            var_v1 = (*(s32 *)D_0092F0D0) & ~0x800 & 0xFFFF7FFF;
        }
block_14:
        (*(s32 *)D_0092F0D0) = var_v1;
        break;
    case 0:
        var_v1 = (*(s32 *)D_0092F0D0) | 0x800;
        goto block_14;
    case 1:
        var_v1 = (*(s32 *)D_0092F0D0) & ~0x800;
        goto block_14;
    }
    if ((*(u8 *)D_00591BB4) == 0) {
        (*(s32 *)D_0092F0D0) = (*(s32 *)D_0092F0D0) | 0x400 | 0x400000;
    }
    if (func_001A3330() != 0) {
        (*(s32 *)D_0092F0D0) |= 0x100000;
    }
    if ((s32) (*(u8 *)D_0051FF48) < 3) {
        (*(s32 *)D_0092F0D0) |= 0x400000;
    }
}
