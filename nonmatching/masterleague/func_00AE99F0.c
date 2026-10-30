/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00AE3240(void);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00AE9710();                            /* extern */
M2C_UNK func_00AE9830();                            /* extern */
M2C_UNK func_00AE9900();                            /* extern */

void func_00AE99F0(void) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_9;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s3;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    void *temp_a0_2;
    void *temp_a0_5;
    void *temp_a0_8;
    void *temp_s4;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        func_00AE9900();
        temp_v0_2 = func_00AE3240();
        if (temp_v0_2 != 0) {
            var_s2 = 0;
            do {
                temp_a0 = M2C_FIELD((temp_v0_2 + ((var_s2 & 0xFF) * 4)), s32 *, 0x1B4);
                if (temp_a0 != 0) {
                    func_00957070(temp_a0);
                }
                var_s2 = (var_s2 + 1) & 0xFF;
            } while (var_s2 < 2);
            temp_a0_2 = M2C_FIELD(temp_v0_2, void **, 0x198);
            if (temp_a0_2 != NULL) {
                func_001D4E00(temp_a0_2);
                M2C_FIELD(temp_v0_2, void **, 0x198) = NULL;
            }
        }
        func_00AE9830();
        temp_v0_3 = func_00AE3240();
        if (temp_v0_3 != 0) {
            temp_a0_3 = M2C_FIELD(temp_v0_3, s32 *, 0x628);
            if (temp_a0_3 != 0) {
                func_001EDD90(temp_a0_3);
            }
            var_s2_2 = 0;
            do {
                temp_a0_4 = M2C_FIELD((temp_v0_3 + ((var_s2_2 & 0xFF) * 4)), s32 *, 0x610);
                if (temp_a0_4 != 0) {
                    func_00957070(temp_a0_4);
                }
                var_s2_2 = (var_s2_2 + 1) & 0xFF;
            } while (var_s2_2 < 2);
            temp_a0_5 = M2C_FIELD(temp_v0_3, void **, 0x5F8);
            if (temp_a0_5 != NULL) {
                func_001D4E00(temp_a0_5);
                M2C_FIELD(temp_v0_3, void **, 0x5F8) = NULL;
            }
        }
        temp_v0_4 = func_00AE3240();
        if (temp_v0_4 != 0) {
            var_s2_3 = 0;
            do {
                temp_a0_6 = M2C_FIELD((temp_v0_4 + ((var_s2_3 & 0xFF) * 4)), s32 *, 0xAEC);
                if (temp_a0_6 != 0) {
                    func_00957070(temp_a0_6);
                }
                var_s2_3 = (var_s2_3 + 1) & 0xFF;
            } while (var_s2_3 < 2);
            temp_a0_7 = M2C_FIELD(temp_v0_4, s32 *, 0xB04);
            if (temp_a0_7 != 0) {
                func_00971E30(temp_a0_7);
            }
            temp_a0_8 = M2C_FIELD(temp_v0_4, void **, 0x7C4);
            if (temp_a0_8 != NULL) {
                func_001D4E00(temp_a0_8);
                M2C_FIELD(temp_v0_4, void **, 0x7C4) = NULL;
            }
        }
        func_00AE9710();
        var_s3 = 0;
        do {
            var_s2_4 = 0;
loop_28:
            temp_s4 = temp_v0 + ((var_s3 & 0xFF) * 0x168) + ((var_s2_4 & 0xFF) * 0xE10);
            temp_a0_9 = M2C_FIELD(temp_s4, s32 *, 0x3F28);
            if (temp_a0_9 != 0) {
                func_001EDD90(temp_a0_9);
                M2C_FIELD(temp_s4, s32 *, 0x3F28) = 0;
            }
            temp_a0_10 = M2C_FIELD(temp_s4, s32 *, 0x3F2C);
            if (temp_a0_10 != 0) {
                func_001EDD90(temp_a0_10);
                M2C_FIELD(temp_s4, s32 *, 0x3F2C) = 0;
            }
            temp_a0_11 = M2C_FIELD(temp_s4, s32 *, 0x3F30);
            if (temp_a0_11 != 0) {
                func_001EDD90(temp_a0_11);
                M2C_FIELD(temp_s4, s32 *, 0x3F30) = 0;
            }
            temp_a0_12 = M2C_FIELD(temp_s4, s32 *, 0x3F34);
            if (temp_a0_12 != 0) {
                func_001EDD90(temp_a0_12);
                M2C_FIELD(temp_s4, s32 *, 0x3F34) = 0;
            }
            var_s2_4 = (var_s2_4 + 1) & 0xFF;
            if (var_s2_4 < 2) {
                goto loop_28;
            }
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 0xA);
    }
}
