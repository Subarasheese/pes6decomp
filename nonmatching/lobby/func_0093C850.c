/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00828160();                                /* extern */
void *func_0082C2A0();                              /* extern */
s32 func_00835DB0(s32);                             /* extern */
u32 func_00950D30(s32);                             /* extern */
s32 func_00965CC0(s32);                             /* extern */
extern char D_008A5F84[];

s32 func_0093C850(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = func_0082C2A0();
    temp_s0 = func_00835DB0(arg0);
    if (temp_s1 == NULL) {
        goto block_24;
    }
    if ((*(s32 *)D_008A5F84) == 4) {
        if (M2C_FIELD(temp_s1, s32 *, 0x117F0) != 0) {
            if (M2C_FIELD(temp_s1, s32 *, 0xF8A0) == 0) {
                goto block_24;
            }
            if ((temp_s0 == func_00828160()) && (temp_s0 != 0)) {
                goto block_24;
            }
            if (func_00950D30(M2C_FIELD(temp_s1, s32 *, 0xF8A0)) < 0x64U) {
                var_s1 = 0;
loop_23:
                if (var_s1 >= 8) {
                    goto block_24;
                }
                temp_v0 = func_00965CC0(var_s1);
                if ((temp_v0 != 0) && (temp_v0 == temp_s0)) {
                    return 1;
                }
                var_s1 += 1;
                goto loop_23;
            }
            goto block_24;
        }
        goto block_24;
    }
block_24:
    return 0;
}
