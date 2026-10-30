/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226710();                                /* extern */
s32 func_00227A70();                                /* extern */
s32 func_00230410(u8, void *, void *);              /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
extern void *D_003E77AC;
extern void *D_003E77B0;
extern char D_00591BC3[];
extern char D_00591C09[];

s32 func_0096B040(void) {
    s32 var_s0;
    s8 var_v1;
    u8 temp_a0;

    var_s0 = -1;
    if (M2C_FIELD(D_003E77AC, s32 *, 4) != 0) {

    } else {
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x200000);
        temp_a0 = M2C_FIELD(D_003E77B0, u8 *, 0x24);
        M2C_FIELD(D_003E77B0, u8 *, 0x24) = (u8) ((temp_a0 & ~2) | ((0 & 1) * 2));
        if ((func_00230410(temp_a0, D_003E77B0, D_003E77B0) == 1) && (((func_00226710() & 0xFF) == 0x1E) || ((func_00226710() & 0xFF) == 0x22))) {
            var_v1 = 7;
        } else if (((*(u8 *)D_00591C09) == 0xE) && ((func_00226710() & 0xFF) == 0x2E)) {
            var_v1 = 6;
        } else {
            var_v1 = 3;
        }
        (*(s8 *)D_00591BC3) = var_v1;
        if (func_00227A70() != 1) {
            var_s0 = 0x43;
        } else if ((M2C_FIELD(D_003E77B0, u8 *, 0x2A) == 0xFF) && (M2C_FIELD(D_003E77B0, u8 *, 0x2B) == 0xFF)) {
            var_s0 = 0x1E;
        } else {
            var_s0 = 0x40;
        }
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
