/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
s16 func_00A518A0(void *, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_00AB4460();                                /* extern */
extern void *Pes6Ball_Current;

void func_00A524F0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_a0;

    if ((M2C_FIELD(arg0, u8 *, 0x4B) == 0) && ((0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < arg2) && ((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) < 0x19) && (M2C_FIELD(((func_00AB4460() * 4) + Pes6Ball_Current), s32 *, 0xFC) >= 0x3001)) {
        M2C_FIELD(arg0, s16 *, 0x3A) = 0;
        M2C_FIELD(arg0, s16 *, 0x2E) = 1;
        return;
    }
    if (arg1 >= 0x801) {
        M2C_FIELD(arg0, s16 *, 0x3A) = 0;
        M2C_FIELD(arg0, s16 *, 0x2E) = 1;
        return;
    }
    if ((M2C_FIELD(arg0, u16 *, 0x30) == 3) && ((0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < arg2)) {
        M2C_FIELD(arg0, s16 *, 0x3A) = 0;
        return;
    }
    temp_a0 = M2C_FIELD(arg0, u8 *, 0x5C) * 0xC;
    if ((0x1B00 - temp_a0) >= arg2) {
        if ((arg1 < 0x581) && (((0x1900 - temp_a0) >= arg2) || (arg1 < 0x201))) {
            goto block_28;
        }
        goto block_14;
    }
block_14:
    if (arg2 < M2C_FIELD(arg0, s32 *, 0x58)) {
        if (arg1 < 0x481) {
            if (((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) < 0x21) && ((0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(((func_00AB4460() * 4) + Pes6Ball_Current), s32 *, 0xFC))) {
                goto block_17;
            }
block_28:
            if (((0x1200 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) >= arg2) && (M2C_FIELD(arg0, u16 *, 0x30) == 0)) {
                M2C_FIELD(arg0, s16 *, 0x3A) = func_00A518A0(arg0, arg1, arg2, arg3, arg4, arg6, arg7);
            } else {
                goto block_22;
            }
        } else {
            goto block_17;
        }
    } else {
block_17:
        if ((arg2 < (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) && ((arg5 & 0xFFFF) >= 0x1000) && (M2C_FIELD(arg0, u16 *, 0x30) != 0) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < M2C_FIELD(arg0, s32 *, 0x58))) {
block_22:
            M2C_FIELD(arg0, s16 *, 0x3A) = 2;
        } else {
            M2C_FIELD(arg0, s16 *, 0x3A) = 0;
        }
    }
}
