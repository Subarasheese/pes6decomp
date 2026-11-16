/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00292F00(u8, s32, s32);
M2C_UNK func_00C17D50(s32);
extern u8 D_00591A90[];
extern u8 D_005A2020[];

void func_00C17080(u8 *arg0, s32 arg1) {
    s32 i;
    s32 a1;
    s32 a2;
    u8 *s2;
    u8 *s1;

    func_00C17D50(arg1);
    a2 = (arg1 & 0xFF) * 0x8B;
    a1 = (s32)D_00591A90;
    s2 = D_00591A90 + a2;
    s1 = D_005A2020 + (arg1 & 0xFF) * 0x168;
    for (i = 0; i < 0xB; i++) {
        a2 = (func_00292F00(s1[0x1C + s1[1] * 0x52 + i], a1, a2) & 0xFF) << 5;
        a1 = a2 | (s2[7 + i] & 0x1F);
        arg0[i] = a1;
    }
}
