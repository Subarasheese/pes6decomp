/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00C12A00(s32);
s32 func_00C12C00(s32);
s32 func_00C132B0(s32);
s32 func_00C132C0(s32);
s32 func_00C13510(s32, void *, s32);
M2C_UNK func_00C13640(s32, void *, s32);
extern u8 D_003E9D50;
extern u8 D_003E9D53;
extern char D_00CB3450[];
extern char D_00CB3468[];
extern char D_00CB34A8[];
extern char D_00CB34B0[];

s32 func_002BEAC0(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    u8 old;

    var_s1 = 0;
    temp_s0 = func_00C132C0(arg0) & 0xFF;
    if (func_00C12A00(temp_s0) != 0) {
        return var_s1;
    }
    temp_a0 = func_00C132B0(arg0) & 0xFF;
    old = D_003E9D53;
    if (temp_a0 == 0xFF || old == 0xFF) {
        D_003E9D53 = (u8) temp_a0;
        return var_s1;
    }
    D_003E9D53 = (u8) temp_a0;
    if (((old >> 5) & 1) == ((temp_a0 >> 5) & 1)) {
        return var_s1;
    }
    if (temp_a0 != D_003E9D50) {
        return var_s1;
    }
    if (temp_s0 == 0xD) {
        return 1;
    }
    temp_v0 = func_00C13510(arg0, D_00CB34A8, *(s32 *)D_00CB34B0);
    if (temp_v0 != -1) {
        if ((func_00C132C0(temp_v0) & 0xFF) == 9) {
            return 1;
        }
    }
    if (func_00C12C00(temp_s0) == 0) {
        return var_s1;
    }
    func_00C13640(arg0, D_00CB3450, *(s32 *)D_00CB3468);
    return 1;
}
