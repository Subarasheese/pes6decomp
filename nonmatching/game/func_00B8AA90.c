/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
s32 func_009B3070(u16, u16);                        /* extern */
void *func_00B2A420(u8);                            /* extern */
void *func_00C375E0(u8);                            /* extern */
s32 func_00C37760(u8, s32);                         /* extern */
extern char D_00CBCAFE[];

s32 func_00B8AA90(void *arg0) {
    s32 temp_a0;
    u8 temp_s1;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_v0;

    temp_v0 = func_00B2A420(func_00BF6270());
    temp_s1 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), u8 *, 0x54);
    if (temp_s1 == 0) {
        return 0;
    }
    temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12);
    if ((temp_v1_2 != 3) && (temp_v1_2 != 4)) {
        return 0;
    }
    if ((func_00C37760(temp_s1, M2C_FIELD(func_00C375E0(temp_s1), u8 *, 8) - 1) & 0xFF) != 0xFF) {
        return 0;
    }
    temp_a0 = M2C_FIELD(temp_v0, s32 *, 0);
    temp_v1 = *M2C_FIELD(arg0, u8 **, 0);
    if ((u32) M2C_FIELD(((temp_v1 * 4) + temp_a0), u32 *, 0x158) >= 0x400000U) {
        return (func_009B3070((*(u16 *)D_00CBCAFE), M2C_FIELD(((temp_v1 * 2) + temp_a0), u16 *, 0x128)) & 0xFFFF) >= 0x5000;
    }
    return 0;
}
