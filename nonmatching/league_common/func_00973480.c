/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EE790(s32, s16 *);                  /* extern */
s32 func_00292D80(s32);                             /* extern */
extern char D_009C03A8[];
extern char D_009C03C0[];

void func_00973480(void *arg0, s32 arg1) {
    s16 sp20;
    s16 sp22;
    s16 sp24;
    s16 sp26;
    s16 sp28;
    s16 sp2A;
    s16 sp2C;
    s16 sp2E;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0_2;
    s64 temp_v1_2;
    u32 temp_a1;
    u8 *var_v0;

    temp_v1 = arg1 & 0xFF;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v1 >= 0x17) {
        var_v0 = ((void *)D_009C03C0) + (func_00292D80((temp_v1 - 0x17) & 0xFF) & 0xFF);
    } else {
        var_v0 = ((void *)D_009C03A8) + temp_v1;
    }
    temp_a1 = *var_v0 & 0xFF;
    var_v0_2 = temp_a1 & 7;
    sp20 = (temp_a1 >> 3) * 0x1D;
    if (((s32) temp_a1 < 0) && (var_v0_2 != 0)) {
        var_v0_2 -= 8;
    }
    temp_v1_2 = var_v0_2 * 0x10;
    sp22 = (s16) temp_v1_2;
    sp26 = (s16) temp_v1_2;
    temp_v0 = ((s64) (temp_v1_2 << 0x30) >> 0x30) + 0xF;
    sp2A = temp_v0;
    sp2E = temp_v0;
    sp28 = sp20;
    temp_v0_2 = sp20 + 0x1C;
    sp24 = temp_v0_2;
    sp2C = temp_v0_2;
    func_001EE790(temp_s0, &sp20);
}
