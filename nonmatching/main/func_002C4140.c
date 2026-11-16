/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *func_00C13280(s32);
extern s32 func_00C132C0(s32);
extern s32 func_00C136E0(s32, s32);
extern s32 func_00C13740(s32);
extern s32 func_00C13840(void);

void func_002C4140(u8 *arg0, s32 arg1) {
    s32 var_s1;
    s32 var_v1;
    u8 temp_a0;
    u8 temp_v1;
    u8 var_v0;
    u8 *temp_s0;

    temp_s0 = func_00C13280(arg1);
    var_s1 = arg1;
    if ((func_00C132C0(arg1) & 0xFF) == 1) {
    } else {
        var_s1 = func_00C136E0(arg1, 1);
        if (var_s1 == -1) {
            var_s1 = func_00C13840();
            if ((func_00C132C0(var_s1) & 0xFF) == 1) {
            } else {
                var_s1 = func_00C13740(var_s1);
            }
        }
    }
    temp_a0 = func_00C13280(var_s1)[1];
    arg0[0] = (temp_s0[1] >> 5) & 1;
    arg0[1] = temp_s0[1] & 0x1F;
    temp_v1 = temp_s0[5];
    arg0[2] = (temp_v1 == 0xFF) ? 0xFF : (temp_v1 & 0x1F);
    arg0[3] = temp_a0 & 0x7F;
    *(s32 *)(arg0 + 4) = (temp_a0 >> 7) != 0;
    temp_a0 = func_00C132C0(arg1) & 0xFF;
    if (temp_a0 == 5) {
        *(s32 *)(arg0 + 8) = 1;
    } else if (temp_a0 == 4) {
        *(s32 *)(arg0 + 8) = 2;
    } else if (temp_a0 == 3) {
        *(s32 *)(arg0 + 8) = 0;
    }
    *(s32 *)(arg0 + 0xC) = arg1;
}
