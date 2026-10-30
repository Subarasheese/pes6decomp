/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008F9720(s32, s32);                    /* extern */
M2C_UNK func_008F9930(s32, s32, void *);            /* extern */
extern char D_008FB030[];

void func_008F9670(s32 arg0) {
    s32 var_s2;
    void *temp_s0;
    void *var_s1;

    var_s2 = 0;
    temp_s0 = ((void *)D_008FB030) + (arg0 * 0xA8);
    var_s1 = temp_s0;
    do {
        if (M2C_FIELD((temp_s0 + var_s2), u8 *, 0x8C) == 1) {
            func_008F9930(arg0, var_s2, var_s1 + 0x48);
        } else {
            func_008F9720(arg0, var_s2);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 0x11);
}
