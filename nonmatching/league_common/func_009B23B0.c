/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B9A50(s32, s32);                    /* extern */
M2C_UNK func_001D7D60(s32, s32);                    /* extern */
M2C_UNK func_001F3D10(s32, s32);                    /* extern */
M2C_UNK func_00956A80(s32, s32);                    /* extern */
M2C_UNK func_00971B80(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00971CE0(s32, s32);                    /* extern */
M2C_UNK func_00972020(s32, s32);                    /* extern */
M2C_UNK func_00973470(s32, s32);                    /* extern */
void *func_009A8D80();                              /* extern */

void func_009B23B0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 var_s1;
    void *temp_v0;
    void *var_s0;

    temp_v0 = func_009A8D80();
    if (temp_v0 != NULL) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x10);
        if (temp_a0 != 0) {
            func_001D7D60(temp_a0, arg0 & 0xFF);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x5C);
        if (temp_a0_2 != 0) {
            func_001D7D60(temp_a0_2, arg0 & 0xFF);
        }
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0_3 = M2C_FIELD(var_s0, s32 *, 0x60);
            if (temp_a0_3 != 0) {
                func_001D7D60(temp_a0_3, arg0 & 0xFF);
            }
            temp_a0_4 = M2C_FIELD(var_s0, s32 *, 0xE0);
            if (temp_a0_4 != 0) {
                func_00973470(temp_a0_4, arg0 & 0xFF);
            }
            temp_a0_5 = M2C_FIELD(var_s0, s32 *, 0x160);
            if (temp_a0_5 != 0) {
                func_001D7D60(temp_a0_5, arg0 & 0xFF);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
        temp_a0_6 = M2C_FIELD(temp_v0, s32 *, 0xCB0);
        if (temp_a0_6 != 0) {
            func_00972020(temp_a0_6, arg0 & 0xFF);
        }
        temp_a0_7 = M2C_FIELD(temp_v0, s32 *, 0x560);
        if (temp_a0_7 != 0) {
            func_001D7D60(temp_a0_7, 0);
        }
        temp_a0_8 = M2C_FIELD(temp_v0, s32 *, 0xCA8);
        if (temp_a0_8 != 0) {
            func_00971CE0(temp_a0_8, arg0 & 0xFF);
            func_00971B80(M2C_FIELD(temp_v0, s32 *, 0xCA8), 2, 0);
        }
        temp_a0_9 = M2C_FIELD(temp_v0, s32 *, 0xCAC);
        if (temp_a0_9 != 0) {
            func_00971CE0(temp_a0_9, arg0 & 0xFF);
        }
        temp_a0_10 = M2C_FIELD(temp_v0, s32 *, 0x14);
        if (temp_a0_10 != 0) {
            func_00956A80(temp_a0_10, arg0 & 0xFF);
        }
        temp_a0_11 = M2C_FIELD(temp_v0, s32 *, 0x568);
        if (temp_a0_11 != 0) {
            func_001B9A50(temp_a0_11, arg0 & 0xFF);
        }
        temp_a0_12 = M2C_FIELD(temp_v0, s32 *, 0x56C);
        if (temp_a0_12 != 0) {
            func_001F3D10(temp_a0_12, arg0 & 0xFF);
        }
    }
}
