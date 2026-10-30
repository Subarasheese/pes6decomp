/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00CDCBD0(void);
extern void func_00264790(void *, u8);
extern u32 func_00CDD0D0(void);
s32 func_00CDCCB0();                                /* extern */
s32 func_00CDD0E0(void *);                          /* extern */
s32 func_00CDD5D0();                                /* extern */

void func_00CD1870(void *arg0) {
    s32 var_a0;
    s32 var_s0;
    s32 var_v1;
    u32 temp_v0;
    void *temp_a2;

    if (func_00CDD5D0() != 0) {
        var_s0 = 0;
        if (func_00CDCCB0() == 0) {
            temp_v0 = func_00CDCBD0();
            var_v1 = 0;
            if ((u32) (M2C_FIELD(arg0, s32 *, 0xBC) - 1) < 2U) {
                var_a0 = 0;
                do {
                    temp_a2 = temp_v0 + (M2C_FIELD(arg0, s32 *, 0x1C) * 0x960) + ((M2C_FIELD(arg0, u8 *, 0x20) & 0xFF) * 0x1E0) + ((var_a0 & 0xFF) * 0x30);
                    if ((M2C_FIELD(temp_a2, s32 *, 0x2C) == 1) && (M2C_FIELD(temp_a2, s16 *, 0x28) >= 0x3E8)) {
                        var_v1 = (var_v1 + 1) & 0xFF;
                    }
                    var_a0 = (var_a0 + 1) & 0xFF;
                } while (var_a0 < 0xA);
                if ((var_v1 & 0xFF) == 1) {
                    var_s0 = 1;
                }
            }
        }
        if (var_s0 == 0) {
            if ((func_00CDD0E0(arg0) != 0) && (func_00CDD0D0() != 0)) {
                func_00264790(arg0, 0x2FU);
                return;
            }
            func_00264790(arg0, 0x31U);
        } else {
            func_00264790(arg0, 0x2EU);
        }
    }
}
