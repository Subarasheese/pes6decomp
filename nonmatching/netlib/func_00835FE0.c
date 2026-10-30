/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0082ABC0(s16, s32 *, s32 *);           /* extern */
s32 func_0082ADE0(s32, s32);                        /* extern */
s32 func_00835EE0();                                /* extern */

s32 func_00835FE0(void) {
    s32 sp48;
    s32 sp4C;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s1;
    void *var_s2;

    temp_s0 = func_00835EE0();
    var_s1 = 0;
loop_20:
    if (var_s1 < temp_s0) {
        sp4C = 9;
        sp48 = -1;
        temp_s2 = func_00835EE0();
        temp_v0 = func_0082C2A0();
        if (temp_v0 != 0) {
            var_a0 = temp_v0 + 0x12230;
        } else {
            var_a0 = 0;
        }
        if (var_a0 == 0) {
            var_s2 = NULL;
        } else if (var_s1 < 0) {
            var_s2 = NULL;
        } else if (var_s1 < temp_s2) {
            var_s2 = var_a0 + (var_s1 * 0xC8);
        } else {
            var_s2 = NULL;
        }
        if (var_s2 != NULL) {
            func_0082ABC0(M2C_FIELD(var_s2, s16 *, 0x7E), &sp4C, &sp48);
            temp_v0_2 = func_0082ADE0(sp4C, sp48);
            if (temp_v0_2 != 0) {
                func_001C8590(var_s2 + 0x38, temp_v0_2, 0x20);
            }
        }
        var_s1 += 1;
        goto loop_20;
    }
    return 1;
}
