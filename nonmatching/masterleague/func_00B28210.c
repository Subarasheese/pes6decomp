/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B28900(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s64);           /* extern */
M2C_UNK func_00B278C0(u8);                          /* extern */
M2C_UNK func_00B27AC0(u8);                          /* extern */
M2C_UNK func_00B27B40();                            /* extern */

s32 func_00B28210(void) {
    s16 temp_s1;
    s16 temp_v0_4;
    s32 temp_v1;
    u32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = func_00B28900();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x192) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x214);
            switch (temp_v1) {                      /* irregular */
            case 1:
                break;
            case 0:
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x18C);
                if ((s32) temp_v0_2 >= 0xE) {
                    temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0x194);
                    if ((s32) temp_v0_3 >= 0xF) {
                        M2C_FIELD(temp_v0, s32 *, 0x214) = 1;
                        M2C_FIELD(temp_v0, u8 *, 0x18C) = 0U;
                        func_00B27AC0(0U);
                        func_0026E840(0x8400F802);
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 0x194) = (u8) (temp_v0_3 + 1);
                        M2C_FIELD(temp_v0, s16 *, 0x192) = (s16) M2C_FIELD(temp_v0, s16 *, 0x18E);
                        temp_v0_4 = -M2C_FIELD(temp_v0, s16 *, 0x198);
                        M2C_FIELD(temp_v0, s16 *, 0x190) = temp_v0_4;
                        temp_s1 = M2C_FIELD(temp_v0, s16 *, 0x192);
                        func_00949340(temp_v0 + 0x192, 0, (s64) ((s64) temp_v0_4 << 0x30) >> 0x30);
                        M2C_FIELD(temp_v0, s16 *, 0x196) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x192) - ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
                        func_00B27B40();
                        func_0026E840(0x8400F802);
                    }
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0x18C) = (u8) (temp_v0_2 + 1);
                    func_00B27AC0(M2C_FIELD(temp_v0, u8 *, 0x18C));
                    func_0026E840(0x8400F802);
                }
                break;
            }
            func_00B278C0(M2C_FIELD(temp_v0, u8 *, 0x18C));
        }
    }
    return 0;
}
