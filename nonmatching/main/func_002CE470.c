/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, void *, M2C_UNK);        /* extern */
extern char D_003AEA10[];

void func_002CE470(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_001C4730(arg1, ((void *)D_003AEA10) + (arg0 * 4), 4);
    }
}
