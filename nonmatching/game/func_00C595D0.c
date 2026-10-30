/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
s32 func_002C1BF0(void *, u32, s32, M2C_UNK);       /* extern */
s32 func_00BC8BC0();                                /* extern */
s32 func_00C12C80(u8);                              /* extern */
void *func_00C13280(void *);                        /* extern */
u32 func_00C13400(void *);                          /* extern */
void *func_00C137D0(s32);                           /* extern */
extern char D_00CCB9D0[];

void *func_00C595D0(s32 arg0, s32 (*arg1)(s32 *)) {
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s8 sp8C;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_v1;
    s8 temp_s1;
    u32 temp_s5;
    void *var_s1;
    void *var_s2;
    void *var_s3;

    var_s3 = (void *)-1;
    var_s2 = (void *)-1;
    temp_s0 = arg0 & 0xFF;
    if (temp_s0 < (func_00BC8BC0() & 0xFF)) {
        temp_a0 = M2C_FIELD(((temp_s0 * 0xC) + ((void *)D_00CCB9D0)), s32 *, 8);
        if (temp_a0 >= 0) {
            var_s2 = func_00C137D0(temp_a0);
        }
    }
    if ((var_s2 != (void *)-1) && (func_00C12C80(func_00C132C0(var_s2)) != 0)) {
        var_s1 = (void *)-1;
        if (temp_s0 < (func_00BC8BC0() & 0xFF)) {
            temp_a0_2 = M2C_FIELD((((arg0 & 0xFF) * 0xC) + ((void *)D_00CCB9D0)), s32 *, 4);
            if (temp_a0_2 >= 0) {
                var_s1 = func_00C137D0(temp_a0_2);
            }
        }
        func_00C13280(var_s2);
        temp_v1 = M2C_FIELD(func_00C13280(var_s2), u8 *, 5) & 3;
        switch (temp_v1) {                          /* irregular */
        case 3:
            sp84 = 3;
            break;
        case 2:
            sp84 = 2;
            break;
        case 1:
            sp84 = 1;
            break;
        default:
            sp84 = 0;
            break;
        }
        sp80 = func_002C1BF0(var_s2, (u32) var_s1, ((s32) (func_00C132B0(var_s2) & 0xFF) >> 5) & 1, 0x1C);
        temp_s5 = func_00C13400(var_s2);
        sp8C = 0xFF;
        if ((temp_s5 != -1U) && ((u32) var_s1 >= temp_s5)) {
            temp_s1 = func_00C132B0((void *) temp_s5) & 0xFF;
            if ((((s32) (func_00C132B0(var_s2) & 0xFF) >> 5) & 1) == (((s32) (temp_s1 & 0xFF) >> 5) & 1)) {
                if ((func_00C132C0((void *) temp_s5) & 0xFF) != 0xA) {
                    sp88 = 0;
                } else {
                    sp8C = temp_s1;
                    sp88 = 1;
                }
            }
        }
        if (arg1(&sp80) != 0) {
            var_s3 = var_s2;
        }
    }
    return var_s3;
}
