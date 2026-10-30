/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BDA30[];
extern char D_011E0CCC[];
extern char D_011E0CD0[];

void func_001515B8(s32 arg0, s32 arg1) {
    (*(s32 *)D_011E0CCC) = arg0 * 0x10;
    (*(s32 *)D_011E0CD0) = arg1 * 0x10;
    (*(s32 *)D_005BDA30) = 1;
}
