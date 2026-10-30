/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
s32 func_002C18C0(M2C_UNK);                         /* extern */
u32 func_00C13390(s32);                             /* extern */

s32 func_00C5D100(u32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s1;
    u32 var_s0;

    var_s1 = 0xFF;
    if ((arg0 == -1U) || (arg1 == -1) || (temp_v0 = func_002C18C0(6), (temp_v0 == -1)) || (var_s0 = func_00C13390(temp_v0), (var_s0 == -1U)) || (arg0 >= var_s0) || ((func_00C132C0((void *) var_s0) & 0xFF) != 0xB) || ((arg2 & 0xFF) != (((s32) (func_00C132B0((void *) var_s0) & 0xFF) >> 5) & 1))) {
        var_s0 = -1U;
    }
    if (var_s0 != -1U) {
        var_s1 = func_00C132B0((void *) var_s0) & 0xFF;
    }
    return var_s1;
}
