/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
u32 func_009B3350(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591F1C[];
extern char D_00591F20[];

s32 func_00AAE380(void *arg0) {
    s32 temp_s0;
    u16 temp_s1_3;
    u32 temp_s1_2;
    void *temp_s1;

    temp_s1 = Pes6Ball_Current;
    if (M2C_FIELD(temp_s1, u16 *, 0x84) == 1) {
        if ((s32) M2C_FIELD(temp_s1, u16 *, 0x6E) >= 2) {
            temp_s1_2 = func_009B3350(temp_s1, (s32) M2C_FIELD(temp_s1, f32 *, 0x1454), (s32) M2C_FIELD(temp_s1, f32 *, 0x145C));
            if (func_009B3350(temp_s1, (*(s32 *)D_00591F1C), (*(s32 *)D_00591F20)) >= temp_s1_2) {
                if ((M2C_FIELD(arg0, u8 *, 0x16) == 4) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x70)) {
                    goto block_14;
                }
                if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) < 0x21) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x801)) {
                    temp_s1_3 = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF;
                    temp_s0 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), func_009B3480(arg0, (f32) (*(s32 *)D_00591F1C), (f32) (*(s32 *)D_00591F20)) & 0xFFFF) & 0xFFFF;
                    if (temp_s0 < (func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), temp_s1_3) & 0xFFFF)) {
                        M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) (*(s32 *)D_00591F1C);
                        M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(s32 *)D_00591F20);
                        return 1;
                    }
                }
                goto block_14;
            }
            goto block_14;
        }
        goto block_14;
    }
block_14:
    return 0;
}
