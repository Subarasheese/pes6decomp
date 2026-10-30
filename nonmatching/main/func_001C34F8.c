/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001C1AE0(void);
extern void func_001C1AD8(void);
s32 func_001C83D8(s32, s8 *, s32);                  /* extern */
extern char D_00398720[];

void *func_001C34F8(s32 arg0, s8 *arg1, s32 *arg2) {
    s32 *var_s1;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s2;
    s8 *temp_s0;
    s8 *var_s0;
    s8 temp_v0;
    s8 temp_v1;

    func_001C1AD8();
    var_s0 = arg1;
    if (*M2C_FIELD(((void *)D_00398720), s32 **, 0) == 0) {
        goto block_16;
    }
    temp_v1 = *var_s0;
    var_s2 = 0;
    switch (temp_v1) {                              /* irregular */
    case 0x3D:
        break;
    default:
loop_7:
        var_s0 += 1;
        temp_v0 = *var_s0;
        var_s2 += 1;
        if (temp_v0 != 0) {
            if (temp_v0 != 0x3D) {
                goto loop_7;
            }
        }
        /* fallthrough */
    case 0x0:
        break;
    }
    var_s1 = *M2C_FIELD(((void *)D_00398720), s32 ***, -0x78E0);
    var_a0 = *var_s1;
    if (var_a0 != 0) {
loop_12:
        if ((func_001C83D8(var_a0, arg1, var_s2) != 0) || (temp_s0 = *var_s1 + var_s2, (*temp_s0 != 0x3D))) {
            var_s1 += 4;
            temp_v0_2 = *var_s1;
            var_a0 = temp_v0_2;
            if (temp_v0_2 == 0) {
                goto block_15;
            }
            goto loop_12;
        }
        *arg2 = (s32) (var_s1 - *M2C_FIELD(((void *)D_00398720), s32 ***, -0x78E0)) >> 2;
        func_001C1AE0();
        return temp_s0 + 1;
    }
block_15:
    func_001C1AE0();
block_16:
    return NULL;
}
