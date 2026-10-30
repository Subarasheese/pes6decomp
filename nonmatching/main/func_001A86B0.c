/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00150420(s32, s32, M2C_UNK, s16, s16, s8 *); /* extern */
M2C_UNK func_001CDAD0(void *);                      /* extern */
extern char D_00397970[];
extern char D_00520750[];
extern char D_00521680[];

void func_001A86B0(void *arg0) {
    s8 spA8;
    s16 spAC;
    s16 spAE;
    M2C_UNK *var_s3;
    M2C_UNK *var_s4;
    s16 temp_a0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_7;
    s32 *var_fp;
    s32 *var_s2;
    s32 temp_v1_6;
    s32 var_s5;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s8 *var_v1;
    u8 temp_v0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_s1, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x44);
    func_001CDAD0(M2C_FIELD(temp_s1, void **, 8));
    var_s7 = 0;
    var_fp = ((void *)D_00520750);
    var_s4 = ((void *)D_00397970);
    M2C_FIELD(temp_s1, s32 *, 0xC) = (s32) *M2C_FIELD(M2C_FIELD(temp_s1, void **, 8), s32 **, 4);
    M2C_FIELD(temp_s1, s32 *, 0x10) = (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s1, void **, 8), s32 **, 4), s32 *, 4);
    do {
        var_s5 = 0;
        var_s3 = ((void *)D_00521680);
        var_s2 = var_fp;
loop_2:
        var_v1 = &spA8;
        var_v0 = 8;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        if (*var_s2 == temp_s1) {
            if (M2C_FIELD(temp_s1, s32 *, 0xC) != 0) {
                spAC = M2C_FIELD(var_s4, s16 *, 4);
                spAE = M2C_FIELD(var_s4, s16 *, 6);
                func_00150420(M2C_FIELD(var_s3, s32 *, 0xC), M2C_FIELD(temp_s1, s32 *, 0xC), 0, M2C_FIELD(var_s4, s16 *, 0), M2C_FIELD(var_s4, s16 *, 2), &spA8);
                temp_a0 = M2C_FIELD(var_s4, s16 *, 0);
                if ((temp_a0 + M2C_FIELD(var_s4, s16 *, 4)) < 0x21) {
                    spAC = -spAC;
                    func_00150420(M2C_FIELD(var_s3, s32 *, 0xC), M2C_FIELD(temp_s1, s32 *, 0xC), 0, (s16) ((s64) ((0x40 - temp_a0) << 0x30) >> 0x30), M2C_FIELD(var_s4, s16 *, 2), &spA8);
                }
            }
            if (M2C_FIELD(temp_s1, s32 *, 0x10) != 0) {
                temp_v1 = M2C_FIELD(var_s4, s16 *, 4);
                var_v0_2 = temp_v1 >> 1;
                if (temp_v1 < 0) {
                    var_v0_2 = (s32) (temp_v1 + 1) >> 1;
                }
                temp_v1_2 = M2C_FIELD(var_s4, s16 *, 6);
                spAC = (s16) var_v0_2;
                var_v0_3 = temp_v1_2 >> 1;
                if (temp_v1_2 < 0) {
                    var_v0_3 = (s32) (temp_v1_2 + 1) >> 1;
                }
                temp_v1_3 = M2C_FIELD(var_s4, s16 *, 0);
                spAE = (s16) var_v0_3;
                var_v0_4 = temp_v1_3 >> 1;
                if (temp_v1_3 < 0) {
                    var_v0_4 = (s32) (temp_v1_3 + 1) >> 1;
                }
                temp_v1_4 = M2C_FIELD(var_s4, s16 *, 2);
                var_v0_5 = temp_v1_4 >> 1;
                if (temp_v1_4 < 0) {
                    var_v0_5 = (s32) (temp_v1_4 + 1) >> 1;
                }
                func_00150420(M2C_FIELD(var_s3, s32 *, 0x10), M2C_FIELD(temp_s1, s32 *, 0x10), 0, (s16) ((s64) ((s64) var_v0_4 << 0x30) >> 0x30), (s16) ((s64) ((s64) var_v0_5 << 0x30) >> 0x30), &spA8);
                temp_v1_5 = M2C_FIELD(var_s4, s16 *, 0);
                if ((temp_v1_5 + M2C_FIELD(var_s4, s16 *, 4)) < 0x21) {
                    temp_v1_6 = 0x40 - temp_v1_5;
                    var_v0_6 = temp_v1_6 >> 1;
                    spAC = -spAC;
                    if (temp_v1_6 < 0) {
                        var_v0_6 = (s32) (temp_v1_6 + 1) >> 1;
                    }
                    temp_v1_7 = M2C_FIELD(var_s4, s16 *, 2);
                    var_v0_7 = temp_v1_7 >> 1;
                    if (temp_v1_7 < 0) {
                        var_v0_7 = (s32) (temp_v1_7 + 1) >> 1;
                    }
                    func_00150420(M2C_FIELD(var_s3, s32 *, 0x10), M2C_FIELD(temp_s1, s32 *, 0x10), 0, (s16) ((s64) ((s64) var_v0_6 << 0x30) >> 0x30), (s16) ((s64) ((s64) var_v0_7 << 0x30) >> 0x30), &spA8);
                }
            }
            temp_v0 = M2C_FIELD(var_s3, u8 *, 0x3F) + 1;
            M2C_FIELD(var_s3, u8 *, 0x3F) = temp_v0;
            *var_s2 = 0;
            if ((temp_v0 & 0xFF) >= 6) {
                M2C_FIELD(var_s3, s8 *, 1) = 2;
            }
        }
        var_s5 += 1;
        var_s3 += 0x40;
        var_s2 += 4;
        if (var_s5 < 0x1A) {
            goto loop_2;
        }
        var_s7 += 1;
        var_fp += 0x68;
        var_s4 += 8;
    } while (var_s7 < 6);
    func_00153FA0(M2C_FIELD(temp_s1, void **, 8));
    M2C_FIELD(temp_s1, void **, 8) = NULL;
    M2C_FIELD(temp_s1, s8 *, 4) = 0;
}
