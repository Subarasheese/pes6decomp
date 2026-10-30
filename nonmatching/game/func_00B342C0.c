/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
void **func_00B2A420(u8);                           /* extern */
extern char Pes6MatchSquads[];

u8 func_00B342C0(s32 *arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s2;
    u16 temp_a0_2;
    u8 temp_a1;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 var_s1;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a1_2;
    void *temp_v0_2;
    void *temp_v1;

    var_s1 = 0xFF;
    var_s2 = 0;
    temp_s0 = arg1 * 0xB;
    do {
        if ((M2C_FIELD((temp_s0 + *arg0 + var_s2), u8 *, 0x1B4) != 0xFF) && (var_s1 == 0xFF)) {
            temp_v0 = func_00BF6280();
            switch (temp_v0) {                      /* irregular */
            case 2:
                temp_v0_2 = *func_00B2A420(M2C_FIELD((temp_s0 + *arg0 + var_s2), u8 *, 0x1B4));
                if (M2C_FIELD(temp_v0_2, u8 *, 0x10) != 0) {
                    temp_a0 = (M2C_FIELD(temp_v0_2, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0_2, u8 *, 0x12) * 0x6900));
                    if ((M2C_FIELD(temp_a0, u8 *, 0xD4) != 0) && (M2C_FIELD(temp_a0, u8 *, 0xF8) == 0)) {
                        temp_a1 = M2C_FIELD(temp_v0_2, u8 *, 0x16);
                        if ((temp_a1 != 0x32) && (temp_a1 != 0x48) && (temp_a1 != 0x46) && (temp_a1 != 0x4F)) {
                            var_s1 = M2C_FIELD(temp_v0_2, u8 *, 0);
                        }
                        if (temp_a1 == 0x48) {
                            if (M2C_FIELD(temp_v0_2, u16 *, 0x18) == 0xC) {
                                var_s1 = M2C_FIELD(temp_v0_2, u8 *, 0);
                            }
                        }
                        if ((temp_a1 == 0x48) && (M2C_FIELD(temp_v0_2, u16 *, 0x18) == 0xD)) {
                            var_s1 = M2C_FIELD(temp_v0_2, u8 *, 0);
                        }
                        if ((temp_a1 == 0x48) && (M2C_FIELD(temp_v0_2, u16 *, 0x18) == 0xE)) {
                            var_s1 = M2C_FIELD(temp_v0_2, u8 *, 0);
                        }
                    }
                }
                break;
            case 11:
                temp_v1 = *func_00B2A420(M2C_FIELD((temp_s0 + *arg0 + var_s2), u8 *, 0x1B4));
                temp_v0_3 = M2C_FIELD(temp_v1, u8 *, 0x16);
                if (temp_v0_3 == 0x4E) {
                    goto block_24;
                }
                temp_a1_2 = (M2C_FIELD(temp_v1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v1, u8 *, 0x12) * 0x6900));
                if ((M2C_FIELD(temp_a1_2, u8 *, 0xD4) != 0) && (M2C_FIELD(temp_a1_2, u8 *, 0xF8) == 0)) {
                    var_s1 = M2C_FIELD(temp_v1, u8 *, 0);
                } else {
block_24:
                    if (temp_v0_3 == 0x4E) {
                        temp_a0_2 = M2C_FIELD(temp_v1, u16 *, 0x18);
                        if ((temp_a0_2 != 0) && (temp_a0_2 != 1) && (temp_a0_2 != 3)) {
                            temp_a0_3 = (M2C_FIELD(temp_v1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v1, u8 *, 0x12) * 0x6900));
                            if ((M2C_FIELD(temp_a0_3, u8 *, 0xD4) != 0) && (M2C_FIELD(temp_a0_3, u8 *, 0xF8) == 0)) {
                                var_s1 = M2C_FIELD(temp_v1, u8 *, 0);
                            }
                        }
                    }
                }
                break;
            default:
                var_s1 = M2C_FIELD((temp_s0 + *arg0 + var_s2), u8 *, 0x1B4);
                break;
            }
        }
        var_s2 += 1;
    } while (var_s2 < 0xB);
    if (var_s1 == 0xFF) {
        if (arg1 != 0) {
            var_s1 = 0xC;
        } else {
            var_s1 = 1;
        }
    }
    return var_s1;
}
