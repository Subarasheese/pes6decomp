/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00194978(s32, s32, void *);
M2C_UNK func_0019BA18(void *, void *);              /* extern */
s32 func_001A4728(s32);                             /* extern */
M2C_UNK func_001A4778();                            /* extern */
extern char D_011FD510[];

s32 func_00194C50(s32 arg0, s32 arg1, s8 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_v0;
    void *temp_v0;

    temp_a0 = (arg1 * 0x1C) + (arg0 * 0x70);
    if (M2C_FIELD((((void *)D_011FD510) + temp_a0), s32 *, 0x10) == 0) {
        var_v0 = 0;
    } else {
        temp_s0 = func_001A4728(temp_a0);
        temp_v0 = func_00194978(arg0, arg1, NULL);
        M2C_FIELD(temp_v0, s8 *, 0x71) = arg2;
        func_0019BA18(temp_v0, temp_v0 + 0x7F);
        var_v0 = 1;
        if (temp_s0 == 1) {
            func_001A4778();
            var_v0 = 1;
        }
    }
    return var_v0;
}
