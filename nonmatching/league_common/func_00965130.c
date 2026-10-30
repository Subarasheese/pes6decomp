/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_00226710(void);
s32 func_00230410();                                /* extern */
s32 func_009612B0(s32);                             /* extern */
void *func_00994750();                              /* extern */
s32 func_00994770();                                /* extern */
s32 func_00994800();                                /* extern */
extern void *D_003E77B0;

s32 func_00965130(void) {
    s32 temp_s3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u8 temp_a0;
    void *temp_s0;

    var_s2 = 0;
    var_s1 = 0;
    temp_s3 = func_00225820() & 0xFF;
    temp_s0 = func_00994750();
    if (func_00230410() == 0) {
        return 0x24;
    }
    if (temp_s0 != NULL) {
        var_s2 = M2C_FIELD(temp_s0, u8 *, 0x61AB7) + (M2C_FIELD(temp_s0, u8 *, 0x61A6C) + (M2C_FIELD(temp_s0, u8 *, 0x61A21) + (M2C_FIELD(((temp_s3 & 0xFF) + temp_s0), u8 *, 0x61944) + M2C_FIELD(temp_s0, u8 *, 0x619D6))));
    }
    var_s0 = 0;
loop_5:
    if (func_009612B0(var_s0) != 1) {
        var_s0 = (var_s0 + 1) & 0xFF;
        if (var_s0 < 0xA) {
            goto loop_5;
        }
    } else {
        var_s1 = 1 & 0xFF;
    }
    if ((func_00994800() & 0xFF) == 1) {
        return 0x20;
    }
    if ((func_00994770() & 0xFF) != 1) {
        if ((var_s1 & 0xFF) > 0) {
            return 0x23;
        }
        if ((func_00994770() & 0xFF) == 2) {
            temp_a0 = M2C_FIELD(D_003E77B0, u8 *, 0x26);
            if ((((u64) ((s64) temp_a0 << 0x3D) >> 0x3F) == 1) && (((u64) ((s64) temp_a0 << 0x3C) >> 0x3F) == 1)) {
                return 0x21;
            }
        }
        if (var_s2 > 0) {
            if ((func_00226710() & 0xFF) == 0x1F) {
                return 0x26;
            }
            if (((func_00226710() & 0xFF) == 0x23) || ((func_00226710() & 0xFF) == 0x1C) || ((func_00226710() & 0xFF) == 0x20)) {
                return 0x26;
            }
            goto block_30;
        }
block_30:
        if (((u64) ((s64) M2C_FIELD(D_003E77B0, u8 *, 0x24) << 0x39) >> 0x3F) != 1) {
            return 0x24;
        }
        return 0x2C;
    }
    return 0x2B;
}
