/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00257F60();                            /* extern */
M2C_UNK func_00258060(u8, s32);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BB7D10(void *);                      /* extern */
M2C_UNK func_00BBA300(void *);                      /* extern */
s32 func_00BBA760(void *);                          /* extern */
M2C_UNK func_00BBC080();                            /* extern */
s32 func_00BCF390();                                /* extern */

void func_00BB7B90(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    temp_s0 = func_00BCF390();
    temp_v0 = func_00BCF390();
    var_a0 = 0;
    if (temp_v0 & 0x40000) {
        var_a0 = 1;
        var_v1 = M2C_FIELD(arg0, s32 *, 0x30) + 1;
        goto block_4;
    }
    if (temp_v0 & 0x8000) {
        var_a0 = 1;
        var_v1 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
block_4:
        M2C_FIELD(arg0, s32 *, 0x30) = var_v1;
    }
    if (var_a0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x30);
        if (var_v0 >= 4) {
            var_v0 = 0;
        } else if (var_v0 < 0) {
            var_v0 = 3;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = var_v0;
        func_00BBA300(arg0);
        func_0026E840(0x8400F803);
        var_v1_2 = 1;
    } else {
        var_v1_2 = 0;
    }
    if ((var_v1_2 == 0) && (func_00BBA760(arg0) == 0)) {
        if (func_00BCF390() & 0x20000000) {
            var_a1 = 1;
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            M2C_FIELD(arg0, s8 *, 0x10) = 0x15;
        } else {
            var_a1 = 0;
        }
        if (var_a1 == 0) {
            if (!(temp_s0 & 0x1000)) {
                if (temp_s0 & 0x4000) {
                    func_00257F60();
                    func_0026E840(0x84008401);
                    M2C_FIELD(arg0, s8 *, 0x12) = 5;
                }
                func_00BB7D10(arg0);
            } else {
                M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
                func_00258060((u8) M2C_FIELD(arg0, s32 *, 0x9C), var_a1);
                func_0026E840(0x84028400);
                func_00BBC080();
                M2C_FIELD(arg0, s8 *, 0x12) = 2;
            }
        }
    }
}
