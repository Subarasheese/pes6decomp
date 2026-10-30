/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001051F0(s32, M2C_UNK);                /* extern */
M2C_UNK WakeupThread(s32);                         /* extern */
M2C_UNK func_0015FA00(s32);                         /* extern */
extern char D_0037B980[];
extern char D_0037B9D4[];
extern char D_0037BA18[];
extern char D_0037BA20[];

void func_001603C0(void) {
    s32 *var_s6;
    s64 *var_s7;
    s64 *var_v0;

    if ((*(s32 *)D_0037B980) == 1) {
        do {
            var_s7 = (s64 *)0x380000;
        } while ((*(s64 *)D_0037BA20) == 0);
        goto block_9;
    }
    *(s32 *)0x37BA5C = 0;
    var_s7 = ((void *)D_0037BA18);
    if ((*(s64 *)D_0037BA20) == 0) {
        var_s6 = ((void *)D_0037B9D4);
        do {
            (*(s64 *)D_0037BA18) = 1;
            func_001051F0((*(s32 *)D_0037B9D4), 1);
            WakeupThread((*(s32 *)D_0037B9D4));
            func_0015FA00((*(s32 *)D_0037B9D4));
            *(s32 *)0x37BA5C += 1;
            var_v0 = ((void *)D_0037BA20) - 0x45E0;
        } while ((*(s64 *)D_0037BA20) == 0);
    } else {
block_9:
        var_s6 = (s32 *)0x380000;
        var_v0 = ((void *)D_0037BA20) - 0x45E0;
    }
    *var_v0 = 0;
    *(var_s7 - 0x45E8) = 0;
    *(var_s6 - 0x462C) = 0;
}
