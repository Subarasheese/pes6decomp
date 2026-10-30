/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00847FA0(void);
extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_00843D30(u32, s32, void *, M2C_UNK);   /* extern */
void *func_00847280(s16);                           /* extern */
void *func_008472C0(s32, u32);                      /* extern */

s32 func_0085DFF0(M2C_UNK arg0, void *arg1, s32 arg2) {
    u32 sp48;
    s32 sp4C;
    s16 temp_s1;
    s32 var_a2;
    u32 temp_lo;
    u32 temp_v0;
    u8 temp_a0;
    void *temp_v0_2;
    void *var_v0;

    temp_s1 = M2C_FIELD(arg1, s16 *, 2);
    if (temp_s1 == 0) {
        temp_v0 = func_00847FA0();
        if (temp_v0 != -1U) {
            M2C_FIELD(arg1, s16 *, 0) = 2;
            func_00843D30(temp_v0, arg2, arg1, 0xC);
            goto block_10;
        }
        return -1;
    }
    temp_v0_2 = func_00847280(temp_s1);
    if (temp_v0_2 != NULL) {
        func_00110E58(func_001105C8(), &sp4C, &sp48);
        temp_lo = sp48 / 1000U;
        M2C_FIELD(temp_v0_2, s32 *, 0x48) = (s32) (temp_lo + (sp4C * 0x3E8));
        if (temp_s1 == 1) {
            var_v0 = func_008472C0(sp4C, temp_lo);
            var_a2 = 0;
            do {
                temp_a0 = M2C_FIELD((arg1 + var_a2), u8 *, 4);
                var_a2 += 1;
                M2C_FIELD(var_v0, s8 *, 0x50) = (s8) (temp_a0 & 0x7F);
                M2C_FIELD(var_v0, s8 *, 0x52) = (s8) (((s32) temp_a0 >> 7) & 1);
                var_v0 += 0x88;
            } while (var_a2 < 8);
        }
    }
block_10:
    return 0;
}
