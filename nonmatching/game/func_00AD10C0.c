/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099DFF0();                                /* extern */
s32 func_009B30B0(u16, s32);                        /* extern */
extern char Pes6MatchSquads[];

s32 func_00AD10C0(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s8 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (!(temp_v1 & 0x100) && (temp_v1 & 0x4000)) {
        M2C_FIELD(arg0, s8 *, 0x4A) = 1;
        M2C_FIELD(arg0, s8 *, 0x50) = 0;
        temp_s1 = func_0099DFF0() & 0xFFFF;
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), temp_s1) & 0xFFFF) >= 0xE) {
            var_v0 = (((M2C_FIELD(arg0, u16 *, 0x26) - (temp_s1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
        } else {
            var_v0 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1;
        }
        M2C_FIELD(arg0, s8 *, 0x4F) = var_v0;
        M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        return 1;
    }
    return 0;
}
