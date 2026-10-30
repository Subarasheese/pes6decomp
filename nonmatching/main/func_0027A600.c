/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern void *Pes6Ball_Current;

void func_0027A600(void *arg0, u8 arg1) {
    s32 temp_a1;
    u8 var_s0;
    void *temp_a1_2;

    var_s0 = arg1;
    if ((func_009E1C90(1) & 0xFF) == 1) {
        if ((var_s0 & 0xFF) == 1) {
            if (((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x140U) && (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) < -512.0f)) {
                goto block_7;
            }
            temp_a1 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFF;
            if (temp_a1 >= 0x70) {
                if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) < -384.0f) {
block_7:
                    var_s0 = 4;
                } else {
                    goto block_15;
                }
            } else {
block_15:
                if (temp_a1 < 5) {
                    var_s0 = 5;
                }
            }
        }
    }
    temp_a1_2 = M2C_FIELD(arg0, void **, 4);
    if ((M2C_FIELD(temp_a1_2, u8 *, 9) == 0) && ((var_s0 & 0xFF) == 5)) {
        M2C_FIELD(temp_a1_2, s8 *, 0x74) = 1;
    } else {
        M2C_FIELD(temp_a1_2, s8 *, 0x74) = 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 9) = var_s0;
}
