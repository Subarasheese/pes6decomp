/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009F6CC0();                                /* extern */
extern char D_00A7DF38[];

s32 func_009E7250(void *arg0) {
    M2C_UNK (*temp_v0_2)(s32, s32, void *);
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_s0;
    void *temp_a2;
    void *temp_v1;

    var_s0 = 1;
    temp_v0 = func_009F6CC0();
    if (temp_v0 > 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
        temp_a1 = temp_v0 - 1;
        temp_a2 = arg0 + 0x10;
        if ((temp_a1 >= temp_a0) && (temp_a1 < (temp_a0 + M2C_FIELD(arg0, s32 *, 0x24)))) {
            temp_v1 = M2C_FIELD(arg0, void **, 0x54);
            temp_v0_2 = M2C_FIELD(temp_v1, M2C_UNK (**)(s32, s32, void *), 0x20);
            if (temp_v0_2 != NULL) {
                temp_v0_2(M2C_FIELD(temp_v1, s32 *, 0), temp_a1, temp_a2);
            }
        } else {
            var_s0 = 0;
            M2C_FIELD(temp_a2, s32 *, 0x2C) = (s32) (temp_a1 - (temp_a1 % 100));
            (*(s8 *)D_00A7DF38) = 1;
        }
    }
    return var_s0;
}
