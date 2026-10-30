/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern u32 func_00B035D0(void);
M2C_UNK func_0020E310(M2C_UNK, f32 *);              /* extern */
M2C_UNK func_009737A0(s32, f32 *);                  /* extern */
s32 func_00B00EB0(s32);                             /* extern */
extern f32 D_003E7C04;
extern f32 D_003E7C08;

void func_00AF8E60(void) {
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s32 var_s1;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;

    sp54 = D_003E7C08;
    sp58 = D_003E7C04;
    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x5DC) == 0) {
            var_s1 = M2C_FIELD(temp_v0, s32 *, 0x5D4);
        } else if ((func_00226710() & 0xFF) == 0x2C) {
            var_s1 = M2C_FIELD(temp_v0, s32 *, 0x5D4);
        } else if ((func_00226710() & 0xFF) != 0x38) {
            var_s1 = (M2C_FIELD(temp_v0, s32 *, 0x5D4) - 0x12) - ((M2C_FIELD(temp_v0, s32 *, 0x5DC) - 1) * 0x17);
        } else {
            var_s1 = M2C_FIELD(temp_v0, s32 *, 0x5D4);
        }
        var_s2 = 0;
        var_s0 = temp_v0;
        do {
            if ((M2C_FIELD(temp_v0, s32 *, 0x5E4) == 1) && (M2C_FIELD(temp_v0, s32 *, 0x5DC) == M2C_FIELD(temp_v0, u8 *, 0x5C4)) && (var_s2 == var_s1)) {
                func_0020E310(0xA, &sp5C);
                func_009737A0(M2C_FIELD(var_s0, s32 *, 0xC8), &sp54);
            } else if (var_s2 == (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0))) {
                func_0020E310(3, &sp5C);
                func_009737A0(M2C_FIELD(var_s0, s32 *, 0xC8), &sp5C);
            } else if (M2C_FIELD(temp_v0, u8 *, 0x5C4) == 0) {
                if (func_00B00EB0(var_s2) == 0) {
                    goto block_22;
                }
                func_0020E310(2, &sp5C);
                func_009737A0(M2C_FIELD(var_s0, s32 *, 0xC8), &sp5C);
            } else {
block_22:
                func_009737A0(M2C_FIELD(var_s0, s32 *, 0xC8), &sp58);
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 0x17);
    }
}
