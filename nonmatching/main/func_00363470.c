/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154250(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00154310(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00154410(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00154490(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK (*D_003EA028)(s32, M2C_UNK, M2C_UNK);

s32 func_00363470(void) {
    M2C_UNK var_s0;
    s32 var_s2;

    var_s2 = 0;
    var_s0 = 0;
    if (((func_00154410(0, 0x10) != 0) || (func_00154250(0, 0x12) != 0)) && ((var_s2 = 8, var_s0 = 1, (func_00154490(0, 0x10) != 0)) || (func_00154310(0, 0x12) != 0))) {
        var_s0 = 0;
    }
    if (((func_00154410(0, 0x40) != 0) || (func_00154250(0, 0x13) != 0)) && ((var_s2 = 0xA, var_s0 = 1, (func_00154490(0, 0x40) != 0)) || (func_00154310(0, 0x13) != 0))) {
        var_s0 = 0;
    }
    if (((func_00154410(0, 0x80) != 0) || (func_00154250(0, 0x10) != 0)) && ((var_s2 = 9, var_s0 = 1, (func_00154490(0, 0x80) != 0)) || (func_00154310(0, 0x10) != 0))) {
        var_s0 = 0;
    }
    if (((func_00154410(0, 0x20) != 0) || (func_00154250(0, 0x11) != 0)) && ((var_s2 = 0xB, var_s0 = 1, (func_00154490(0, 0x20) != 0)) || (func_00154310(0, 0x11) != 0))) {
        var_s0 = 0;
    }
    if (func_00154490(0, 0x200) != 0) {
        var_s2 = 0x11;
    }
    if (func_00154410(0, 0x800) == 0) {
        if (func_00154410(0, 0x400) != 0) {
            var_s2 = 0x13;
            var_s0 = 1;
            if (func_00154490(0, 0x400) != 0) {
                goto block_29;
            }
        }
    } else {
        var_s2 = 0x10;
        var_s0 = 1;
        if (func_00154490(0, 0x800) != 0) {
block_29:
            var_s0 = 0;
        }
    }
    if (func_00154490(0, 0x100) != 0) {
        var_s2 = 0x14;
    }
    if (func_00154490(0, 1) != 0) {
        var_s2 = 0x17;
    }
    if (func_00154490(0, 8) != 0) {
        var_s2 = 0x16;
    }
    if (func_00154490(0, 0x4000) != 0) {
        var_s2 = 0xF;
    }
    if (func_00154410(0, 0x1000) != 0) {
        var_s2 = 0xE;
        var_s0 = 1;
        if (func_00154490(0, 0x1000) != 0) {
            var_s0 = 0;
        }
    }
    if (func_00154490(0, 0x8000) != 0) {
        var_s2 = 0xD;
    }
    if (func_00154490(0, 0x2000) != 0) {
        var_s2 = 0xC;
    }
    if ((D_003EA028 != NULL) && (var_s2 != 0)) {
        D_003EA028(var_s2, 0, var_s0);
    }
    return 0;
}
