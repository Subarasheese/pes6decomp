/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
s32 func_00225820();                                /* extern */
s32 func_00226E70();                                /* extern */
s32 func_00230410();                                /* extern */
s32 func_002307F0();                                /* extern */
s32 func_00230EF0();                                /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_0095FE30();                            /* extern */
M2C_UNK func_00978090(u8, M2C_UNK);                 /* extern */
M2C_UNK func_00978220();                            /* extern */
s32 func_00B02920(s32);                             /* extern */
extern void *D_003E77B0;

s32 func_0096B690(void) {
    s32 temp_v1;
    s32 var_s0;

    func_00978220();
    func_00978090(M2C_FIELD(D_003E77B0, u8 *, 0x2C), 0);
    func_00978090(M2C_FIELD(D_003E77B0, u8 *, 0x2D), 1);
    if (!(func_002307F0() & 0xFF)) {
        temp_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20);
        if (((u64) ((s64) temp_v1 << 0x20) >> 0x20) & 0x800) {
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (temp_v1 & ~0x1000);
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x10);
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x100);
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x200000);
        } else {
            func_0095FE30();
        }
    }
    var_s0 = 0x41;
    if ((func_00230410() == 1) && (func_00210DF0() == 2) && (func_00226E70() == 1) && (func_00230EF0() == 1) && ((func_00B02920(func_00225820() & 0xFF) & 0xFF) > 0)) {
        var_s0 = 0x34;
    }
    func_0094C790(0);
    return var_s0;
}
