/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C8590(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_0082C2A0();                                /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00980C50(M2C_UNK, s32, M2C_UNK *, s32);    /* extern */
extern char D_00A69020[];

s32 func_00980830(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK var_s0;
    s32 temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        if (func_00862110(temp_v0, 3) != 1) {
            if (func_00862110(temp_v0, 8) != 1) {
                if (func_00862110(temp_v0, 4) != 1) {
                    if (func_00862110(temp_v0, 5) != 1) {
                        func_0082C920(0x9D);
                        func_0082C840(0xAA);
                        func_0082C690(0xAA, 0);
                        return 2;
                    }
                    var_s0 = 5;
                    goto block_21;
                }
                var_s0 = 4;
                goto block_21;
            }
            var_s0 = 8;
            goto block_21;
        }
        var_s0 = 3;
block_21:
        if (arg1 == 0) {
            func_0082C920(0x9D);
            func_0082C840(0xAA);
            func_0082C690(0xAA, 0);
            return 1;
        }
        func_001C48E8(((void *)D_00A69020), 0, 0x400);
        func_001C8590(((void *)D_00A69020), arg1, 0x200);
        return func_00980C50(var_s0, arg0, ((void *)D_00A69020), arg2);
    }
    func_0082C920(0x9D);
    func_0082C840(0xAA);
    func_0082C690(0xAA, 0);
    return 2;
}
