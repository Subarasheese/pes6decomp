/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern u8 func_002645A0(void *, s32);
M2C_UNK func_001FAF40(M2C_UNK, u16);                /* extern */
M2C_UNK func_00CD5DE0();                            /* extern */
M2C_UNK func_00CEF8D0();                            /* extern */
M2C_UNK func_00CEFC30();                            /* extern */
s32 func_00CEFEB0();                                /* extern */
extern char D_00591BB0[];
extern char D_00591BB2[];

void func_00CEE1F0(void *arg0) {
    func_001FAF40(0, (*(u16 *)D_00591BB0));
    func_001FAF40(1, (*(u16 *)D_00591BB2));
    func_00CD5DE0();
    if (func_00CEFEB0() == 8) {
        func_00CEFC30();
    } else {
        func_00CEF8D0();
    }
    func_00264790(arg0, func_002645A0(arg0, 1));
}
