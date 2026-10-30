/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B31770(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00B30B00(u8);                          /* extern */
M2C_UNK func_00B30C50(u8);                          /* extern */
M2C_UNK func_00B30CD0();                            /* extern */

s32 func_00B31340(void) {
    s16 temp_a2;
    s16 temp_s1;
    s32 temp_v1;
    u32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = func_00B31770();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0xDE) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0xEC);
            switch (temp_v1) {                      /* irregular */
            case 0:
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0xD8);
                if (temp_v0_2 != 0) {
                    M2C_FIELD(temp_v0, u8 *, 0xD8) = (u8) (temp_v0_2 - 1);
                    func_00B30C50(M2C_FIELD(temp_v0, u8 *, 0xD8));
                    func_0026E840(0x8400F802);
                } else {
                    temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0xE0);
                    if ((s32) temp_v0_3 > 0) {
                        M2C_FIELD(temp_v0, u8 *, 0xE0) = (u8) (temp_v0_3 - 1);
                        M2C_FIELD(temp_v0, s16 *, 0xDE) = (s16) -M2C_FIELD(temp_v0, s16 *, 0xDA);
                        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0xE4);
                        M2C_FIELD(temp_v0, s16 *, 0xDC) = temp_a2;
                        temp_s1 = M2C_FIELD(temp_v0, s16 *, 0xDE);
                        func_00949340(temp_v0 + 0xDE, 0, temp_a2);
                        M2C_FIELD(temp_v0, s16 *, 0xE2) = (s16) (M2C_FIELD(temp_v0, s16 *, 0xDE) - ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
                        func_00B30CD0();
                        func_0026E840(0x8400F802);
                    }
                }
                func_00B30B00(M2C_FIELD(temp_v0, u8 *, 0xD8));
                break;
            case 1:
                M2C_FIELD(temp_v0, s32 *, 0xEC) = 0;
                M2C_FIELD(temp_v0, u8 *, 0xD8) = 0xEU;
                func_00B30C50(M2C_FIELD(temp_v0, u8 *, 0xD8));
                func_00B30B00(M2C_FIELD(temp_v0, u8 *, 0xD8));
                func_0026E840(0x8400F802);
                break;
            }
        }
    }
    return 0;
}
