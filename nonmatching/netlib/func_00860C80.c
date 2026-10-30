/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00868D20(s32 *, s32);                      /* extern */
M2C_UNK func_00868DA0(s32 *, s32);                  /* extern */
s32 func_00868E80(s32 *, s32);                      /* extern */
s32 func_00868EF0(s32 *, s32);                      /* extern */
s32 func_00869030(s32 *, s32, s32);                 /* extern */
M2C_UNK func_008690F0(s32 *, s32, s32);             /* extern */
s32 func_008691C0(s32 *, s32);                      /* extern */
s32 func_00869240(s32 *, s32);                      /* extern */
s32 func_00869380(s32 *, s32, s32);                 /* extern */
s32 func_00869530(s32 *, s32);                      /* extern */
s32 func_00869620(s32 *, s32);                      /* extern */
s32 func_00869710(s32 *, s32);                      /* extern */
s32 func_00869860(s32 *, s32, s32);                 /* extern */
s32 func_00869A30(s32 *, s32);                      /* extern */
s32 func_00869B90(s32 *, s32, s32);                 /* extern */
s32 func_00869D10(s32 *, s32);                      /* extern */
s32 func_00869E00(s32 *, s32);                      /* extern */
s32 func_0086A200(s32 *, s32);                      /* extern */
s32 func_0086A2E0(s32 *, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_0086A650(s32 *, s32);                      /* extern */
s32 func_0086A6D0(s32 *, s32);                      /* extern */
s32 func_0086B200(s32 *, s32);                      /* extern */
M2C_UNK func_0086B570(s32 *, s32, s32);             /* extern */

s32 func_00860C80(s32 arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = *arg1;
    switch (temp_v0) {                              /* irregular */
    case 0x6021:
        var_v0 = func_0086A6D0(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
block_71:
        return var_v0;
    case 0x6022:
        var_v0 = func_0086A650(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6031:
        var_v0 = func_0086A2E0(arg1, arg0 + 0x4830, arg0 + 0x153DC, arg0 + 0x155CC, arg0 + 0x155F8, arg0 + 0x153D9, arg0 + 0x101A4, arg0 + 0x101A7);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6024:
        var_v0 = func_0086A200(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6040:
        var_v0 = func_00869240(arg1, arg0 + 0x13A84);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6041:
        var_v0 = func_008691C0(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6051:
        func_001C48E8(arg0 + 0x16118, 0, 0x2C);
        func_008690F0(arg1, arg0 + 0x4830, arg0 + 0x16118);
        var_v0 = *arg1;
        goto block_71;
    case 0x6061:
        var_v0 = func_00869E00(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6071:
        var_v0 = func_00869530(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6072:
        var_v0 = func_00869380(arg1, arg0 + 0xF8A4, arg0 + 0x161C0);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6081:
        var_v0 = func_00869620(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6091:
        var_v0 = func_00869D10(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x60A1:
        var_v0 = func_00869B90(arg1, arg0 + 0x4830, arg0 + 0xF8A4);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x60A2:
        var_v0 = func_00869A30(arg1, arg0 + 0xF8A4);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x60B1:
        var_v0 = func_00869860(arg1, arg0 + 0x4830, arg0 + 0xF8A4);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x60B2:
        var_v0 = func_00869710(arg1, arg0 + 0xF8A4);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x6073:
        var_v0 = func_00869030(arg1, arg0 + 0x13A80, arg0 + 0xF8A4);
        if (var_v0 != 0) {

        } else {
            var_v0 = 0x6073;
        }
        goto block_71;
    case 0x60C0:
        var_v0 = func_00868E80(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x60C1:
        var_v0 = func_00868EF0(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x60C3:
        func_00868DA0(arg1, arg0 + 0x4830);
        var_v0 = 0x60C2;
        goto block_71;
    case 0x60C4:
        var_v0 = func_00868D20(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = *arg1;
        }
        goto block_71;
    case 0x60D1:
        func_0086B570(arg1, arg0 + 0x4830, arg0 + 0x16144);
        var_v0 = 0x60D1;
        goto block_71;
    case 0x6111:
        var_v0 = func_0086B200(arg1, arg0 + 0x4830);
        if (var_v0 != 0) {

        } else {
            var_v0 = 0x4388;
        }
        goto block_71;
    default:
        var_v0 = -0x46;
        goto block_71;
    case 0x60F2:
    case 0x60F1:
    case 0x60E0:
        return temp_v0;
    }
}
