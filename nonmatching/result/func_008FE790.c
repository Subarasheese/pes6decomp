/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
s32 func_00C17E10(s32, s32);                        /* extern */
extern s32 D_003EA648;
extern char D_00921CB0[];
extern char D_00921D18[];

void func_008FE790(void) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    s32 var_s3;
    s32 var_s4;
    s32 var_s7;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v1;

    if ((*(s32 *)D_00921D18) != 0) {
        var_s7 = 0;
        do {
            var_s4 = 0;
            temp_s5 = (var_s7 & 0xFF) * 0x90;
loop_3:
            temp_a0 = func_00C17E10(var_s7 & 0xFF, var_s4 & 0xFF) & 0xFF;
            if (temp_a0 != 0xFF) {
                temp_s2 = temp_a0 * 8;
                temp_s1 = M2C_FIELD((temp_s5 + M2C_FIELD(((void *)D_00921CB0), s32 *, 0) + temp_s2), s32 *, 4);
                var_s3 = 0;
                if ((temp_s1 > 0) && (temp_s1 > 0)) {
                    do {
                        if (M2C_FIELD(((void *)D_00921CB0), void **, 0x68) != NULL) {
                            temp_a1 = M2C_FIELD(((void *)D_00921CB0), s32 *, 0) + temp_s5 + temp_s2;
                            if (M2C_FIELD(temp_a1, s32 *, 4) != 0) {
                                temp_a0_2 = M2C_FIELD(temp_a1, void **, 0);
                                temp_v1 = ((void *)D_00921CB0) + M2C_FIELD(temp_a0_2, s32 *, 0);
                                M2C_FIELD(temp_v1, u8 *, 4) = (u8) (M2C_FIELD(temp_v1, u8 *, 4) + 1);
                                M2C_FIELD(temp_a1, void **, 0) = (void *) M2C_FIELD(M2C_FIELD(temp_a1, void **, 0), void **, 4);
                                M2C_FIELD(temp_a1, s32 *, 4) = (s32) (M2C_FIELD(temp_a1, s32 *, 4) - 1);
                                func_00153FA0(temp_a0_2);
                            }
                        }
                        var_s3 += 1;
                    } while (var_s3 < temp_s1);
                }
            }
            var_s4 += 1;
            if (var_s4 < 0x20) {
                goto loop_3;
            }
            var_s7 += 1;
        } while (var_s7 < 2);
        if (M2C_FIELD(((void *)D_00921CB0), void **, 0x68) != NULL) {
            func_00153FA0(M2C_FIELD(((void *)D_00921CB0), void **, 0x68));
            M2C_FIELD(((void *)D_00921CB0), void **, 0x68) = NULL;
        }
        D_003EA648 = 0;
    }
}
