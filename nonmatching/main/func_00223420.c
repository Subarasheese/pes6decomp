/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00223520(u16 *, u8 *);
extern s32 func_00223B40(void);
extern s32 func_00223B50(void);
extern s32 func_00237530(u16);

typedef struct { u16 a; u8 pad; u8 b; } Sp2C;

s32 func_00223420(u16 arg0, u8 arg1) {
    Sp2C sp;
    s32 temp_v0;
    s32 var_s0;

    sp.a = arg0;
    var_s0 = 0;
    sp.b = arg1;
    temp_v0 = func_00223520(&sp.a, &sp.b);
    if (temp_v0 == 3) {
        return var_s0;
    }
    if (temp_v0 == 2) {
        if ((u32) (sp.a - 0x126) < 2U) {
            temp_v0 = func_00237530(sp.a);
            if (temp_v0 != 0) {
                var_s0 = temp_v0 + (sp.b * 2) + 0x1134;
            }
        }
        return var_s0;
    }
    if (temp_v0 == 1) {
        var_s0 = func_00223B40();
        if (var_s0 != 0) {
            var_s0 += (sp.b + (sp.a << 5)) * 2;
        }
        return var_s0;
    }
    var_s0 = func_00223B50();
    if (var_s0 != 0) {
        var_s0 += (sp.b + (sp.a * 0x17)) * 2;
    }
    return var_s0;
}
