/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001237A0(s32);                             /* extern */
s32 func_00135D48();                                /* extern */
s32 func_00135D70();                                /* extern */
M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00153FD0(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_005B5908[];
extern char D_005BD9C0[];
extern char D_005FCB90[];

s32 func_0014F2A8(void) {
    s32 var_v0;

    var_v0 = 0;
    if (func_001237A0((*(s32 *)D_005B5908)) != 0) {
        var_v0 = 0;
        if (func_00135D48() & 0x10) {
            if (func_00135D70() & 0x10) {
                return 0;
            }
            func_00153FD0(((void *)D_005FCB90), 0);
            (*(s32 *)D_005BD9C0) = 1;
            func_00136FD8(0, 0x17);
            var_v0 = 1;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
