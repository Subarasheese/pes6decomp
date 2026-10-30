/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B35E10(void *, void *, void *);      /* extern */
M2C_UNK func_00B9E5D0(void *);                      /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
s32 func_00C37850(u8);                              /* extern */
M2C_UNK func_00C37900(u8);                          /* extern */

void func_00B8AB80(void *arg0) {
    u8 temp_a0;
    u8 temp_s1;
    void *temp_v0;

    func_00B2ACF0();
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54);
        if ((temp_a0 != 0) && (temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0), (temp_s1 == func_00C37850(temp_a0)))) {
            func_00C37900(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
            func_00BD4040(arg0, 2);
            func_00B9E5D0(arg0);
        } else {
            temp_v0 = M2C_FIELD(arg0, void **, 0);
            func_00B35E10(arg0, temp_v0 + 0x6C, temp_v0 + 0x70);
            func_00BD4040(arg0, 2);
            func_00BD3BA0(arg0, 5, 1);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x80;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x51) = 0xFF;
        }
    }
}
