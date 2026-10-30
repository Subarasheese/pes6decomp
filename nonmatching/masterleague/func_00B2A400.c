/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F190(void);
s32 func_00230100(s32);                             /* extern */

u16 func_00B2A400(s32 arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a4;
    void *temp_a2;
    void *temp_v0;

    temp_v0 = func_0022F190();
    if (temp_v0 != NULL) {
        temp_a3 = (func_00230100(arg1) & 0xFF) * 0xC82;
        temp_a2 = temp_a3 + temp_v0;
        var_a4 = 0;
        if ((s32) M2C_FIELD(temp_a2, u16 *, 0x4778) > 0) {
loop_6:
            temp_v1 = (var_a4 & 0xFFFF) * 8;
            if (M2C_FIELD((temp_a2 + temp_v1), u16 *, 0x477A) != (arg0 & 0xFFFF)) {
                var_a4 = (var_a4 + 1) & 0xFFFF;
                if (var_a4 >= (s32) M2C_FIELD(temp_a2, u16 *, 0x4778)) {
                    goto block_12;
                }
                goto loop_6;
            }
            return M2C_FIELD((temp_v1 + (temp_a3 + temp_v0)), u16 *, 0x477E);
        }
        goto block_12;
    }
block_12:
    return 0U;
}
