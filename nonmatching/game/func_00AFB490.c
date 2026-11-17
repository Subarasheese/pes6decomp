/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_00288580(void);
extern char D_00591DF0[];

void func_00AFB490(void *arg0, s32 arg1, s32 arg2) {
    s32 step;
    s32 delta;
    s32 var_s0;

    step = (arg2 * (*(u8 *)D_00591DF0)) / 60;
    if (M2C_FIELD(arg0, s32 *, 0x20) >= 0) {
        if (arg1 >= M2C_FIELD(arg0, s32 *, 0x20)) {
            M2C_FIELD(arg0, s32 *, 0x20) = M2C_FIELD(arg0, s32 *, 0x20) + (arg1 / step);
            if (arg1 < M2C_FIELD(arg0, s32 *, 0x20)) {
                M2C_FIELD(arg0, s32 *, 0x20) = arg1;
            }
        } else {
            var_s0 = (step * 3) / 2;
            if (func_00288580() != 0) {
                var_s0 = (var_s0 * 11) / 10;
            }
            delta = (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) / var_s0;
            if (delta < M2C_FIELD(arg0, s32 *, 0x20)) {
                M2C_FIELD(arg0, s32 *, 0x20) = M2C_FIELD(arg0, s32 *, 0x20) - delta;
                if (M2C_FIELD(arg0, s32 *, 0x20) < arg1) {
                    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x20) = 0;
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    }
}
