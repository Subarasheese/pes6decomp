/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
s32 func_00225680(s32);                             /* extern */
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C4A0(s32);                             /* extern */
M2C_UNK func_00972040(s32, s32, s32);               /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00B61180(u8, u8);                      /* extern */
s32 func_00B611F0(u8);                              /* extern */
s32 func_00B61220(u8);                              /* extern */

void func_00B63A40(s32 arg0) {
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    u32 temp_v0;
    u8 temp_s0;

    temp_v0 = func_00B62380();
    if ((temp_v0 != 0) && (temp_s0 = M2C_FIELD(temp_v0, u8 *, 0x4BE), (((s32) temp_s0 < func_00B611F0(M2C_FIELD(temp_v0, u8 *, 0x4C0))) != 0))) {
        func_00B61180(M2C_FIELD(temp_v0, u8 *, 0x4C0), temp_s0);
        temp_s0_2 = func_00225680(arg0) & 0xFFFF;
        temp_s1 = (s32) M2C_FIELD(temp_v0, u8 *, 0x4BE) % func_00B61220(M2C_FIELD(temp_v0, u8 *, 0x4C0));
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x50), temp_s1, (s32) M2C_FIELD(temp_v0, u8 *, 0x4BE) / func_00B61220(M2C_FIELD(temp_v0, u8 *, 0x4C0)));
        temp_s1_2 = temp_s0_2 & 0xFFFF;
        if (temp_s1_2 == 0xFFFF) {
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x98), 0);
            func_00956A80(M2C_FIELD(temp_v0, s32 *, 0x9C), 0);
        } else {
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x98), 0xC, func_0095C4A0(temp_s0_2));
            func_00956A90(M2C_FIELD(temp_v0, s32 *, 0x9C), 1, temp_s1_2, 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x98), 1);
            func_00956A80(M2C_FIELD(temp_v0, s32 *, 0x9C), 1);
        }
    }
}
