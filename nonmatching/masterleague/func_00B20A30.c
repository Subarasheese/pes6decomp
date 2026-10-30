/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00229DF0(void);
s32 func_0099B6E0(M2C_UNK, u8);                     /* extern */
M2C_UNK func_00AF3840(u8);                          /* extern */
M2C_UNK func_00B2E150(u8, u8);                      /* extern */
extern void *D_003E7B0C;

s32 func_00B20A30(void) {
    u8 *temp_s1;
    u8 temp_a1;
    u8 temp_s0;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        if (func_0099B6E0(4, M2C_FIELD(temp_v0, u8 *, 3)) != 1) {
            M2C_FIELD(D_003E7B0C, u8 *, 0x37) = 0U;
            return 1;
        }
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 3);
        if ((temp_v1 == 0xF) || (temp_v1 == 0x24)) {
            func_00AF3840(M2C_FIELD(D_003E7B0C, u8 *, 0x37));
        }
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 3);
        if (temp_a1 != 0x2B) {
            func_00B2E150(M2C_FIELD(D_003E7B0C, u8 *, 0x37), temp_a1);
        }
        M2C_FIELD(D_003E7B0C, u8 *, 0x37) = (u8) (M2C_FIELD(D_003E7B0C, u8 *, 0x37) + 1);
        temp_s0 = M2C_FIELD(D_003E7B0C, u8 *, 0x37);
        temp_s1 = D_003E7B0C + 0x37;
        if (temp_s0 == (func_00225820() & 0xFF)) {
            *temp_s1 += 1;
        }
        if ((s32) M2C_FIELD(D_003E7B0C, u8 *, 0x37) >= 0x48) {
            M2C_FIELD(D_003E7B0C, u8 *, 0x37) = 0U;
            return 1;
        }
        return 0;
    }
    return 1;
}
