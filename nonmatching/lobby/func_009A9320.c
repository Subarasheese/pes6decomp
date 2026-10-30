/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_0099D530(s32);                         /* extern */

void func_009A9320(void *arg0, s32 arg1) {
    s32 temp_a0_7;
    s32 var_s0;
    s32 var_s4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_8;
    void *temp_a0_9;
    void *var_s2;
    void *var_s3;

    if (arg0 != NULL) {
        var_s0 = 0;
        if (arg1 > 0) {
            var_s3 = arg0;
            do {
                temp_a0 = M2C_FIELD(var_s3, void **, 0);
                if (temp_a0 != NULL) {
                    func_001D7F10(temp_a0);
                    M2C_FIELD(var_s3, void **, 0) = NULL;
                }
                M2C_FIELD(var_s3, s32 *, 4) = 0;
                M2C_FIELD(var_s3, s32 *, 8) = 0;
                M2C_FIELD(var_s3, s32 *, 0xC) = 0;
                M2C_FIELD(var_s3, s32 *, 0x10) = 0;
                M2C_FIELD(var_s3, s32 *, 0x14) = 0;
                M2C_FIELD(var_s3, s32 *, 0x18) = 0;
                M2C_FIELD(var_s3, s32 *, 0x1C) = 0;
                temp_a0_2 = M2C_FIELD(var_s3, void **, 0x20);
                if (temp_a0_2 != NULL) {
                    func_001D7F10(temp_a0_2);
                    M2C_FIELD(var_s3, void **, 0x20) = NULL;
                }
                M2C_FIELD(var_s3, s32 *, 0x24) = 0;
                M2C_FIELD(var_s3, s32 *, 0x28) = 0;
                M2C_FIELD(var_s3, s32 *, 0x2C) = 0;
                M2C_FIELD(var_s3, s32 *, 0x30) = 0;
                temp_a0_3 = M2C_FIELD(var_s3, void **, 0x38);
                if (temp_a0_3 != NULL) {
                    func_001D7F10(temp_a0_3);
                    M2C_FIELD(var_s3, void **, 0x38) = NULL;
                }
                temp_a0_4 = M2C_FIELD(var_s3, void **, 0x3C);
                if (temp_a0_4 != NULL) {
                    func_001D7F10(temp_a0_4);
                    M2C_FIELD(var_s3, void **, 0x3C) = NULL;
                }
                M2C_FIELD(var_s3, s32 *, 0x40) = 0;
                temp_a0_5 = M2C_FIELD(var_s3, void **, 0x44);
                if (temp_a0_5 != NULL) {
                    func_001D7F10(temp_a0_5);
                    M2C_FIELD(var_s3, void **, 0x44) = NULL;
                }
                temp_a0_6 = M2C_FIELD(var_s3, void **, 0x48);
                if (temp_a0_6 != NULL) {
                    func_001D7F10(temp_a0_6);
                    M2C_FIELD(var_s3, void **, 0x48) = NULL;
                }
                M2C_FIELD(var_s3, s32 *, 0x4C) = 0;
                var_s4 = 0;
                var_s2 = var_s3;
loop_16:
                temp_a0_7 = M2C_FIELD(var_s2, s32 *, 0x70);
                if (temp_a0_7 != 0) {
                    func_0099D530(temp_a0_7);
                    M2C_FIELD(var_s2, s32 *, 0x70) = 0;
                }
                var_s4 += 1;
                var_s2 += 4;
                if (var_s4 < 2) {
                    goto loop_16;
                }
                temp_a0_8 = M2C_FIELD(var_s3, void **, 0x7C);
                if (temp_a0_8 != NULL) {
                    func_001D7F10(temp_a0_8);
                    M2C_FIELD(var_s3, void **, 0x7C) = NULL;
                }
                temp_a0_9 = M2C_FIELD(var_s3, void **, 0x78);
                if (temp_a0_9 != NULL) {
                    func_001D7F10(temp_a0_9);
                    M2C_FIELD(var_s3, void **, 0x78) = NULL;
                }
                var_s0 += 1;
                var_s3 += 0x80;
            } while (var_s0 < arg1);
        }
    }
}
