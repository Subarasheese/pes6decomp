/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
extern void func_0094D240(void);
extern s32 func_002293F0(void);
M2C_UNK func_0094B120();                            /* extern */
s32 func_0097F470(u8, u8);                          /* extern */
extern void *D_003E77B0;

void func_0097D730(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    u8 temp_v1;
    void *temp_v0;

    temp_s0 = func_002293F0();
    temp_v0 = func_00229380();
    if ((temp_v0 != NULL) && (temp_s0 != 0)) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 2);
        temp_s0_2 = func_0097F470(M2C_FIELD(temp_v0, u8 *, 0), M2C_FIELD(temp_s0, u8 *, 0x1364)) & 0xFF;
        if ((s32) temp_v1 < temp_s0_2) {
            M2C_FIELD(temp_v0, u8 *, 2) = (u8) (temp_v1 + 1);
            func_0094D240();
            func_0094B120();
            if ((temp_s0_2 - 1) == M2C_FIELD(temp_v0, u8 *, 2)) {
                M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x4000);
            }
        }
    }
}
