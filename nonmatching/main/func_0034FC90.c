/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0030EA70(s32, void *, s32);
extern void func_0030EE60(f32 *);
extern s32 func_00338530(s32);
extern char D_003B77D0[];
extern u8 D_003E9F18;

s32 func_0034FC90(void *arg0) {
    f32 sp5C;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_v1;
    char *temp_s0;
    void *temp_s1;

    if (func_00338530(0x3D) == 0) {
        temp_a2 = M2C_FIELD(arg0, s32 *, 0x2C);
        temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
        temp_s2 = M2C_FIELD(arg0, s32 *, 0x50);
        temp_v1 = temp_a2 + 1;
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_v1;
        temp_s0 = D_003B77D0 + temp_a2 * 0xC;
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_v1 % (s32) M2C_FIELD(temp_s1, s32 *, 4);
        func_0030EE60(&sp5C);
        if ((M2C_FIELD(temp_s0, u8 *, 9) != 0) && (M2C_FIELD(temp_s0, s32 (**)(s32, void *, s32, f32), 4)(temp_s2, D_003B77D0, temp_a2 * 0xC, sp5C) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x30) = func_0030EA70(temp_s2, D_003B77D0, temp_a2 * 0xC);
            if (M2C_FIELD(temp_s0, s32 (**)(void *, void *, s32), 0)(arg0, D_003B77D0, temp_a2 * 0xC) != 0) {
                if (M2C_FIELD(temp_s0, u8 *, 8) == 0) {
                    M2C_FIELD(temp_s0, u8 *, 9) = 0U;
                }
                M2C_FIELD(temp_s1, s32 *, 0x18) = 0;
            }
        }
        if ((D_003E9F18 == 0) && !((sp5C < 0.0f ? -sp5C : sp5C) <= 5386.0f)) {
            D_003E9F18 = 1;
            return 0;
        }
        return 1;
    }
    return 0;
}
