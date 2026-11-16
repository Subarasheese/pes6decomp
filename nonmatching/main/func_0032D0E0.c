/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_0030D990(s32);
extern s32 func_0030E540(s32);
extern s32 func_0030E6C0(s32);
extern void func_0030EE60(f32 *);
extern s32 func_00340C80(f32);
extern void func_0032CFF0(void);

s32 func_0032D0E0(void *arg0, s32 arg1) {
    f32 sp4C;
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = func_0030E540(0) & 0xFF;
    if (func_0030E6C0(temp_s2) != 1) {
        func_0030EE60(&sp4C);
        if (sp4C < 2048.0f) {
            temp_v0 = func_0030D990(temp_s2);
            if ((temp_v0 != 0) && (temp_v0 != 1)) {
                if (arg1 < func_00340C80(15.0f)) {
                    return 0;
                }
                goto block_8;
            }
            M2C_FIELD(arg0, void **, 0x3C) = (void *)func_0032CFF0;
            return 1;
        }
    }
block_8:
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, void **, 0x3C) = NULL;
    return 0;
}
