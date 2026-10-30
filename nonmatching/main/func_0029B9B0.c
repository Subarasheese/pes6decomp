/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A4880(int);
M2C_UNK func_001A56D0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005E19A0[];
extern char D_005E2200[];
extern char D_005E2204[];
extern char D_005E2208[];
extern char D_005E2324[];

void func_0029B9B0(f32 fparg0) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f20;
    f32 var_f21;
    f32 var_f21_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;

    var_f20 = fparg0;
    if (var_f20 < 1.0f) {
        var_f20 = 1.0f;
    }
    if ((*(s32 *)D_005E19A0) & 0x200) {
        temp_a1 = (*(s32 *)D_005E19A0) & ~0x200;
        (*(s32 *)D_005E19A0) = temp_a1;
        (*(f32 *)D_005E2200) = (1375.0f * var_f20) / (*(f32 *)D_005E2200);
        if (temp_a1 & 2) {
            func_001A4880(1);
        } else {
            func_001A4880(0);
        }
    }
    if (((*(f32 *)D_005E2324) <= 0.0f) && ((*(s32 *)D_005E19A0) & 0x800)) {
        var_f21 = -(*(f32 *)D_005E2324);
        if (var_f21 < 0.0f) {
            var_f21_2 = -var_f21;
            if (var_f21_2 != 0.0f) {
                var_f0 = 40000.0f;
                if (var_f21_2 <= 40000.0f) {
                    var_f0 = (*(f32 *)D_005E2204);
                    if (var_f21_2 < var_f0) {

                    } else {
                        var_f0 = var_f21_2;
                    }
                }
                temp_a0 = (*(s32 *)D_005E19A0) | 0x200;
                (*(s32 *)D_005E19A0) = temp_a0;
                var_f21_2 = var_f0;
                if (temp_a0 & 2) {
                    func_001A4880(1);
                } else {
                    func_001A4880(0);
                }
            } else if (!((*(f32 *)D_005E2200) <= 0.0f)) {
                func_001A56D0((*(s32 *)D_005E19A0), 0x42480000, 0x467A0000);
            }
            (*(f32 *)D_005E2200) = var_f21_2;
        } else {
            if (var_f21 != 0.0f) {
                var_f0_2 = 30000.0f;
                if (!(var_f21 <= 30000.0f)) {

                } else {
                    var_f0_2 = 200.0f;
                    if (var_f21 < 200.0f) {

                    } else {
                        var_f0_2 = var_f21;
                    }
                }
                var_f21 = var_f0_2;
            } else if (!((*(f32 *)D_005E2200) <= 0.0f)) {
                func_001A56D0((*(s32 *)D_005E19A0), 0x42480000, 0x467A0000);
            }
            (*(f32 *)D_005E2200) = var_f21;
            temp_v1 = (*(s32 *)D_005E19A0) & ~0x200;
            (*(s32 *)D_005E19A0) = temp_v1;
            if (temp_v1 & 2) {
                func_001A4880(1);
            } else {
                func_001A4880(0);
            }
        }
    }
    if (!((*(f32 *)D_005E2200) <= 0.0f)) {
        (*(f32 *)D_005E2324) = (1375.0f * var_f20) / (*(f32 *)D_005E2200);
    }
    if (!((*(f32 *)D_005E2324) <= 0.0f) && ((*(f32 *)D_005E2324) < (*(f32 *)D_005E2204))) {
        (*(f32 *)D_005E2324) = (*(f32 *)D_005E2204);
    }
    if (!((*(f32 *)D_005E2208) <= 0.0f)) {
        if ((*(f32 *)D_005E2200) == 0.0f) {
            var_f0_3 = (1375.0f * var_f20) / (*(f32 *)D_005E2324);
            goto block_32;
        }
        return;
    }
    var_f0_3 = (1375.0f * -var_f20) / (*(f32 *)D_005E2324);
block_32:
    (*(f32 *)D_005E2208) = var_f0_3;
}
