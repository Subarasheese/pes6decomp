/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00952A50(s32);                             /* extern */
s32 func_009B3070(s32, u16);                        /* extern */
extern char D_00591BE4[];
extern char Pes6MatchSquads[];
extern char D_00CB5382[];

s32 func_00C0CBF0(void *arg0, s32 arg1, void *arg2) {
    s32 temp_s0;
    s32 temp_v0;

    if ((s32) (*(u8 *)D_00CB5382) < 4) {
        goto block_20;
    }
    if (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x81) & 0x7F, 0x28U) >= 0x32) {
        if (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U) >= 0x46) {
            if (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U) >= 0x46) {
                temp_s0 = func_009B3070(arg1, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF;
                if ((M2C_FIELD(arg0, u8 *, 0x16) == 2) && ((u32) M2C_FIELD(arg2, u32 *, 0x10) < (u8) (*(u8 *)D_00591BE4)) && ((func_00952A50(arg1) & 0xFF) >= 0x51)) {
                    temp_v0 = temp_s0 & 0xFFFF;
                    if ((temp_v0 >= 0x1801) && (temp_v0 < 0x4000)) {
                        return 1;
                    }
                }
                goto block_20;
            }
            goto block_20;
        }
        goto block_20;
    }
block_20:
    return 0;
}
