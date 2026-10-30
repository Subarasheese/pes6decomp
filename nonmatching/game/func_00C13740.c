/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBFAA0[];

void *func_00C13740(s32 arg0, s32 arg1) {
    u32 var_a0;
    void *temp_a2;

    if (arg0 != -1) {
        var_a0 = arg0 + 4;
        temp_a2 = ((void *)D_00CBFAA0) + (M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) * 4);
        if (var_a0 < (u32) temp_a2) {
loop_3:
            if (M2C_FIELD(var_a0, u8 *, 2) != (arg1 & 0xFF)) {
                var_a0 += 4;
                if (var_a0 >= (u32) temp_a2) {
                    goto block_9;
                }
                goto loop_3;
            }
            return (void *) var_a0;
        }
    }
block_9:
    return (void *)-1;
}
