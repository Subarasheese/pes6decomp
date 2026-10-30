/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00255E70(u32);
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_009E62D0(s16, s16);                        /* extern */
extern void *D_00CB3300;
extern char D_00CB5F28[];
extern char D_00CBBDFD[];
extern char D_00CBBE00[];
extern char D_00CBBE05[];

s32 func_002FFEF0(void) {
    s16 *temp_s1;
    s16 *temp_s2;
    s32 var_s0;

    if ((func_009E1C90(0) & 0xFF) != 4) {
        return 0xFF;
    }
    if ((func_009E1C90(1) & 0xFF) != 5) {
        return 0xFF;
    }
    if ((*(u8 *)D_00CBBE00) == 0xFF) {
        return 0xFF;
    }
    var_s0 = (func_00255E70((*(u8 *)D_00CBBDFD) & 1) == 0) & 0xFF;
    temp_s2 = D_00CB3300 + 0x300;
    temp_s1 = D_00CB3300 + 0xC;
    if (func_009E62D0(M2C_FIELD(D_00CB3300, s16 *, 0xC), M2C_FIELD(D_00CB3300, s16 *, 0x300)) != 0) {
        if (*temp_s2 >= *temp_s1) {
            if (func_00255E70(0U) != 0) {
                goto block_14;
            }
        } else if (func_00255E70(1U) != 0) {
block_14:
            var_s0 = 1;
        }
        return (var_s0 & 0xFF) + 6;
    }
    if ((*(u8 *)D_00CBBE00) == 1) {
        return var_s0 & 0xFF;
    }
    if ((*(u8 *)D_00CB5F28) != (*(u8 *)D_00CBBE05)) {
        return (var_s0 & 0xFF) + 2;
    }
    return (var_s0 & 0xFF) + 4;
}
