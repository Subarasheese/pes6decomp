/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_008472D0();                               /* extern */
extern char D_00592800[];
extern void *D_008B15A0;

void func_00850420(s8 arg0, s8 arg1, s32 arg2) {
    s8 var_v1;
    u8 temp_a1;
    u8 temp_s4;
    void *var_s1;

    var_s1 = D_008B15A0;
    if (var_s1 != NULL) {
loop_2:
        temp_s4 = M2C_FIELD(var_s1, u8 *, 0x12);
        if (temp_s4 == *func_008472D0()) {
            temp_a1 = M2C_FIELD(var_s1, u8 *, 0x18);
            if (temp_a1 != 0xFF) {
                if ((arg2 & 0xFF) != M2C_FIELD((((void *)D_00592800) + (temp_a1 * 0x28)), u8 *, 0x10)) {
                    var_v1 = arg1;
                } else {
                    var_v1 = arg0;
                }
                M2C_FIELD(var_s1, s8 *, 0x1B) = var_v1;
            }
            var_s1 = M2C_FIELD(var_s1, void **, 4);
            if (var_s1 != NULL) {
                goto loop_2;
            }
        }
    }
}
