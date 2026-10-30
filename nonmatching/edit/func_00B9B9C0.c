/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B90E70(u8);                          /* extern */
M2C_UNK func_00B9BAA0(void *);                      /* extern */
M2C_UNK func_00B9BC60(void *);                      /* extern */
s32 func_00BC4270(void *, s32);                     /* extern */
s32 func_00BCF3C0(M2C_UNK);                         /* extern */

s32 func_00B9B9C0(void *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (func_00BCF3C0(0x1000) == 0) {
        if (func_00BCF3C0(0x4000) == 0) {
            if (func_00BC4270(arg0 + 0x34, M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
                func_00B90E70(M2C_FIELD(arg0, u8 *, 0x34));
            }
        } else if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
            func_0026E840(0x84008401);
            func_00B9BAA0(arg0);
            var_s1 = 1;
        } else if ((s32) M2C_FIELD(arg0, u8 *, 0x34) != 6) {
            M2C_FIELD(arg0, u8 *, 0x34) = 6;
            func_00B90E70(M2C_FIELD(arg0, u8 *, 0x34));
            func_0026E840(0x84008401);
        }
    } else {
        func_0026E840(0x84028400);
        func_00B9BC60(arg0);
        var_s1 = 1;
    }
    return var_s1;
}
