/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern s32 func_001F3D10(s32, u8);
extern u32 func_009AB630(void);
extern void func_001B9A50(void *, s32);
M2C_UNK func_00956A80(s32, s32);                    /* extern */
M2C_UNK func_00971B80(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00971CE0(s32, s32);                    /* extern */
M2C_UNK func_00972020(s32, s32);                    /* extern */
M2C_UNK func_00973470(s32, s32);                    /* extern */

void func_009AAB90(s32 arg0) {
    s32 temp_a0_11;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_7;

    temp_v0 = func_009AB630();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 0x10);
        if (temp_a0 != NULL) {
            func_001D7D60(temp_a0, arg0 & 0xFF);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0x54);
        if (temp_a0_2 != NULL) {
            func_001D7D60(temp_a0_2, arg0 & 0xFF);
        }
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0_3 = M2C_FIELD(var_s0, void **, 0x58);
            if (temp_a0_3 != NULL) {
                func_001D7D60(temp_a0_3, arg0 & 0xFF);
            }
            temp_a0_4 = M2C_FIELD(var_s0, s32 *, 0xD8);
            if (temp_a0_4 != 0) {
                func_00973470(temp_a0_4, arg0 & 0xFF);
            }
            temp_a0_5 = M2C_FIELD(var_s0, void **, 0x158);
            if (temp_a0_5 != NULL) {
                func_001D7D60(temp_a0_5, arg0 & 0xFF);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
        temp_a0_6 = M2C_FIELD(temp_v0, s32 *, 0x854);
        if (temp_a0_6 != 0) {
            func_00972020(temp_a0_6, arg0 & 0xFF);
        }
        temp_a0_7 = M2C_FIELD(temp_v0, void **, 0x558);
        if (temp_a0_7 != NULL) {
            func_001D7D60(temp_a0_7, 0);
        }
        temp_a0_8 = M2C_FIELD(temp_v0, s32 *, 0x850);
        if (temp_a0_8 != 0) {
            func_00971CE0(temp_a0_8, arg0 & 0xFF);
            func_00971B80(M2C_FIELD(temp_v0, s32 *, 0x850), 2, 0);
        }
        temp_a0_9 = M2C_FIELD(temp_v0, s32 *, 0x14);
        if (temp_a0_9 != 0) {
            func_00956A80(temp_a0_9, arg0 & 0xFF);
        }
        temp_a0_10 = M2C_FIELD(temp_v0, void **, 0x560);
        if (temp_a0_10 != NULL) {
            func_001B9A50(temp_a0_10, arg0 & 0xFF);
        }
        temp_a0_11 = M2C_FIELD(temp_v0, s32 *, 0x564);
        if (temp_a0_11 != 0) {
            func_001F3D10(temp_a0_11, arg0 & 0xFF);
        }
    }
}
