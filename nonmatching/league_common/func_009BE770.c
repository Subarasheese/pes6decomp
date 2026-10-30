/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7840(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
s32 func_00221D10(s32, s32, M2C_UNK);               /* extern */
s32 Pes6Team_GetPlayerId(s32, s32, M2C_UNK);               /* extern */
s32 func_0095C390(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
extern void *D_003EA9CC;

void func_009BE770(void) {
    s32 temp_s0;
    s32 var_s3;
    s32 var_s4;
    u16 temp_s5;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = D_003EA9CC;
    var_s3 = 0;
    if (temp_s2 != NULL) {
        func_001D7D60(M2C_FIELD(temp_s2, s32 *, 4), 1);
        func_001D7D60(M2C_FIELD(temp_s2, s32 *, 8), 1);
        func_001D7D60(M2C_FIELD(temp_s2, s32 *, 0xC), 1);
        func_001D7840(M2C_FIELD(temp_s2, s32 *, 8), 2);
        temp_s5 = M2C_FIELD(temp_s2, u16 *, 0x7A);
        temp_v0 = func_00970870(temp_s5);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x44), 3, (M2C_FIELD(temp_v0, u8 *, 0x24) & 0x3F) + 0x94);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x48), 6, ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF);
        if ((M2C_FIELD(temp_v0, u16 *, 0x3C) & 0x1FF) < 0xDD) {
            var_s3 = 0xFF;
            var_s4 = 0;
loop_6:
            if ((var_s4 & 0xFF) < 0x20) {
                if ((var_s3 & 0xFF) == 0xFF) {
                    if ((temp_s5 & 0xFFFF) == (Pes6Team_GetPlayerId(M2C_FIELD(temp_v0, u16 *, 0x3C) & 0x1FF, var_s4, 0) & 0xFFFF)) {
                        var_s3 = ((func_00221D10(M2C_FIELD(temp_v0, u16 *, 0x3C) & 0x1FF, var_s4, 0) & 0xFF) + 1) & 0xFF;
                    }
                    var_s4 = (var_s4 + 1) & 0xFF;
                    goto loop_6;
                }
            }
        }
        temp_s0 = var_s3 & 0xFF;
        if (temp_s0 != 0) {
            func_009737C0(M2C_FIELD(temp_s2, s32 *, 0x50), 1);
            func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x50), 0, temp_s0);
        } else {
            func_009737C0(M2C_FIELD(temp_s2, s32 *, 0x50), 0);
        }
        func_00973480(M2C_FIELD(temp_s2, s32 *, 0x18), (u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3C);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x54), 1, func_0095C390(temp_s5));
    }
}
