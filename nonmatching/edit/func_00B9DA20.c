/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91340(M2C_UNK, M2C_UNK);            /* extern */
void *func_00B9C490();                              /* extern */
s32 func_00B9DBF0();                                /* extern */
M2C_UNK func_00B9E440(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B9E660(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC40A0();                            /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BCF3C0(M2C_UNK);                         /* extern */
s32 func_00BF3A10(s32);                             /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
extern char D_00CE40D8[];
extern char D_00CE40DC[];

s32 func_00B9DA20(void) {
    s32 var_s0;
    s32 var_v1;
    void *temp_v0;

    var_s0 = 0;
    if (func_00BCF3C0(0x1000) == 0) {
        if (func_00BCF3C0(0x4000) == 0) {
            if (func_00BCF3A0(1) == 0) {
                if (func_00BCF3A0(8) != 0) {
                    func_00B9E440(0, 1);
                    func_00B9E440(1, 0);
                }
            } else {
                func_00B9E660(0, 1);
                func_00B9E660(1, 0);
            }
        } else {
            M2C_FIELD(func_00B9C490(), s32 *, 0x28) = 0x51;
            (*(s32 *)D_00CE40DC) = 0;
            (*(s32 *)D_00CE40D8) = 0;
            func_00B912F0(0xC, 4);
            func_00B91340(0xC, 0);
            func_00B912F0(0x11, 4);
            func_00B91340(0x11, 0);
            func_0026E840(0x84008401);
            var_s0 = 1;
        }
    } else if (func_00B9DBF0() == 1) {
        func_0026E840(0x84028400);
        var_s0 = 1;
    } else {
        temp_v0 = func_00B9C490();
        if ((M2C_FIELD(temp_v0, s32 *, 0x14) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x20) == 2)) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
        if (var_v1 != 1) {
            func_0026E840(0x8C008005);
        }
    }
    if ((*(s32 *)D_00CE40D8) == 0) {
        if ((*(s32 *)D_00CE40DC) == 0) {
            if (func_00BF3A10(func_00BF4480(0)) == 0) {

            } else {
                func_00BC40A0();
            }
            goto block_29;
        }
        return var_s0;
    }
block_29:
    return var_s0;
}
