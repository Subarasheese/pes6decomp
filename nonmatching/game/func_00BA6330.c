/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
extern s8 func_00BA48F0(void);
void **func_00B2A420(u8);                           /* extern */
s32 func_00BBB8C0(M2C_UNK, u8, u8);                 /* extern */

void func_00BA6330(void *arg0) {
    s32 var_s1;
    s32 var_s1_2;
    u8 temp_a1_2;
    u8 temp_a2;
    void **temp_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_a3;
    void *temp_v1;

    temp_v0 = func_00B2A420(func_00BF6270());
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4F) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x50) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x40) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4D) = 0;
    temp_a1 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_a1, u8 *, 0x13) != M2C_FIELD(*temp_v0, u8 *, 0x13)) {
        var_s1 = 0;
        do {
            temp_a0 = M2C_FIELD(arg0, void **, 0);
            temp_a2 = M2C_FIELD(temp_a0, u8 *, 0);
            temp_a1_2 = M2C_FIELD(temp_a0, u8 *, 0x13);
            if (temp_a2 != M2C_FIELD((*temp_v0 + (temp_a1_2 * 0xB) + var_s1), u8 *, 0x1B4)) {

            } else if (func_00BBB8C0(2, temp_a1_2, temp_a2) != 0) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18) = 0xAU;
            }
            var_s1 += 1;
        } while (var_s1 < 4);
    } else if (arg0 == temp_v0) {
        M2C_FIELD(temp_a1, u16 *, 0x18) = 1U;
    } else {
        var_s1_2 = 0;
        do {
            temp_a3 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a3, u8 *, 0) == M2C_FIELD((*temp_v0 + (M2C_FIELD(temp_a3, u8 *, 0x13) * 0xB) + var_s1_2), u8 *, 0x1B4)) {
                M2C_FIELD(temp_a3, u16 *, 0x18) = 4U;
                if (var_s1_2 == 0) {
                    if (func_00BA48F0() != 4) {

                    } else {
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18) = 7U;
                    }
                }
            }
            var_s1_2 += 1;
        } while (var_s1_2 < 4);
    }
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_v1, u16 *, 0x18) == 0) {
        M2C_FIELD(temp_v1, u16 *, 0x18) = 0xDU;
    }
}
