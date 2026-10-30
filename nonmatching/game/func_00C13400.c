/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBFAA0[];

void *func_00C13400(void *arg0) {
    u8 temp_v1;
    void *temp_a3;
    void *var_a0;

    if (arg0 != (void *)-1) {
        var_a0 = arg0 + 4;
        temp_a3 = ((void *)D_00CBFAA0) + (M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) * 4);
        if ((u32) var_a0 < (u32) temp_a3) {
loop_3:
            temp_v1 = M2C_FIELD(var_a0, u8 *, 3);
            if ((temp_v1 != 0xFF) && (temp_v1 != (M2C_FIELD(arg0, u8 *, 3) & 0xFF))) {
                return var_a0;
            }
            var_a0 += 4;
            if ((u32) var_a0 >= (u32) temp_a3) {
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return (void *)-1;
            }
            goto loop_3;
        }
    }
    return (void *)-1;
}
