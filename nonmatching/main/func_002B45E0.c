/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
extern s32 func_00207D10(void *);
extern s32 func_00207D80(void *, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_002084C0(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_002B45E0(void *arg0) {
    M2C_UNK var_s0;
    f32 temp_f20;
    u16 temp_v1;

    var_s0 = 4;
    if (func_00207D10(arg0) != 0) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x30);
        temp_f20 = M2C_FIELD(arg0, f32 *, 0x28);
        switch (temp_v1) {                          /* irregular */
        case 0x536:
            func_00207BE0(arg0);
            if (func_00207D80(arg0, 0x28) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = 0;
            }
            break;
        case 0x5D:
            M2C_FIELD(arg0, s32 *, 0x38) = 0x40800000;
            var_s0 = 6;
            func_00209A00(arg0, M2C_FIELD(arg0, u16 *, 0x30), 4);
            break;
        case 0x65:
        case 0x64:
            if (func_00207D10(arg0) != 0) {
                func_002084C0(arg0);
            }
            break;
        default:
            func_00207BE0(arg0);
            break;
        }
        func_00207390(arg0, var_s0);
        M2C_FIELD(arg0, f32 *, 0x28) = temp_f20;
    }
}
