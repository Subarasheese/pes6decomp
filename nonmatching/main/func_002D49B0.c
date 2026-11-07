/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00256140(void);
extern s32 func_00263070(void);
extern void func_002D33D0(void);
extern void func_0026DA30(void);
M2C_UNK func_0026E840(s32);                         /* extern */
s32 func_009B45F0();                                /* extern */
s32 func_009B4650();                                /* extern */
M2C_UNK func_00B29C50();                            /* extern */

void func_002D49B0(u8 arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 *var_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00256140();
    var_a0 = &sp20;
    var_v1 = 0x10;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    sp24 = M2C_FIELD(temp_v0, s32 *, 0x580);
    sp28 = M2C_FIELD(temp_v0, s32 *, 0x5D4);
    sp20 = M2C_FIELD(temp_v0, s32 *, 0x57C);
    sp2C = M2C_FIELD(temp_v0, s32 *, 0x5B0);
    if (arg0 != M2C_FIELD(temp_v0, u8 *, 1)) {
        M2C_FIELD(temp_v0, u8 *, 1) = arg0;
        if (arg0 == 0) {
            func_0026DA30();
            func_0026E840(0x82000117);
            func_002D33D0();
            return;
        }
        func_0026DA30();
        temp_s0 = func_00256140();
        if (func_00263070() != 0) {
            func_00B29C50();
        }
        if (((func_009B45F0() == 0) || ((func_009B4650() & 0xFF) != 4)) && (M2C_FIELD(temp_s0, u8 *, 1) != 0)) {
            func_0026E840(M2C_FIELD(temp_s0, s32 *, 0x568));
        }
        temp_s0_2 = func_00256140();
        if (func_00263070() != 0) {
            func_00B29C50();
        }
        if (((func_009B45F0() == 0) || ((func_009B4650() & 0xFF) != 4)) && (M2C_FIELD(temp_s0_2, u8 *, 1) != 0)) {
            func_0026E840(M2C_FIELD(temp_s0_2, s32 *, 0x56C));
        }
    }
}
