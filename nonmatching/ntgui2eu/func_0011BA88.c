/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3698[];

s32 func_0011BA88(void **arg0) {
    u16 temp_a1;
    u16 temp_a2;
    u16 var_v0;
    void *temp_v1;
    void *var_v1;

    temp_v1 = *arg0;
    temp_a1 = M2C_FIELD(temp_v1, u16 *, 0);
    var_v1 = temp_v1 + 2;
    if ((u32) ((temp_a1 + 0x2800) & 0xFFFF) < 0x400U) {
        temp_a2 = M2C_FIELD(temp_v1, u16 *, 2);
        var_v1 += 2;
        if ((u32) ((temp_a2 + 0x2400) & 0xFFFF) < 0x400U) {
            var_v0 = (temp_a1 << 0x10) | temp_a2;
        } else {
            goto block_6;
        }
    } else if ((u32) ((temp_a1 + 0x2400) & 0xFFFF) >= 0x400U) {
        var_v0 = temp_a1;
    } else {
block_6:
        var_v0 = (u16) (*(s32 *)D_005B3698);
    }
    *arg0 = var_v1;
    return (s32) var_v0;
}
