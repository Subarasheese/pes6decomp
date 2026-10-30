/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_0099D280(s32);                         /* extern */
M2C_UNK func_0099D530(s32);                         /* extern */

void func_009B36C0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_v1;

    temp_s0 = arg1 << 5;
    temp_a0 = M2C_FIELD((temp_s0 + arg0), s32 *, 0x44);
    if (temp_a0 != 0) {
        func_0099D530(temp_a0);
        M2C_FIELD((temp_s0 + arg0), s32 *, 0x44) = 0;
    }
    temp_a0_2 = M2C_FIELD((temp_s0 + arg0), s32 *, 0x48);
    if (temp_a0_2 != 0) {
        func_0099D280(temp_a0_2);
        M2C_FIELD((temp_s0 + arg0), s32 *, 0x48) = 0;
    }
    temp_a0_3 = M2C_FIELD((temp_s0 + arg0), void **, 0x4C);
    if (temp_a0_3 != NULL) {
        func_001D7F10(temp_a0_3);
        M2C_FIELD((temp_s0 + arg0), s32 *, 0x4C) = 0;
    }
    temp_v1 = temp_s0 + arg0;
    M2C_FIELD(temp_v1, s32 *, 0x38) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x40) = 0;
    temp_a0_4 = M2C_FIELD(temp_v1, void **, 0x30);
    if (temp_a0_4 != NULL) {
        func_001D7F10(temp_a0_4);
        M2C_FIELD((temp_s0 + arg0), s32 *, 0x30) = 0;
    }
    temp_a0_5 = M2C_FIELD((temp_s0 + arg0), void **, 0x34);
    if (temp_a0_5 != NULL) {
        func_001D7F10(temp_a0_5);
        M2C_FIELD((temp_s0 + arg0), s32 *, 0x34) = 0;
    }
}
