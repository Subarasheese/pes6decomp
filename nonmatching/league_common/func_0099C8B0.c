/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0022BFF0();                              /* extern */
extern char D_005922E8[];

s32 func_0099C8B0(void) {
    u8 temp_a0;
    u8 var_v1;
    void *temp_v0;

    if ((*(u8 *)D_005922E8) == 0) {
        return 0xFF;
    }
    temp_v0 = func_0022BFF0();
    if (temp_v0 != NULL) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x16);
        if (((u64) ((s64) temp_a0 << 0x3A) >> 0x3F) == 0) {
            return 0xFF;
        }
        (*(u8 *)D_005922E8) = 0;
        if (((u64) ((s64) temp_a0 << 0x39) >> 0x3F) != 0) {
            M2C_FIELD(temp_v0, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_v0, u8 *, 0x17) & ~2) | 2);
            var_v1 = (M2C_FIELD(temp_v0, u8 *, 0x17) & ~8) | 8;
        } else {
            M2C_FIELD(temp_v0, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_v0, u8 *, 0x17) & ~2) | 2);
            var_v1 = (M2C_FIELD(temp_v0, u8 *, 0x17) & ~4) | 4;
        }
        M2C_FIELD(temp_v0, u8 *, 0x17) = var_v1;
        if (((M2C_FIELD(temp_v0, u8 *, 0x10) + M2C_FIELD(temp_v0, u8 *, 0x11)) & 0xFF) >= ((M2C_FIELD(temp_v0, u8 *, 0xB) + M2C_FIELD(temp_v0, u8 *, 0xC)) & 0xFF)) {
            return 1;
        }
        return 0;
    }
    return 0xFF;
}
