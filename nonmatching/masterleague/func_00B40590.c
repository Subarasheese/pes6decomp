/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B447A0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00949130(u8, M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00B3E210(M2C_UNK);                     /* extern */
M2C_UNK func_00B3EA20(s32, u8);                     /* extern */

s32 func_00B40590(void) {
    s32 temp_v1;
    u32 temp_v0;
    u8 temp_a1;
    u8 temp_a1_2;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x6C0) != 1) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x6B4);
            switch (temp_v1) {                      /* irregular */
            case 0:
                temp_a1 = func_00949130(M2C_FIELD(temp_v0, u8 *, 0x610), 3, 8, 8) & 0xFF;
                if (temp_a1 != M2C_FIELD(temp_v0, u8 *, 0x610)) {
                    M2C_FIELD(temp_v0, u8 *, 0x610) = temp_a1;
                    func_00B3EA20(M2C_FIELD(temp_v0, s32 *, 0x6B4), temp_a1);
                    func_0026E840(0x8400F803);
                }
                break;
            case 6:
                if (M2C_FIELD(temp_v0, s32 *, 0x614) != 1) {
                    temp_a1_2 = func_00949130(M2C_FIELD(temp_v0, u8 *, 0x610), 3, 8, 8) & 0xFF;
                    if (temp_a1_2 != M2C_FIELD(temp_v0, u8 *, 0x610)) {
                        M2C_FIELD(temp_v0, u8 *, 0x610) = temp_a1_2;
                        func_00B3EA20(M2C_FIELD(temp_v0, s32 *, 0x6B4), temp_a1_2);
                        func_0026E840(0x8400F803);
                    }
                    if (M2C_FIELD(temp_v0, s32 *, 0x614) == 1) {
                        if (M2C_FIELD(temp_v0, u8 *, 0x61A) != M2C_FIELD(temp_v0, u8 *, 0x610)) {
                            func_00B3E210(0);
                        } else {
                            func_00B3E210(1);
                        }
                    }
                } else {
                    func_0026E840(0x8C008005);
                }
                break;
            }
        }
    }
    return 0;
}
