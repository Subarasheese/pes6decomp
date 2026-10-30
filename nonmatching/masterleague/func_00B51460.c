/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E4EA0(void *, s32);
extern void func_00B4F080(void *);
extern u32 func_00B526C0(void);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern void * func_00228A80(void);
M2C_UNK func_002E5650(s32, M2C_UNK, u8);            /* extern */
void *func_00970870(s32);                           /* extern */
extern char D_00B80A80[];

void func_00B51460(s32 arg0) {
    s32 *var_s3_2;
    s32 *var_s3_3;
    s32 *var_s4_2;
    s32 temp_a1;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_v1;
    u32 temp_v0;
    u32 temp_v0_4;
    u8 temp_s4;
    void *temp_v0_2;
    void *temp_v0_5;
    void *temp_v0_6;
    void *var_s0;
    void *var_s4;

    var_s4 = func_00228A80();
    temp_v0 = func_00B526C0();
    if (temp_v0 != 0) {
        temp_s3 = arg0 & 0xFFFF;
        if (temp_s3 != 0) {
            temp_v0_2 = func_00970870(arg0);
            if (temp_v0_2 != NULL) {
                var_s0 = NULL;
                var_v1 = 0;
                do {
                    if (M2C_FIELD(var_s4, u16 *, 0xC35A) == temp_s3) {
                        var_s0 = var_s4 + 0xC35A;
                    }
                    var_v1 += 1;
                    var_s4 += 0x56;
                } while (var_v1 < 0x20);
                if (var_s0 != NULL) {
                    var_s3 = 0;
                    var_s4_2 = ((void *)D_00B80A80);
                    do {
                        func_002E5650(func_002E4EA0(M2C_FIELD(temp_v0, void **, 0xD78), var_s3), 0, M2C_FIELD((var_s0 + *var_s4_2), u8 *, 2));
                        var_s3 += 1;
                        var_s4_2 += 4;
                    } while (var_s3 < 0x17);
                }
                func_00B4F080(temp_v0_2);
                M2C_FIELD(temp_v0, s16 *, 0xD24) = 0;
                var_s1 = 0;
                var_s3_2 = ((void *)D_00B80A80);
                do {
                    func_002E5650(func_002E4EA0(M2C_FIELD(temp_v0, void **, 0xD78), var_s1), 1, (u8) M2C_FIELD((temp_v0 + (*var_s3_2 * 4)), s32 *, 0xD7C));
                    var_s1 += 1;
                    temp_a1 = *var_s3_2 * 4;
                    var_s3_2 += 4;
                    M2C_FIELD(temp_v0, s16 *, 0xD24) = (s16) (M2C_FIELD(temp_v0, s16 *, 0xD24) + M2C_FIELD((temp_v0 + temp_a1), s16 *, 0xD7C));
                } while (var_s1 < 0x17);
                if (var_s0 != NULL) {
                    var_s1_2 = 0;
                    var_s3_3 = ((void *)D_00B80A80);
                    do {
                        temp_v0_3 = *var_s3_3;
                        temp_s5 = M2C_FIELD((temp_v0 + (temp_v0_3 * 4)), s32 *, 0xD7C);
                        temp_s4 = M2C_FIELD((var_s0 + temp_v0_3), u8 *, 2);
                        temp_v0_4 = func_00B526C0();
                        if (temp_v0_4 != 0) {
                            if ((s32) temp_s4 < temp_s5) {
                                temp_v0_5 = temp_v0_4 + ((var_s1_2 & 0xFF) * 4);
                                func_001D7D80(M2C_FIELD(temp_v0_5, void **, 0xDD8), 0);
                                func_001D7D60(M2C_FIELD(temp_v0_5, void **, 0xDD8), 1);
                            } else if (temp_s5 < (s32) temp_s4) {
                                temp_v0_6 = temp_v0_4 + ((var_s1_2 & 0xFF) * 4);
                                func_001D7D80(M2C_FIELD(temp_v0_6, void **, 0xDD8), 1);
                                func_001D7D60(M2C_FIELD(temp_v0_6, void **, 0xDD8), 1);
                            } else {
                                func_001D7D60(M2C_FIELD((temp_v0_4 + ((var_s1_2 & 0xFF) * 4)), void **, 0xDD8), 0);
                            }
                        }
                        var_s1_2 += 1;
                        var_s3_3 += 4;
                    } while (var_s1_2 < 0x17);
                }
            }
        }
    }
}
