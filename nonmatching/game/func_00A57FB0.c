/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;

s32 func_00A57FB0(void *arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4) {
    s32 temp_s5;
    s32 temp_v1;
    u16 temp_s0;

    temp_s0 = M2C_FIELD(arg0, u16 *, 0x10C);
    temp_s5 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF;
    if (temp_s5 < 0x28) {
        if (((func_009B30B0(arg1, arg2) & 0xFFFF) < 0x21) && (temp_s5 < 0x21)) {
            return 1;
        }
        if ((func_009B30B0(temp_s0, arg2) & 0xFFFF) >= 0x29) {
            if ((func_009B30B0(temp_s0, arg1) & 0xFFFF) < 0x50) {
                if ((func_009B30B0(arg2, temp_s0) & 0xFFFF) < 0x21) {
                    if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x1000) {
                        if ((func_009B30B0(temp_s0, arg1) & 0xFFFF) < 0x11) {
                            goto block_19;
                        }
                        goto block_20;
                    }
block_19:
                    return 1;
                }
block_20:
                if ((M2C_FIELD(arg0, s32 *, 0x1C) >= (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) && ((func_009B30B0(arg2, temp_s0) & 0xFFFF) < 0x31) && ((func_009B30B0(arg2, M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x41) && ((func_009B30B0(temp_s0, arg1) & 0xFFFF) < 0x60)) {
                    return 1;
                }
                if (((func_009B30B0(arg2, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x30) && ((arg3 & 0xFFFF) < 0x31)) {
                    if (((func_009B30B0(arg2, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x21) && ((arg4 & 0xFFFF) < 0x29)) {
                        goto block_29;
                    }
                    if (((func_009B30B0(arg2, arg1) & 0xFFFF) >= 0x11) || ((temp_v1 = arg4 & 0xFFFF, ((temp_v1 < 0x28) == 0)) && ((temp_v1 >= 0x30) || ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) >= 0x21)))) {
                        goto block_36;
                    }
block_29:
                    return 1;
                }
                goto block_36;
            }
            goto block_36;
        }
        return 1;
    }
block_36:
    return 0;
}
