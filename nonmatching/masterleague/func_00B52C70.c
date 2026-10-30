/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B52DD0(s32, s32, void *, void *, void *, void *);
s32 func_0099B630(M2C_UNK);                         /* extern */

s32 func_00B52C70(s32 arg0, s32 arg1) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;

    sp3C = 0;
    sp38 = 0;
    sp34 = 0;
    sp30 = 0;
    func_00B52DD0(arg0, 0, &sp3C, &sp38, &sp34, &sp30);
    temp_s0 = arg0 & 0xFF;
    if (temp_s0 >= (func_0099B630(8) & 0xFF)) {
        sp34 = 0;
        goto block_3;
    }
    if (temp_s0 >= (func_0099B630(7) & 0xFF)) {
block_3:
        sp30 = 0;
    }
    temp_v1 = arg1 & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 4:
        return 1;
    default:
        var_v0 = 1;
        if ((temp_v1 != 1) && (temp_v1 != 0)) {
block_23:
            var_v0 = 0;
        }
        return var_v0;
    case 2:
        if (sp3C == 1) {
            return 1;
        }
        goto block_23;
    case 3:
        if (sp3C == 0) {
            if (sp38 == 1) {
                return 1;
            }
            if (sp34 == 1) {
                return 1;
            }
            if (sp30 == 1) {
                return 1;
            }
            goto block_23;
        }
        goto block_23;
    }
}
