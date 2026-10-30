/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);
u64 func_001105C8();                                /* extern */
s16 *func_008472D0(s32, s32, u32);                  /* extern */
extern char D_0088A900[];
extern char D_0088A90C[];

void func_00802920(void) {
    u32 sp48;
    s32 sp4C;
    s32 temp_a0;
    s32 temp_s2;
    s32 var_v1;
    u32 temp_lo;
    u32 temp_s1;
    u32 temp_v1;

    func_00110E58(func_001105C8(), &sp4C, &sp48);
    temp_lo = sp48 / 1000U;
    temp_a0 = sp4C * 0x3E8;
    temp_s2 = temp_lo + temp_a0;
    temp_s1 = temp_s2 - (*(s32 *)D_0088A90C);
    if (temp_s1 >= 0x3E8U) {
        func_00853B50(1, 0xB, 1, 0, *func_008472D0(temp_a0, sp4C, temp_lo), 2, 0, 0);
        temp_v1 = temp_s1 - 0x3E7;
        if (temp_v1 < 0x3E8U) {
            var_v1 = temp_s2 - temp_v1;
        } else {
            var_v1 = temp_s2;
        }
        M2C_FIELD(((void *)D_0088A900), s32 *, 0xC) = var_v1;
    }
    M2C_FIELD(((void *)D_0088A900), s32 *, 8) = temp_s2;
    M2C_FIELD(((void *)D_0088A900), s32 *, 0x14) = (s32) (M2C_FIELD(((void *)D_0088A900), s32 *, 0x14) + 1);
}
