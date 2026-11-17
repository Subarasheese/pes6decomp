/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

u8 *func_0021F440(s32, s32, s32);
s32 func_0021F520(s32, s32, s32);
s32 func_0021FA50(s32, s32, s32, s32);
M2C_UNK func_002659F0(s32, s32, u8 *);

void func_00209B10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp[8];
    s32 var_s0;
    s32 var_s1;
    u8 *temp_v0;
    u8 *p;
    s32 a1;
    s32 a2;

    a2 = arg2;
    a1 = arg1;
    if ((arg0 < 0x40) || (arg0 >= 0xCC)) {
        if ((u32) (arg0 - 0x126) >= 2U) {
            var_s0 = 0;
            sp[0] = 0xFF; sp[1] = 0xFF; sp[2] = 0xFF; sp[3] = 0xFF;
            sp[4] = 0xFF; sp[5] = 0xFF; sp[6] = 0xFF; sp[7] = 0xFF;
            goto done;
        }
    }
    var_s1 = 0;
    p = sp;
    do {
        temp_v0 = func_0021F440(arg0 & 0xFFFF, var_s1, a2);
        a2 = temp_v0[0];
        var_s1 += 1;
        a1 = temp_v0[1];
        p[0] = a2;
        p[1] = a1;
        p[2] = temp_v0[2];
        p[3] = temp_v0[3];
        p += 4;
    } while (var_s1 < 2);
    var_s0 = func_0021F520(arg0 & 0xFFFF, a1, a2) & 0xFF;
done:
    func_002659F0(func_0021FA50(arg0 & 0xFFFF, a1, a2, arg3), var_s0, sp);
}
