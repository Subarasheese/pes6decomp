/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00115FF8(int, int, void *, void *, void *);
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern void *D_00538234;
extern void *D_00538238;
extern void *D_0053823C;

s32 func_0021C5E0(void *arg0) {
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_s0;
    s16 temp_s1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a1;
    void *temp_a2_2;
    void *temp_a3_2;
    void *temp_a4;
    void *temp_v0;

    temp_a3 = M2C_FIELD(arg0, s16 *, 0xB6);
    temp_a2 = M2C_FIELD(arg0, s16 *, 0xB4);
loop_1:
    temp_a1 = M2C_FIELD(arg0, u32 *, 0xD0);
    if (temp_a1 < (u32) M2C_FIELD(arg0, u32 *, 0xBC)) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xC4) + (temp_a1 * 0x10);
        temp_s0 = M2C_FIELD(temp_v0, s16 *, 0);
        temp_s1 = M2C_FIELD(temp_v0, s16 *, 2);
        if ((temp_a2 != -1) && (temp_a3 != -1)) {
            if (temp_a3 == temp_s1) {
                if (temp_a2 != temp_s0) {
                    goto block_12;
                }
                goto block_14;
            }
block_12:
            M2C_FIELD(arg0, u32 *, 0xD0) = (u32) (temp_a1 + 1);
            goto loop_1;
        }
block_14:
        (*(s32 *)D_0053822C) = (s32) temp_s0;
        (*(s32 *)D_00538228) = 0;
        temp_a2_2 = arg0 + 0x24;
        D_00538234 = temp_a2_2;
        temp_a4 = arg0 + 0x2C;
        (*(s32 *)D_00538230) = (s32) temp_s1;
        D_0053823C = temp_a4;
        temp_a3_2 = arg0 + 0x28;
        D_00538238 = temp_a3_2;
        var_v0_2 = 0;
        if ((temp_s0 != -1) && (temp_s1 != -1)) {
            var_v0_2 = func_00115FF8((s32) temp_s0, (s32) temp_s1, temp_a2_2, temp_a3_2, temp_a4);
        }
        var_a0 = 0;
        (*(s32 *)D_00538224) = 0;
        if (var_v0_2 != 0) {

        } else {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            var_a0 = -0x7F;
        }
        M2C_FIELD(arg0, s16 *, 0xC) = temp_s0;
        var_v0 = var_a0;
        M2C_FIELD(arg0, s16 *, 0xE) = temp_s1;
    } else {
        var_v0 = 2;
    }
    return var_v0;
}
