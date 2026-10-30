/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00231E90(u8, s32);                         /* extern */
extern s32 D_003E77B0;

void func_00323CC0(void *arg0) {
    s32 temp_a0;
    s32 var_s4;
    s32 var_s5;
    u8 temp_s6;
    void *temp_v0;

    M2C_FIELD(arg0, s8 *, 0x8EC) = 0;
    M2C_FIELD(arg0, s8 *, 0x8EE) = 0;
    M2C_FIELD(arg0, s8 *, 0x8ED) = 0;
    M2C_FIELD(arg0, s8 *, 0x8EF) = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 6) {
        temp_s6 = M2C_FIELD(arg0, u8 *, 0xD);
        var_s4 = 0;
        do {
            var_s5 = 0;
            if ((s32) temp_s6 > 0) {
                temp_v0 = arg0 + var_s4;
                do {
                    temp_a0 = func_00231E90(M2C_FIELD(((var_s4 % 2) + D_003E77B0), u8 *, 0x2C), var_s5 & 0xFF) & 0xFF;
                    switch (temp_a0) {              /* irregular */
                    case 1:
                        M2C_FIELD(temp_v0, u8 *, 0x8EE) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x8EE) + 1);
                        if (M2C_FIELD(temp_v0, u8 *, 0x8EC) != 0) {
                            M2C_FIELD(temp_v0, u8 *, 0x8F0) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x8F0) + 1);
                        } else {
                            M2C_FIELD(temp_v0, u8 *, 0x8F2) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x8F2) + 1);
                        }
                        break;
                    case 2:
                        M2C_FIELD(temp_v0, u8 *, 0x8EC) = 0U;
                        M2C_FIELD(temp_v0, u8 *, 0x8EE) = 0U;
                        M2C_FIELD(temp_v0, u8 *, 0x8F2) = 0U;
                        M2C_FIELD(temp_v0, u8 *, 0x8F0) = 0U;
                        break;
                    case 3:
                        if (M2C_FIELD(temp_v0, u8 *, 0x8EE) != 0) {
                            M2C_FIELD(temp_v0, u8 *, 0x8EC) = 1U;
                        }
                        M2C_FIELD(temp_v0, u8 *, 0x8F0) = 0U;
                        break;
                    }
                    var_s5 += 1;
                } while (var_s5 < (s32) temp_s6);
            }
            var_s4 += 1;
        } while (var_s4 < 2);
    }
}
