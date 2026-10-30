/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *, s32);                     /* extern */
M2C_UNK func_00164160(s32);                         /* extern */
void *func_00165B00();                              /* extern */
M2C_UNK func_0016A340(void *);                      /* extern */
extern char D_005BFCA8[];

s32 func_0016AF10(void) {
    s32 temp_a0;
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00165B00();
    if ((temp_v0 != NULL) && (func_00163C30(temp_v0, (*(s32 *)D_005BFCA8)) != 0)) {
        var_v0 = 0;
        if ((temp_v0 + 0x9A8) != NULL) {
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x9A8);
            if (temp_a0 == 0) {
                goto block_4;
            }
            func_00164160(temp_a0);
            func_0016A340(temp_v0 + 0x9D0);
            M2C_FIELD(temp_v0, s32 *, 0x9A8) = 0;
            var_v0 = 1;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_4:
    return 0;
}
