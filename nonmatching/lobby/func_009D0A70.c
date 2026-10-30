/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009CE890(void *, s32);                 /* extern */
extern char D_00A7DDF8[];

s32 func_009D0A70(s32 arg0, s8 arg1) {
    s32 var_a3;
    void *temp_a2;
    void *temp_v1;

    if ((*(s32 *)D_00A7DDF8) == 0) {
        return 0;
    }
    if (arg0 != 0) {
        var_a3 = 0;
loop_10:
        temp_a2 = *(void **)0xA7DDF8;
        if (var_a3 < (s32) M2C_FIELD(temp_a2, u8 *, 7)) {
            temp_v1 = temp_a2 + (var_a3 << 7);
            if (M2C_FIELD(temp_v1, s32 *, 8) == arg0) {
                M2C_FIELD(M2C_FIELD((temp_v1 + 8), void **, 0x7C), s8 *, 0x30) = arg1;
            }
            var_a3 += 1;
            goto loop_10;
        }
        func_009CE890(temp_a2, var_a3);
    }
    return 1;
}
