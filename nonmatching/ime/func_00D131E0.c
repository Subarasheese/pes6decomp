/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D072A0(s32, s32 *);                  /* extern */

s32 func_00D131E0(void *arg0) {
    s32 *temp_a1;
    s32 *temp_a1_2;

    if (arg0 == NULL) {
        return 1;
    }
loop_3:
    if (M2C_FIELD(arg0, s32 *, 0) >= 0x33) {
        temp_a1 = M2C_FIELD(arg0, s32 **, 0x2B8);
        if (temp_a1 != (arg0 + 0x10)) {
            func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_a1);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
            goto loop_3;
        }
    }
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 **, 0x2B8) == NULL) {
            return 1;
        }
loop_12:
        temp_a1_2 = M2C_FIELD(arg0, s32 **, 0x2B8);
        if ((*temp_a1_2 == -1) && (temp_a1_2 != (arg0 + 0x10))) {
            func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_a1_2);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
            goto loop_12;
        }
        return 0;
    }
    return 1;
}
