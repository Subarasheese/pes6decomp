/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018EF00();                            /* extern */
M2C_UNK func_0018F6B0(u8 *);                        /* extern */
extern char D_00520220[];

void func_0018EE70(void) {
    s32 var_s1;
    u8 *var_s0;

    if ((*(s32 *)D_00520220) != 0) {
        func_0018EF00();
        var_s1 = 0;
        var_s0 = (*(s32 *)D_00520220) + 0x1C;
        do {
            if (*var_s0 == 0) {

            } else {
                func_0018F6B0(var_s0);
            }
            var_s1 += 1;
            var_s0 += 0x448;
        } while (var_s1 < 0xC);
    }
}
