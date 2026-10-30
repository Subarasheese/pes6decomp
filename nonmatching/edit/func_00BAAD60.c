/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(void *, void *, u8);              /* extern */

s32 func_00BAAD60(void *arg0, void *arg1) {
    s32 temp_v0;
    u8 temp_a2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != M2C_FIELD(arg1, s32 *, 4)) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0xA) == M2C_FIELD(arg1, u8 *, 0xA)) && (M2C_FIELD(arg0, u8 *, 0xC) == M2C_FIELD(arg1, u8 *, 0xC)) && (M2C_FIELD(arg0, u8 *, 0xD) == M2C_FIELD(arg1, u8 *, 0xD)) && (M2C_FIELD(arg0, s32 *, 0x10) == M2C_FIELD(arg1, s32 *, 0x10)) && (M2C_FIELD(arg0, s16 *, 0x14) == M2C_FIELD(arg1, s16 *, 0x14)) && (M2C_FIELD(arg0, s16 *, 0x16) == M2C_FIELD(arg1, s16 *, 0x16)) && (M2C_FIELD(arg0, s16 *, 0x18) == M2C_FIELD(arg1, s16 *, 0x18)) && (M2C_FIELD(arg0, s16 *, 0x1A) == M2C_FIELD(arg1, s16 *, 0x1A)) && (M2C_FIELD(arg0, s16 *, 0x1C) == M2C_FIELD(arg1, s16 *, 0x1C)) && (M2C_FIELD(arg0, u8 *, 0x1E) == M2C_FIELD(arg1, u8 *, 0x1E)) && (M2C_FIELD(arg0, u8 *, 0x1F) == M2C_FIELD(arg1, u8 *, 0x1F)) && (M2C_FIELD(arg0, u8 *, 0x20) == M2C_FIELD(arg1, u8 *, 0x20))) {
        temp_a2 = M2C_FIELD(arg0, u8 *, 0x21);
        if (temp_a2 == M2C_FIELD(arg1, u8 *, 0x21)) {
            if ((temp_v0 == 3) && (func_001C7E10(arg0 + 0x22, arg1 + 0x22, temp_a2) == 0)) {
                return 0;
            }
            return 1;
        }
        goto block_18;
    }
block_18:
    return 0;
}
