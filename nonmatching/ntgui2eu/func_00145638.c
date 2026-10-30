/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00135D48();                                /* extern */
s32 func_00135D70();                                /* extern */
M2C_UNK func_00145EF8(s32, s32 *);                  /* extern */
extern char D_005BD3AC[];
extern char D_005BD3B0[];

s32 func_00145638(void) {
    s32 var_v0;

    var_v0 = 0;
    if (func_00135D48() & 0x10) {
        if (func_00135D70() & 0x10) {
            return 0;
        }
        (*(s32 *)D_005BD3B0) = 1;
        func_00145EF8((*(s32 *)D_005BD3AC), ((void *)D_005BD3B0));
        var_v0 = 1;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
