/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_0022F0E0(void);
s32 func_0095C9B0(M2C_UNK);                         /* extern */
extern char D_00B8F670[];

void func_00B68870(void) {
    s32 temp_s1;
    s32 temp_s3;
    s32 var_s2;
    u8 *temp_s0;

    temp_s1 = func_0022F0E0();
    var_s2 = 0;
    do {
        temp_s0 = ((void *)D_00B8F670) + (var_s2 & 0xFF);
        *temp_s0 = 0;
        temp_s3 = func_0095C9B0(0) & 0xFF;
        if (temp_s3 == (func_00225820() & 0xFF)) {
            *temp_s0 = M2C_FIELD((temp_s1 + ((var_s2 & 0xFF) * 0x14)), u8 *, 0x5F);
        } else {
            *temp_s0 = M2C_FIELD((temp_s1 + ((var_s2 & 0xFF) * 0x14)), u8 *, 0x2DF);
        }
        var_s2 = (var_s2 + 1) & 0xFF;
    } while (var_s2 < 0x20);
}
