/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016A170(void);
u32 func_0015AA80(s32, s32, s32, void *, s16, s16, void *, s16, s32); /* extern */
u32 ADX_DecodeSte4(s32, s32, s32, void *, s32, void *, s16, s16, void *, s32, s32); /* extern */

void func_0016A180(void *arg0) {
    s32 var_v1;
    u32 temp_v0;

    var_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    if (var_v1 == 1) {
        var_v1 = 2;
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
    }
    if (var_v1 == 2) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 1) {
            temp_v0 = ADX_DecodeSte4(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20), arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x2C, M2C_FIELD(arg0, s16 *, 0x30), M2C_FIELD(arg0, s16 *, 0x32), arg0 + 0x34, (s32) M2C_FIELD(arg0, s16 *, 0x36), (s32) M2C_FIELD(arg0, s16 *, 0x38));
            M2C_FIELD(arg0, u32 *, 0x10) = temp_v0;
            if ((temp_v0 - (((s32) (temp_v0 + (temp_v0 >> 0x1F)) >> 1) * 2)) == 1) {
                func_0016A170();
            }
        } else {
            M2C_FIELD(arg0, u32 *, 0x10) = func_0015AA80(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20), arg0 + 0x28, M2C_FIELD(arg0, s16 *, 0x30), M2C_FIELD(arg0, s16 *, 0x32), arg0 + 0x34, M2C_FIELD(arg0, s16 *, 0x36), (s32) M2C_FIELD(arg0, s16 *, 0x38));
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 3;
    }
}
