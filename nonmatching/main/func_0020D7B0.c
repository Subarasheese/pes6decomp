/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0020D010(u32);
extern int func_0020C4E0(int);
extern void func_001EF900(void *, s8);
M2C_UNK func_001EE890(void *, s32);                 /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_001EF370(void *, f32 *);               /* extern */
f32 func_0020C500(s32, s32);                        /* extern */
s32 func_0020C570(s32, s32, s32 *, M2C_UNK, u16 *, u16 *); /* extern */

s32 func_0020D7B0(void **arg0, s32 arg1, s32 arg2, u32 arg3, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    s32 spD8;
    u16 spDC;
    u16 spDE;
    f32 *var_v1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f21;
    s32 temp_hi;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    void **var_s0;
    void **var_s6;
    void *temp_s1;

    var_s5 = arg2;
    var_s4 = 0;
    if (arg0 != NULL) {
        var_v1 = &spC0;
        var_s3 = 0;
        var_f21 = fparg0;
        var_v0 = 0x10;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        temp_s2 = func_0020D010(arg3);
        var_s6 = arg0;
        do {
            temp_s1 = *var_s6;
            if (temp_s1 != NULL) {
                temp_hi = var_s5 % 10;
                if (fparg2 == 0.0f) {
                    var_f21 -= func_0020C500(temp_s2, temp_hi);
                } else {
                    var_f21 -= fparg2;
                }
                if ((temp_s1 != NULL) && (temp_s2 != 0) && (temp_hi < func_0020C4E0(temp_s2))) {
                    temp_v0 = func_0020C570(temp_s2, temp_hi, &spD8, 0, &spDE, &spDC);
                    spB0 = var_f21;
                    spB4 = fparg1;
                    if ((s32) spDE >= 0) {
                        var_f0 = (f32) spDE;
                    } else {
                        var_f0 = 2.0f * (f32) ((spDE >> 1) | (spDE & 1));
                    }
                    spB8 = var_f0;
                    if ((s32) spDC >= 0) {
                        var_f0_2 = (f32) spDC;
                    } else {
                        var_f0_2 = 2.0f * (f32) ((spDC >> 1) | (spDC & 1));
                    }
                    spBC = var_f0_2;
                    func_001EEAC0(temp_s1, temp_v0);
                    func_001EF370(temp_s1, &spB0);
                    func_001EE890(temp_s1, spD8);
                    func_001EF900(temp_s1, 0);
                }
                var_s4 += 1;
            }
            var_s6 += 4;
            var_s5 = (var_s5 / 10) + ((u32) var_s5 >> 0x1F);
            var_s3 += 1;
        } while (var_s5 > 0);
        if (var_s3 < arg1) {
            var_s0 = arg0 + (var_s3 * 4);
            do {
                func_001EEAC0(*var_s0, 0);
                func_001EF370(*var_s0, &spC0);
                func_001EF900(*var_s0, 0);
                var_s3 += 1;
                var_s0 += 4;
            } while (var_s3 < arg1);
        }
    }
    return var_s4;
}
