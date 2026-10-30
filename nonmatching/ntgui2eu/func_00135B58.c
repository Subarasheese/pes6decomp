/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B373C[];
extern char D_005BC20C[];
extern char D_005BC210[];
extern char D_011D7470[];

void func_00135B58(s32 arg0, s32 arg1) {
    (*(s32 *)D_011D7470) = arg0;
    if (arg1 != 0) {
        (*(s32 *)D_005BC20C) = 0x40;
        (*(s32 *)D_005BC210) = 0x20;
        (*(s32 *)D_005B373C) = 1;
        return;
    }
    (*(s32 *)D_005BC20C) = 0x20;
    (*(s32 *)D_005BC210) = 0x40;
}
