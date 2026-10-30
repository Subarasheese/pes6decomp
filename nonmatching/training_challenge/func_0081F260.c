/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00807850(s32, u8 *, u8, M2C_UNK);      /* extern */
M2C_UNK func_0081E590(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0081F070(void *, u8);                  /* extern */
M2C_UNK func_0081F8B0(void *);                      /* extern */
M2C_UNK func_0081FEB0(s32, s32);                    /* extern */

void func_0081F260(void *arg0) {
    s32 var_s1;
    u8 temp_s0;

    func_0081FEB0(M2C_FIELD(arg0, u8 **, 0x6C) + (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), u8 *, 0x40) * 4) + 2, M2C_FIELD(arg0, s32 *, 0x18));
    func_0081F8B0(arg0);
    temp_s0 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), u8 *, 0x40);
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        M2C_FIELD(((temp_s0 * 0x130) + *M2C_FIELD(arg0, s32 **, 0x88)), s32 *, 0x6C) = 0;
    } else {
        func_0081F070(arg0, temp_s0);
    }
    func_00807850(*M2C_FIELD(arg0, s32 **, 0x88) + (temp_s0 * 0x130), M2C_FIELD(arg0, u8 **, 0x6C), temp_s0, 1);
    var_s1 = temp_s0 - 1;
    if (var_s1 < (temp_s0 + 1)) {
        do {
            if ((var_s1 >= 0) && (var_s1 < (*M2C_FIELD(arg0, u8 **, 0x6C) - 1))) {
                func_0081E590(arg0, var_s1, 0);
            }
            var_s1 += 1;
        } while (var_s1 < (temp_s0 + 1));
    }
}
