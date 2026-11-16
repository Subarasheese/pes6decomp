/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
s32 func_009E1C90(s32);
s32 func_00BD9E70();

s32 func_00BA8610(void *arg0) {
    u16 t;
    void *a0;

    if ((func_009E1C90(1) & 0xFF) == 5 || (func_009E1C90(1) & 0xFF) == 0xC) {
        a0 = M2C_FIELD(arg0, void **, 4);
        t = M2C_FIELD(a0, u16 *, 0x30);
        if (t == 0xEE) {
            if (func_00207D80(a0, 0x3E) != 0) {
                return 1;
            }
        } else if (t == 0xF0) {
            if (func_00207D80(a0, 0x34) != 0) {
                return 1;
            }
        }
    }
    if (func_00BD9E70() == 0) {
        return 0;
    }
    a0 = M2C_FIELD(arg0, void **, 4);
    t = M2C_FIELD(a0, u16 *, 0x30);
    if (t == 0xC9) {
        if (M2C_FIELD(a0, f32 *, 0x38) < 42.0f) {
            return 0;
        }
        return 1;
    }
    if (t == 0xEE) {
        if (M2C_FIELD(a0, f32 *, 0x38) < 40.0f) {
            return 0;
        }
        return 1;
    }
    return 0;
}
