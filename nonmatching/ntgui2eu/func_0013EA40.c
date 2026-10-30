/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00135D48();                                /* extern */
s32 func_00135D70();                                /* extern */
M2C_UNK func_0013F9F0();                            /* extern */
M2C_UNK func_00159708();                            /* extern */
extern char D_005BC20C[];

s32 func_0013EA40(void) {
    if ((func_00135D48() & (*(s32 *)D_005BC20C)) && !(func_00135D70() & (*(s32 *)D_005BC20C))) {
        func_0013F9F0();
        return 1;
    }
    func_00159708();
    return 0;
}
