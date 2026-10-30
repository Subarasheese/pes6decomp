/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91490(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BBC040(M2C_UNK);                     /* extern */
M2C_UNK func_00BC6910(M2C_UNK);                     /* extern */

void func_00BB46B0(void *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        var_v0 = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = var_v0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 2;
    M2C_FIELD(arg0, s32 *, 0x3C) = 2;
    M2C_FIELD(arg0, s32 *, 0x40) = 2;
    M2C_FIELD(arg0, s32 *, 0x48) = 2;
    M2C_FIELD(arg0, s32 *, 0x44) = 2;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 2;
    M2C_FIELD(arg0, s32 *, 0x88) = 1;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s16 *, 0x80) = -1;
    M2C_FIELD(arg0, s16 *, 0x82) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    func_00B91490(0x15, 2);
    func_00BBC040(0);
    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        func_00BC6910(0x2A0030);
        return;
    }
    func_00BC6910(0x2A002E);
}
