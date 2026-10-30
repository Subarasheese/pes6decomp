/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0019C468(void *);
s32 func_0019C7B8(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 var_v1;
    s8 temp_v1;
    u8 *temp_s0;

    var_v1 = 0;
    if (arg1 > 0) {
loop_2:
        temp_s1 = var_v1 + 1;
        temp_s0 = arg0 + var_v1;
        do {

        } while (M2C_FIELD(*(void **)0x012014A8, s32 *, 4) == 0);
        *temp_s0 = *M2C_FIELD(M2C_FIELD((void *)0x01201490, void **, 0x18), u8 **, 8);
        func_0019C468(M2C_FIELD((void *)0x01201490, void **, 0x18));
        temp_v1 = (s8) *temp_s0;
        if ((temp_v1 == 0xA) || (var_v1 = temp_s1, (temp_v1 == 0xD))) {
            return temp_s1;
        }
        if (var_v1 >= arg1) {
            goto block_8;
        }
        goto loop_2;
    }
block_8:
    return var_v1;
}
