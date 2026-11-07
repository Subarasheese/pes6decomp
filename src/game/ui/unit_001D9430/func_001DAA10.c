/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001D9D10(s32 *, s32, s32);             /* extern */
extern char D_0052AB98[];
extern char D_0052AB9C[];
extern char D_0052ABA0[];

void func_001DAA10(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;

    if (arg0 != NULL) {
        temp_a2 = M2C_FIELD(arg0, s32 *, 0);
        (*(s32 *)D_0052AB98) = temp_a2;
        temp_a1 = M2C_FIELD(arg0, s32 *, 4);
        (*(s32 *)D_0052AB9C) = temp_a1;
        (*(s32 *)D_0052ABA0) = M2C_FIELD(arg0, s32 *, 8);
        func_001D9D10(((void *)D_0052AB98), temp_a1, temp_a2);
    }
}
