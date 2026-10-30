/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
M2C_UNK func_00C93ED0();                            /* extern */
extern char D_00CCD908[];
extern char D_00CCD90C[];

void func_00C93CF0(void) {
    if (func_0017A670(0) != 0xC) {
        func_00C93ED0();
        (*(s32 *)D_00CCD908) = -1;
        (*(s32 *)D_00CCD90C) = -1;
    }
}
