/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, void *, M2C_UNK);        /* extern */
extern char D_00CBACA0[];

void func_00BCC4C0(s32 arg0, s32 arg1) {
    if (arg0 < 0xB) {
        if (arg1 == 0) {
            return;
        }
        func_001C4730(arg1, ((void *)D_00CBACA0) + (arg0 * 0x10), 0x10);
    }
}
