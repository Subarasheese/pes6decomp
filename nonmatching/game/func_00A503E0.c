/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B3350(void *, s32, s32);                /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00AA3210(void *, f32, f32);                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591F30[];
extern char D_005926D8[];

s32 func_00A503E0(void *arg0, u16 arg1, s32 arg2, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;
    s32 temp_f1;
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_s7;
    u16 temp_fp;
    u16 temp_s1;

    temp_f0 = (s32) fparg3;
    temp_s6 = func_009B3350(Pes6Ball_Current, (s32) fparg0, (s32) fparg1);
    temp_f0_2 = (s32) fparg2;
    temp_s7 = func_009B3350(Pes6Ball_Current, temp_f0_2, temp_f0);
    if ((M2C_FIELD(arg0, u8 *, 0x16) == 0x1B) && ((M2C_FIELD(arg0, s16 *, 0x1CE) != 0) || (M2C_FIELD(arg0, s16 *, 0x1D0) != 0)) && (arg2 >= 0x101)) {
        goto block_48;
    }
    if (((*(s32 *)D_00591F30) != 0x7FFF) && (arg2 < 0x800) && (temp_s6 < temp_s7) && !((*(f32 *)D_005926D8) <= (f32) func_002AE670(0x32))) {
        return 0;
    }
    if (fparg0 != 32767.0f) {
        temp_s1 = func_009B3480(arg0, fparg2, fparg3) & 0xFFFF;
        temp_fp = func_009B3480(arg0, fparg0, fparg1) & 0xFFFF;
        if ((func_009B30B0(arg1, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x21) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) < 0x41) {
                if ((M2C_FIELD(arg0, s32 *, 0x1C) >= 0xD01) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) >= 0x181U)) {
                    temp_f1 = (s32) (fparg0 - fparg2);
                    temp_f0_3 = (s32) (fparg1 - fparg3);
                    if (((temp_f1 * temp_f1) + (temp_f0_3 * temp_f0_3)) < 0x4001) {
                        temp_s0 = func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), temp_fp) & 0xFFFF;
                        if (temp_s0 < (func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), temp_s1) & 0xFFFF)) {
                            return 0;
                        }
                    }
                }
                goto block_48;
            }
            goto block_17;
        }
block_17:
        if (M2C_FIELD(arg0, u8 *, 0x16) == 4) {
            if (((func_009B30B0(arg1, M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) < 0x21) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) < 9)) {
                goto block_48;
            }
            goto block_20;
        }
block_20:
        if (arg2 < 0x4000) {
            return 0;
        }
        if (arg2 >= 0x10001) {
            if (((func_009B30B0(temp_s1, M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)))) {
                goto block_48;
            }
            goto block_26;
        }
block_26:
        if (temp_s6 >= temp_s7) {
            if (arg2 >= 0x100001) {
                if ((func_009B33A0(arg0, temp_f0_2, temp_f0) >= 0x40001U) && (func_00AA3210(arg0, fparg2, fparg3) < 0x400000) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), func_009B3480(arg0, fparg2, fparg3)) & 0xFFFF) < 0x21) && ((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), arg1) & 0xFFFF) >= 0x78)) {
                    goto block_48;
                }
                goto block_30;
            }
block_30:
            return 0;
        }
        goto block_48;
    }
block_48:
    return 1;
}
