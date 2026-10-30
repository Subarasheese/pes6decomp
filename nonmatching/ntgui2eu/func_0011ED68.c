/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011EA50(s32);                         /* extern */
extern char D_011C8A40[];

void func_0011ED68(void) {
    s32 *var_s1;
    s32 var_s0;

    var_s1 = ((void *)D_011C8A40);
    var_s0 = 0;
    do {
        if (*var_s1 != 0) {
            func_0011EA50(var_s0);
        }
        var_s0 += 1;
        var_s1 += 0xB4;
    } while (var_s0 < 0x100);
}
