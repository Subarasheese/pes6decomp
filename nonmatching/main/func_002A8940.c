/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A4880(int);
M2C_UNK func_001A56D0(M2C_UNK, M2C_UNK);            /* extern */
extern char D_005E19A0[];
extern char D_005E2200[];
extern char D_005E2204[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_002A8940(f32 fparg0) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f20;
    f32 var_f20_2;
    s32 temp_v1;
    s32 temp_v1_2;

    var_f20 = fparg0;
    if (var_f20 < 0.0f) {
        var_f20_2 = -var_f20;
        if (var_f20_2 != 0.0f) {
            var_f0 = 40000.0f;
            if (var_f20_2 <= 40000.0f) {
                var_f0 = (*(f32 *)D_005E2204);
                if (var_f20_2 < var_f0) {

                } else {
                    var_f0 = var_f20_2;
                }
            }
            temp_v1 = (*(s32 *)D_005E19A0) | 0x200;
            (*(s32 *)D_005E19A0) = temp_v1;
            var_f20_2 = var_f0;
            if (temp_v1 & 2) {
                func_001A4880(1);
            } else {
                func_001A4880(0);
            }
        } else if (!((*(f32 *)D_005E2200) <= 0.0f)) {
            func_001A56D0(0x42480000, 0x467A0000);
        }
        (*(f32 *)D_005E2200) = var_f20_2;
        return;
    }
    if (var_f20 != 0.0f) {
        var_f0_2 = 30000.0f;
        if (!(var_f20 <= 30000.0f)) {

        } else {
            var_f0_2 = 200.0f;
            if (var_f20 < 200.0f) {

            } else {
                var_f0_2 = var_f20;
            }
        }
        var_f20 = var_f0_2;
    } else if (!((*(f32 *)D_005E2200) <= 0.0f)) {
        func_001A56D0(0x42480000, 0x467A0000);
    }
    (*(f32 *)D_005E2200) = var_f20;
    temp_v1_2 = (*(s32 *)D_005E19A0) & ~0x200;
    (*(s32 *)D_005E19A0) = temp_v1_2;
    if (temp_v1_2 & 2) {
        func_001A4880(1);
    } else {
        func_001A4880(0);
    }
}
