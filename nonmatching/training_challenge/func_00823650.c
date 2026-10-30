/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002727C0(s32);
M2C_UNK func_008231C0(s32, s32);                    /* extern */
s32 func_008256C0();                                /* extern */
M2C_UNK func_00BE9ED0(M2C_UNK);                     /* extern */
M2C_UNK func_00C8A6E0();                            /* extern */
extern char D_00591DB4[];

void func_00823650(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_008256C0();
    if ((temp_v0 != 4) && (temp_v0 != 3)) {
        return;
    }
    func_008231C0(arg0, arg2);
    func_002727C0(5);
    func_00BE9ED0(4);
    (*(s8 *)D_00591DB4) = 0;
    func_00C8A6E0();
}
