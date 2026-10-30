/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;

s32 func_00B0F500(void *arg0, u16 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v1;
    void *temp_a0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 < 0x1D00) {
        if ((temp_v0 >= 0x401) && !(M2C_FIELD(arg0, s32 *, 0xB0) & 0x200)) {
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
            if ((temp_v1 != 0x13) && (temp_v1 != 0xC1)) {
                goto block_9;
            }
            if (!(M2C_FIELD(temp_a0, f32 *, 0x38) < 8.0f)) {
                return 1;
            }
block_9:
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) >= 0x19) {
                temp_v0_2 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
                if ((temp_v0_2 < 0x61) && (temp_v0_2 >= 0x20)) {
                    return 1;
                }
                temp_v0_3 = func_009B30B0(arg1, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
                if ((temp_v0_3 >= 0x21) && (temp_v0_3 < 0x70)) {
                    return 1;
                }
                goto block_19;
            }
            goto block_19;
        }
        goto block_19;
    }
block_19:
    return 0;
}
