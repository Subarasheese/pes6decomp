/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00827450(s32);                             /* extern */
s32 func_0082B4C0(s32);                             /* extern */
void *func_0082C2A0();                              /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C800(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C8E0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00862110(void *, s32);                     /* extern */
s32 func_00867600(void *, s32);                     /* extern */

s32 func_009368B0(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_s0;

    var_s1 = 0;
    temp_s0 = func_0082C2A0();
    if (func_0082B4C0(arg0) == 1) {
        var_s1 = 1;
    }
    if ((arg0 < 0) || (arg0 >= 9)) {
        func_0082CA50(0x97, -1);
    }
    if (temp_s0 == NULL) {
        func_0082CA50(0x97, -1);
    }
    temp_v0 = func_0082CA10(0x97);
    switch (temp_v0) {                              /* irregular */
    case 3:
        func_0082CA50(0x97, 0);
        func_0082C690(0xF, 0);
        var_v1 = 1;
        if (func_00827450(arg0) == 1) {
            var_v1 = 3;
        }
        return var_v1;
    case 2:
        func_0082CA50(0x97, 0);
        func_0082C690(0xF, 0);
        if (func_00827450(arg0) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    case 1:
        if (func_0082C8A0(0xF) != 1) {
            if (func_00862110(temp_s0, arg0) == 0) {
                func_0082CA50(0x97, -1);
            }
            if (func_0082C5B0(0xF) >= 0x1C21) {
                func_0082CA50(0x97, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x97, -1);
            }
        } else if (func_0082C7C0(0xF) != 0) {
            func_0082C980(0x97);
            func_0082C980(0x97);
        } else {
            func_0082C980(0x97);
        }
block_62:
        return 0;
    case 0:
        if (func_00862110(temp_s0, arg0) != 1) {
            func_0082CA50(0x97, -1);
        } else {
            if (M2C_FIELD(temp_s0, s32 *, 0x4BB8) != 1) {
                if (func_00867600(temp_s0 + (arg0 * 0x24), M2C_FIELD(temp_s0, s32 *, 0x49E8)) != 0) {
                    func_0082CA50(0x97, -1);
                } else {
                    func_0082C840(0xF);
                    func_0082C690(0xF, 0);
                    func_0082C980(0x97);
                }
            } else {
                func_0082C8E0(0xF, 1);
                func_0082C800(0xF, 0);
                func_0082C690(0xF, 0);
                func_0082C980(0x97);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x97, -1);
            }
        }
        goto block_62;
    default:
        func_0082CA50(0x97, 0);
        func_0082C690(0xF, 0);
        if (func_00827450(arg0) != 1) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    }
}
