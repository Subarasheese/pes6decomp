/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_00226710(void);
void *func_00994760();                              /* extern */
M2C_UNK func_00B18990(s32, s32);                    /* extern */

void func_00B18B90(void) {
    s32 temp_s1;
    s32 var_s2;
    void *temp_s0;

    temp_s1 = func_00225820() & 0xFF;
    temp_s0 = func_00994760();
    if ((((func_00226710() & 0xFF) == 0x1C) || ((func_00226710() & 0xFF) == 0x20)) && (temp_s0 != NULL)) {
        var_s2 = 0;
        M2C_FIELD(temp_s0, s32 *, 0x61AC0) = 0;
        do {
            func_00B18990(temp_s1, var_s2 & 0xFF);
            var_s2 += 1;
        } while (var_s2 < 0x20);
    }
}
