/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A69C8(s32, s8);
s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
M2C_UNK func_001A69F8(s32);                         /* extern */
extern char D_01201490[];
extern char D_012014C0[];

s32 func_0019C640(s8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_s6;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    s8 *var_s0;
    u8 *var_a0;
    void *temp_s0;

    var_s4 = 0;
    var_s2 = arg1;
    var_s1 = 0;
    var_s0 = arg0;
    var_v0 = -1;
    if (M2C_FIELD(((void *)D_01201490), s32 *, 0xC) == 0) {
        temp_s6 = func_001A4728();
        M2C_FIELD(((void *)D_01201490), s32 *, 0xC) = 1;
        temp_a2 = (s32) ((void *)D_012014C0) | 0x20000000;
        M2C_FIELD(((void *)D_01201490), s32 *, 0x10) = temp_a2;
        var_a0 = temp_a2 + 0xC;
loop_2:
        var_s2 -= 1;
        if (var_s2 != -1) {
            if (*var_s0 == 0xA) {
                *var_a0 = 0xD;
                var_s1 += 1;
                var_a0 += 1;
                if (var_s1 < 0x100) {
                    goto block_6;
                }
            } else {
block_6:
                *var_a0 = (u8) *var_s0;
                var_s1 += 1;
                var_s0 += 1;
                var_a0 += 1;
                var_s4 += 1;
                if (var_s1 < 0x100) {
                    goto loop_2;
                }
            }
        }
        temp_s0 = ((void *)D_01201490) + 0x1490;
        M2C_FIELD(temp_s0, s32 *, 4) = (s32) (var_s1 + 0xC);
        M2C_FIELD(temp_a2, s16 *, 0) = (s16) M2C_FIELD(temp_s0, s32 *, 4);
        if (func_001A69C8(M2C_FIELD(((void *)D_01201490), s32 *, 0x1490), M2C_FIELD(temp_a2, s8 *, 7)) < 0) {
            M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
            var_v0 = -1;
            if (temp_s6 != 0) {
                func_001A4778();
                return -1;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_v0;
        }
        if (M2C_FIELD(temp_s0, s32 *, 0xC) != 0) {
            do {
                func_001A69F8(M2C_FIELD(((void *)D_01201490), s32 *, 0x1490));
            } while (M2C_FIELD(temp_s0, s32 *, 0xC) != 0);
        }
        var_v0 = var_s4;
        if (temp_s6 != 0) {
            func_001A4778();
            var_v0 = var_s4;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
