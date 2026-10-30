/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6670(void);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BC4270(s32, M2C_UNK);                    /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00C15C70();                                /* extern */
M2C_UNK func_00C15FF0();                            /* extern */
M2C_UNK func_00C17D90(void *);                      /* extern */
s32 func_00C18420(u16);                             /* extern */

s32 func_00C19BC0(void *arg0) {
    M2C_UNK var_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;

    var_s1 = 0xF00088;
    var_s0 = 3;
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if ((func_00BC4270(arg0 + 0x2E8, 4) == 0) && (M2C_FIELD(arg0, s32 *, 0x2E8) == 3)) {
                if ((func_00BCF3A0(0x40) != 0) && (M2C_FIELD(arg0, s32 *, 0x2E4) == 1)) {
                    M2C_FIELD(arg0, s32 *, 0x2E4) = 0;
                    func_0026E840(0x8400F802);
                } else if ((func_00BCF3A0(0x200) != 0) && (M2C_FIELD(arg0, s32 *, 0x2E4) == 0)) {
                    M2C_FIELD(arg0, s32 *, 0x2E4) = 1;
                    func_0026E840(0x8400F802);
                }
            }
            func_00C17D90(arg0);
        } else {
            func_0026E840(0x84008401);
            if (M2C_FIELD(arg0, s32 *, 0x2E8) != 0) {
                M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
            } else {
                if (func_00C15C70() == 0) {
                    var_s0 = 0xA;
                } else {
                    var_s0 = 8;
                }
                M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
            }
        }
    } else if (func_00BC9F00() != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x2E8);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            var_s0 = M2C_FIELD(arg0, s32 *, 0x2E4) + 6;
            break;
        case 2:                                     /* switch 1 */
            var_s0 = 4;
            break;
        case 1:                                     /* switch 1 */
            M2C_FIELD(arg0, s32 *, 0x2D4) = 3;
            var_s0 = 5;
            break;
        case 0:                                     /* switch 1 */
            var_s0 = 0xA;
            break;
        }
        if ((var_s0 == 5) && (func_00C18420(M2C_FIELD(arg0, u16 *, 0x2E0)) == 0)) {
            func_0026E840(0x8C008005);
            var_s0 = 9;
        } else {
            func_0026E840(0x84028400);
        }
    }
    if (var_s0 == 3) {
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x2E8);
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x2E4) != 0) {
                var_s1 = 0xF10027;
            } else {
                var_s1 = 0xF10026;
            }
            break;
        case 2:                                     /* switch 2 */
            var_s1 = 0xF1003B;
            break;
        case 1:                                     /* switch 2 */
            var_s1 = 0xF10039;
            break;
        }
        func_001B66C0(var_s1);
        func_00BC3FB0(0x20000);
    } else {
        func_001B6670();
        func_00BC3FB0(0);
    }
    func_00C15FF0();
    return var_s0;
}
