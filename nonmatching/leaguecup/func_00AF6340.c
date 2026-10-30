/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002233F0(void);
extern u8 func_00225820(void);
extern void * func_00229310(void);
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00225720();                                /* extern */

s32 func_00AF6340(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v1;
    u32 var_a0;
    void *var_v0;

    temp_s1 = func_00225820() & 0xFF;
    temp_s0 = func_00225720() & 0xFFFF;
    var_v0 = func_00229310();
    if (var_v0 != NULL) {
        var_a0 = 0;
loop_4:
        if ((s32) M2C_FIELD(var_v0, u16 *, 0x10) <= 0) {
            var_a0 += 1;
            var_v0 += 2;
            if (var_a0 >= 0x17FU) {
                goto block_9;
            }
            goto loop_4;
        }
        var_v1 = 1;
    } else {
block_9:
        var_v1 = 0;
    }
    if (var_v1 != 1) {
        temp_v0 = temp_s0 & 0xFFFF;
        if ((temp_v0 >= 0) && (temp_v0 < 0x40) && ((arg0 & 0xFF) >= 0x17)) {
            return 0;
        }
        return func_002233F0();
    }
    return func_00224BC0(temp_s1, arg0);
}
