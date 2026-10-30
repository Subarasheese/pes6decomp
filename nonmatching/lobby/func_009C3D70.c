/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7BE0(s32, f32 *);                  /* extern */
M2C_UNK func_001D7CE0(s32, f32 *);                  /* extern */
M2C_UNK func_001DF820(s32, s8 *);                   /* extern */
f32 func_001E4E30(s32);                             /* extern */
extern char D_00A02C58[];
extern char D_00A7DD58[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
s32 func_009C3D70(s32 arg0, s8 *arg1) {
    f32 sp50;
    f32 temp_f20;
    s32 temp_s2;
    s8 *var_a1;
    void *var_s0;

    var_a1 = arg1;
    if ((*(s32 *)D_00A7DD58) == 0) {
        var_s0 = NULL;
    } else if (var_a1 == NULL) {
        var_s0 = NULL;
    } else if (arg0 < 0) {
        var_s0 = NULL;
    } else if (arg0 < 3) {
        var_s0 = M2C_FIELD(((arg0 * 8) + (*(s32 *)D_00A7DD58)), void **, 8);
        if (var_s0 != NULL) {
            if (*var_a1 == 0) {
                var_a1 = ((void *)D_00A02C58);
            }
            func_001DF820(M2C_FIELD(var_s0, s32 *, 0xC), var_a1);
        } else {
            var_s0 = NULL;
        }
    } else {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        return 0;
    }
    temp_s2 = M2C_FIELD(((arg0 * 8) + (*(s32 *)D_00A7DD58)), s32 *, 0x20);
    if (temp_s2 != 0) {
        temp_f20 = func_001E4E30(M2C_FIELD(var_s0, s32 *, 0xC));
        func_001D7BE0(temp_s2, &sp50);
        sp50 = M2C_FIELD(((arg0 * 4) + (*(s32 *)D_00A7DD58)), f32 *, 0x48) + temp_f20;
        func_001D7CE0(temp_s2, &sp50);
    }
    return 1;
}
