/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_0096F7D0(u16);                             /* extern */
void *func_00994750();                              /* extern */
s32 func_00AFE370(u16);                             /* extern */
M2C_UNK func_00B1A210(u16);                         /* extern */

void func_00B187B0(void) {
    s32 var_s2;
    u16 temp_s1;
    void *temp_v0;
    void *var_s0;

    var_s0 = func_00228A80();
    if (var_s0 != NULL) {
        var_s2 = 0;
        do {
            temp_s1 = M2C_FIELD(var_s0, u16 *, 0x32EAE);
            if ((func_0096F7D0(temp_s1) == 1) || (func_00AFE370(temp_s1) == 0)) {
                func_00B1A210(temp_s1);
            } else {
                var_s0 += 2;
                var_s2 += 1;
            }
        } while (var_s2 < 0x20);
        temp_v0 = func_00994750();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s16 *, 0xA) = 0;
        }
    }
}
