/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];

s32 func_00B0B4D0(void *arg0) {
    s32 temp_a1;
    u16 temp_v1;
    void *temp_a0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) != 0x34E) {
        if ((M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) && (M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x100U)) {
            goto block_29;
        }
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x21) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x1C);
            if (temp_a1 >= 0x600) {
                temp_a0 = M2C_FIELD(arg0, void **, 4);
                temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
                switch (temp_v1) {                  /* irregular */
                case 0x2:
                    if (M2C_FIELD(temp_a0, f32 *, 0x38) < (f32) (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2)) {
                        return 0;
                    }
                    /* Duplicate return node #30. Try simplifying control flow for better match */
                    return 1;
                case 0xC8:
                    if (((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x140U) && (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < -512.0f)) {
                        goto block_29;
                    }
                    if (!(M2C_FIELD(temp_a0, f32 *, 0x38) < 18.0f)) {
                    case 0x0:
                        if (temp_a1 >= 0xE01) {
                            return 0;
                        }
                        goto block_29;
                    }
block_25:
                default:
                    return 0;
                case 0xBF:
                case 0x12F:
                    if (temp_a1 >= 0xE01) {
                        return 0;
                    }
                    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) >= 0x20) {
                        goto block_29;
                    }
                    goto block_25;
                }
            } else {
block_29:
                return 1;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
