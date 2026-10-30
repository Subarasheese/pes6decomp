/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001454C0(M2C_UNK);                         /* extern */
M2C_UNK func_0019EFA0(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00520320[];
extern char D_00520324[];
extern char D_00520328[];
extern char D_0052032C[];

void func_0019EF00(void) {
    s32 temp_s0;
    s32 temp_s1;

    (*(s32 *)D_00520320) = 0;
    (*(s32 *)D_00520324) = 0;
    (*(s32 *)D_00520328) = 0;
    (*(s32 *)D_0052032C) = 0;
    temp_s1 = func_001454C0(0x274F);
    temp_s0 = func_001454C0(0x274E);
    if ((temp_s1 != 0) && (temp_s0 != 0)) {
        func_0019EFA0(temp_s1, temp_s0, 1, 0x2A94, 0);
        func_0019EFA0(temp_s1, temp_s0, 0, 0x2A96, 2);
    }
}
