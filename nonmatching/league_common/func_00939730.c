/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002466D0(s32);                             /* extern */
extern void *D_003E77B0;

void func_00939730(void) {
    s32 temp_s1;
    s32 var_s0;

    var_s0 = 0x1155;
    do {
        temp_s1 = (var_s0 - 0x1155) & 0xFFFF;
        if ((temp_s1 < 0xA0) && (func_002466D0(temp_s1) == 1)) {
            if (temp_s1 < 0x20) {
                M2C_FIELD(D_003E77B0, s32 *, 0x34) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x34) | (1 << ((temp_s1 % 32) & 0xFFFF)));
            } else if (temp_s1 < 0x40) {
                M2C_FIELD(D_003E77B0, s32 *, 0x38) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x38) | (1 << (((s32) (temp_s1 - 0x20) % 32) & 0xFFFF)));
            } else if (temp_s1 < 0x60) {
                M2C_FIELD(D_003E77B0, s32 *, 0x3C) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x3C) | (1 << (((s32) (temp_s1 - 0x40) % 32) & 0xFFFF)));
            } else if (temp_s1 < 0x80) {
                M2C_FIELD(D_003E77B0, s32 *, 0x40) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x40) | (1 << (((s32) (temp_s1 - 0x60) % 32) & 0xFFFF)));
            } else if (temp_s1 < 0xA0) {
                M2C_FIELD(D_003E77B0, s32 *, 0x584) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x584) | (1 << (((s32) (temp_s1 - 0x80) % 32) & 0xFFFF)));
            }
        }
        var_s0 += 1;
    } while (var_s0 < 0x11F5);
}
