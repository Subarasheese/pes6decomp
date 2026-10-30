/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, void *, M2C_UNK);        /* extern */
extern char D_00CE48F0[];

s32 func_00BBC000(s32 arg0, s32 arg1) {
    func_001C4730(arg1, ((void *)D_00CE48F0) + (arg0 * 0x10), 0x10);
    return arg1;
}
