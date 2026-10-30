/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DE20[];
extern char D_00A7DE24[];
extern char D_00A7DE2C[];
extern char D_00A7DE80[];
extern char D_00A7DE84[];
extern char D_00A7DE88[];

void func_009D4700(void) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    s32 sp8;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a4;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_3;

    var_a4 = 0;
loop_11:
    if (var_a4 < 8) {
        temp_a3 = var_a4 * 0xC;
        temp_a1 = ((void *)D_00A7DE20) + temp_a3;
        temp_a0 = M2C_FIELD(temp_a1, s32 *, 0xC);
        if ((temp_a0 != 0) && (M2C_FIELD(temp_a1, s32 *, 0x10) <= 0) && (M2C_FIELD(temp_a1, s32 *, 0x14) < 2)) {
            (*(s32 *)D_00A7DE24) = temp_a0;
            var_a2 = var_a4 + 1;
            (*(s32 *)D_00A7DE20) = 1;
            temp_v1 = ((void *)D_00A7DE2C) + temp_a3;
            sp0 = M2C_FIELD(temp_v1, M2C_UNK32 *, 0);
            sp4 = M2C_FIELD(temp_v1, M2C_UNK32 *, 4);
            sp8 = M2C_FIELD(temp_v1, s32 *, 8);
            sp8 += 1;
loop_6:
            if (var_a2 < 8) {
                temp_v1_2 = var_a2 * 0xC;
                var_a2 += 1;
                temp_v1_3 = ((void *)D_00A7DE20) + temp_v1_2;
                M2C_FIELD(temp_v1_3, f32 *, 0) = (f32) M2C_FIELD(temp_v1_3, f32 *, 0xC);
                M2C_FIELD(temp_v1_3, f32 *, 4) = (f32) M2C_FIELD(temp_v1_3, f32 *, 0x10);
                M2C_FIELD(temp_v1_3, f32 *, 8) = (f32) M2C_FIELD(temp_v1_3, f32 *, 0x14);
                goto loop_6;
            }
            (*(M2C_UNK32 *)D_00A7DE80) = sp0;
            (*(M2C_UNK32 *)D_00A7DE84) = sp4;
            (*(s32 *)D_00A7DE88) = sp8;
            return;
        }
        var_a4 += 1;
        goto loop_11;
    }
}
