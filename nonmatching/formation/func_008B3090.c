/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B3FD0(void *);                      /* extern */
s32 func_008BC3B0();                                /* extern */
M2C_UNK func_008BDAB0(void *, M2C_UNK, u8, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008BE7D0(s32);                         /* extern */
M2C_UNK func_008BE810(void *, s32);                 /* extern */
s32 func_008BF0E0();                                /* extern */
s32 func_008C92D0(u16);                             /* extern */
s32 func_008C9AA0(s32);                             /* extern */
s32 func_008CB0C0(void *);                          /* extern */
M2C_UNK func_008CB190(s32, s32);                    /* extern */
M2C_UNK func_008DCA20(void *, s32, s32, M2C_UNK);   /* extern */
M2C_UNK func_008E2AB0(void *, s32);                 /* extern */
M2C_UNK func_008E6650(s32, s32);                    /* extern */

void func_008B3090(void *arg0, s32 arg1) {
    s32 temp_s1;
    u8 temp_s0_2;
    u8 temp_s0_3;
    void *temp_s0;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_v1;

    if ((func_008BF0E0() != 0) && ((func_008BC3B0() == 0) || (M2C_FIELD(arg0, u8 *, 0) == 0))) {
        func_008BDAB0(arg0 + 0x208, 0, M2C_FIELD(arg0, u8 *, 0), arg1, 1, 0);
        if ((func_008BC3B0() != 0) && (M2C_FIELD(arg0, u8 *, 0) == 0)) {
            temp_v1 = M2C_FIELD(arg0, void **, 0x3220);
            if (temp_v1 != NULL) {
                func_008BE810(arg0 + 0x208, temp_v1 + 0x208);
                func_008BE7D0(M2C_FIELD(arg0, void **, 0x3220) + 0x208);
                temp_s0 = M2C_FIELD(arg0, void **, 0x3220);
                temp_s1 = temp_s0 + 0x208;
                func_008CB190(temp_s0 + 0xB0C, temp_s1);
                func_008E6650(temp_s0 + 0x129C, temp_s1);
                temp_s1_2 = M2C_FIELD(arg0, void **, 0x3220);
                temp_s0_2 = M2C_FIELD(((func_008CB0C0(temp_s1_2 + 0xB0C) & 0xFF) + temp_s1_2), u8 *, 0x96E);
                if (M2C_FIELD((temp_s0_2 + temp_s1_2), u8 *, 0x39B) == 0) {
                    if (func_008C9AA0(temp_s1_2 + 0xB0C) != 0) {
                        func_008E2AB0(temp_s1_2 + 0x129C, M2C_FIELD(temp_s1_2, s32 *, 0x4FC) + (temp_s0_2 * 0x2C));
                    } else {
                        goto block_10;
                    }
                } else {
block_10:
                    func_008E2AB0(temp_s1_2 + 0x129C, 0);
                }
                func_008B3FD0(M2C_FIELD(arg0, void **, 0x3220));
                temp_s1_3 = M2C_FIELD(arg0, void **, 0x3220);
                temp_s0_3 = M2C_FIELD(((func_008CB0C0(temp_s1_3 + 0xB0C) & 0xFF) + temp_s1_3), u8 *, 0x96E);
                if (M2C_FIELD((temp_s0_3 + temp_s1_3), u8 *, 0x39B) == 0) {
                    func_008DCA20(temp_s1_3 + 0x2168, M2C_FIELD(temp_s1_3, s32 *, 0x4FC) + (temp_s0_3 * 0x2C), func_008C92D0(M2C_FIELD(((temp_s0_3 * 2) + temp_s1_3), u16 *, 0x500)), 0);
                    return;
                }
                func_008DCA20(temp_s1_3 + 0x2168, 0, 0, 0);
            }
        }
    } else {
        func_008BDAB0(arg0 + 0x208, 0, M2C_FIELD(arg0, u8 *, 0), arg1, 0, 0);
    }
}
