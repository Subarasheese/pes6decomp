/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C4730(s32, s32, M2C_UNK);
s32 func_00223BB0();
s32 func_00221070(s32 arg0, s32 arg1) {
    s32 var_a0 = func_00223BB0();
    s32 t = 0; if (arg0 < 0x24) t = var_a0 + arg0 * 0x3D;
    if (t == 0) return 0;
    if (arg1 == 0) return 0;
    func_001C4730(t, arg1, 0x3D); return 1;
}
