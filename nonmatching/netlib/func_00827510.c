/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083FA50(s32, void *);                     /* extern */
s32 func_0083FBE0();                                /* extern */
s64 func_00840EC0();                                /* extern */
M2C_UNK func_00841360(s32);                         /* extern */
s32 func_00841D30();                                /* extern */
s32 func_00842650(void *, s32, s32, s32);           /* extern */
extern void *D_008A4398;
extern char D_008A43E8[];

s32 func_00827510(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;

    if ((func_00841D30() != 1) && (((s64) (func_00840EC0() << 0x38) >> 0x38) == 3)) {
        temp_v0 = func_0083FBE0();
        if ((temp_v0 >= 0) && (temp_v0 < 4)) {
            temp_s0 = D_008A4398;
            if (temp_s0 != NULL) {
                var_a1 = M2C_FIELD(temp_s0, s32 *, 0x49E8);
            } else {
                var_a1 = 0;
            }
            if ((temp_s0 != NULL) && (var_a1 != 0)) {
                var_a2 = 0;
                var_a3 = 0;
                do {
                    temp_a0 = temp_s0 + (var_a3 * 0xB8);
                    if ((M2C_FIELD(temp_a0, s32 *, 0xF8A4) == var_a1) && (M2C_FIELD(temp_a0, u8 *, 0xF95B) != 0)) {
                        var_a2 = 1;
                    }
                    var_a3 += 1;
                } while (var_a3 < 8);
                if (var_a2 == 1) {
                    temp_v0_2 = func_00842650(temp_a0, var_a1, var_a2, var_a3);
                    if (temp_v0_2 != 0) {
                        temp_a1 = temp_s0 + 0x10118;
                        if ((temp_a1 != NULL) && (M2C_FIELD(temp_s0, s32 *, 0x10118) == 1) && (func_0083FA50(temp_v0_2, temp_a1) != 0)) {
                            temp_v1 = (*(s32 *)D_008A43E8) + 1;
                            (*(s32 *)D_008A43E8) = temp_v1;
                            if (temp_v1 >= 0x50) {
                                (*(s32 *)D_008A43E8) = 0;
                                func_00841360(temp_v0_2);
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}
