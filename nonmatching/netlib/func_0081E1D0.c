/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern int func_00309420(void);
s32 func_001C83D8(void *, void *, M2C_UNK);         /* extern */
void *func_008472C0();                              /* extern */
void *func_008472D0();                              /* extern */

void *func_0081E1D0(void) {
    s32 var_s2;
    s32 var_s2_2;
    void *temp_s1;
    void *temp_s1_2;
    void *var_s0;

    var_s0 = func_008472C0();
    temp_s1 = func_008472D0();
    if (func_00309420() == 0) {
        goto block_31;
    }
    if (var_s0 == NULL) {
        goto block_31;
    }
    if (temp_s1 != NULL) {
        if (M2C_FIELD(temp_s1, s8 *, 3) != 0) {
            temp_s1_2 = temp_s1 + 3;
            if (func_002DCA40() != 1) {
                var_s2 = 0;
loop_28:
                if (var_s2 < 4) {
                    if ((M2C_FIELD(var_s0, s8 *, 0x1C) != 0) && (func_001C83D8(var_s0 + 0x1C, temp_s1_2, 0x20) != 0)) {
                        return var_s0 + 0x1C;
                    }
                    var_s2 += 1;
                    var_s0 += 0x88;
                    goto loop_28;
                }
                goto block_31;
            }
            var_s2_2 = 0;
loop_20:
            if (var_s2_2 < 4) {
                if ((M2C_FIELD(var_s0, s8 *, 0x1C) != 0) && (func_001C83D8(var_s0 + 0x1C, temp_s1_2, 0x20) == 0)) {
                    return var_s0 + 0x1C;
                }
                var_s2_2 += 1;
                var_s0 += 0x88;
                goto loop_20;
            }
            goto block_31;
        }
        goto block_31;
    }
block_31:
    return NULL;
}
