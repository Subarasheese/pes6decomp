/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_00150420(s32, s32, s32, M2C_UNK, M2C_UNK, s16 *); /* extern */
M2C_UNK func_00151310(s32, s32, s16, s16);          /* extern */
extern char D_003AF1E0[];

void func_002D0640(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 sp68;
    s16 sp6A;
    s16 sp6C;
    s16 sp6E;
    s16 *var_v1;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_v1;
    s32 temp_lo1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v0;
    void *temp_a2;

    var_v0 = 8;
    var_v1 = &sp68;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_s1 = func_001454C0(arg1);
    temp_s0 = func_001454C0(arg0);
    if (temp_s1 != 0) {
        if (temp_s0 == 0) {
            return;
        }
        temp_a2 = ((void *)D_003AF1E0) + (arg2 * 0x10);
        temp_v0 = M2C_FIELD(temp_a2, s32 *, 0);
        temp_a3 = M2C_FIELD(temp_a2, s16 *, 0xA);
        temp_v1 = M2C_FIELD(temp_a2, s16 *, 0xC);
        sp6C = temp_a3;
        sp6E = temp_v1;
        temp_lo1 = arg3 / temp_v0;
        temp_a2_2 = temp_a3 * (arg3 % temp_v0);
        sp68 = temp_a2_2;
        sp6A = M2C_FIELD(temp_a2, s16 *, 8) + (temp_v1 * (temp_lo1 % (s32) M2C_FIELD(temp_a2, s32 *, 4)));
        if ((arg4 > 0) && (arg4 < 5)) {
            func_00150420(temp_s0, temp_s1, arg4, 0, 0, &sp68);
            return;
        }
        func_00151310(temp_s0, temp_lo1, temp_a2_2, temp_a3);
        func_00150420(temp_s0, temp_s1, 0, 0, 0, &sp68);
    }
}
