/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0096BF00(void *);                          /* extern */
s64 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00BAB6B0();                                /* extern */
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
extern char D_00591E4D[];
extern char D_00591F24[];

s32 func_00BA1DF0(void *arg0, s32 arg1) {
    f32 temp_f20;
    f32 temp_f21;
    s32 var_s0;

    var_s0 = arg1 & 0xFFFF;
    if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E4D)) {
        if ((*(u8 *)D_00591F24) != 1) {
            goto block_5;
        }
        if (func_00BAB6B0() != 0) {
            return arg1;
        }
block_5:
        temp_f20 = M2C_FIELD(arg0, f32 *, 0x6C);
        temp_f21 = M2C_FIELD(arg0, f32 *, 0x70);
        if ((u32) ((s64) (func_009B33A0(arg0, (s32) temp_f20, (s32) temp_f21) << 0x20) >> 0x20) >= 0x64000U) {
            M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + (f32) func_00BBB990(arg1, 0x280));
            M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0xE8) + (f32) func_00BBB9C0(arg1, 0x280));
        }
        if (func_0096BF00(arg0) != 0) {
            var_s0 = func_009B3480(arg0, M2C_FIELD(arg0, f32 *, 0x6C), M2C_FIELD(arg0, f32 *, 0x70)) & 0xFFFF;
        }
        M2C_FIELD(arg0, f32 *, 0x6C) = temp_f20;
        M2C_FIELD(arg0, f32 *, 0x70) = temp_f21;
        return var_s0;
    }
    return arg1;
}
