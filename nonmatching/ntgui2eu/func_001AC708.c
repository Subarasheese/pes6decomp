/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
void *func_001AC548(s32, u32);                      /* extern */
M2C_UNK func_001AC5A0(void *);                      /* extern */
extern char D_005CAC24[];
extern void *D_01208850;

void *func_001AC708(u32 arg0) {
    s32 *temp_v0_2;
    s32 *var_s0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_v0_2;
    u32 temp_a2;
    u32 temp_a3;
    u32 temp_v0;
    u32 var_a4;
    u32 var_a5;
    void *temp_a1;
    void *var_s0;
    void *var_s1;
    void *var_v0;

    func_0019B160(M2C_FIELD(((void *)D_005CAC24), s32 *, 0));
    var_s0 = D_01208850;
loop_1:
    if (var_s0 != NULL) {
        temp_v0 = M2C_FIELD(var_s0, u32 *, 0);
        var_v0_2 = arg0 < temp_v0;
        if (temp_v0 == 0) {
            func_001AC5A0(var_s0);
            var_v0_2 = arg0 < (u32) M2C_FIELD(var_s0, u32 *, 0);
        }
        if (var_v0_2 != 0) {
            var_s0 = M2C_FIELD(var_s0, void **, 0x14);
            goto loop_1;
        }
        if (arg0 >= (u32) M2C_FIELD(var_s0, u32 *, 4)) {
            var_s0 = M2C_FIELD(var_s0, void **, 0x14);
            goto loop_1;
        }
        temp_v0_2 = M2C_FIELD(var_s0, s32 **, 0xC);
        if ((temp_v0_2 == NULL) || (temp_v0_2 == M2C_FIELD(var_s0, s32 *, 8))) {
            func_001AC5A0(var_s0);
        }
        if (M2C_FIELD(var_s0, s32 **, 0xC) != NULL) {
            if (M2C_FIELD(var_s0, s32 **, 0xC) != M2C_FIELD(var_s0, s32 *, 8)) {
                func_0019B140(M2C_FIELD(((void *)D_005CAC24), s32 *, -0x53DC));
                var_a4 = M2C_FIELD(var_s0, u32 *, 0x10);
                var_a5 = 0;
                if (var_a4 != 0) {
loop_20:
                    temp_a2 = (u32) (var_a5 + var_a4) >> 1;
                    temp_a1 = *((temp_a2 * 4) + M2C_FIELD(var_s0, s32 **, 0xC));
                    temp_a3 = M2C_FIELD(temp_a1, u32 *, 8);
                    var_v0 = temp_a1;
                    if (arg0 < temp_a3) {
                        var_a4 = temp_a2;
                        goto block_23;
                    }
                    var_a5 = temp_a2 + 1;
                    if (arg0 >= (u32) (temp_a3 + M2C_FIELD(temp_a1, s32 *, 0xC))) {
block_23:
                        if (var_a5 >= var_a4) {
                            goto block_33;
                        }
                        goto loop_20;
                    }
                } else {
                    goto block_33;
                }
                /* Duplicate return node #34. Try simplifying control flow for better match */
                return var_v0;
            }
            var_s0_2 = M2C_FIELD(var_s0, s32 **, 0xC);
            if (M2C_FIELD(var_s0, s32 **, 0xC) != NULL) {
                var_a0 = *var_s0_2;
loop_27:
                var_s1 = func_001AC548(var_a0, arg0);
                var_s0_2 += 4;
                if (var_s1 == NULL) {
                    temp_v0_3 = *var_s0_2;
                    var_a0 = temp_v0_3;
                    if (temp_v0_3 == 0) {

                    } else {
                        goto loop_27;
                    }
                }
            } else {
                goto block_30;
            }
            goto block_31;
        }
block_30:
        var_s1 = func_001AC548(M2C_FIELD(var_s0, s32 *, 8), arg0);
block_31:
        func_0019B140(M2C_FIELD(((void *)D_005CAC24), s32 *, -0x53DC));
        return var_s1;
    }
    func_0019B140(M2C_FIELD(((void *)D_005CAC24), s32 *, -0x53DC));
block_33:
    var_v0 = NULL;
    return var_v0;
}
