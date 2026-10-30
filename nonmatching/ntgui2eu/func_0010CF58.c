/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010D138(s32, s32);                    /* extern */
M2C_UNK func_0010DA28(s32);                         /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001AE7D8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005F7F48[];
extern char D_005F7F68[];
extern char D_005F7F78[];

void func_0010CF58(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        func_001AD620(((void *)D_005F7F48), 0xB1, ((void *)D_005F7F68));
    }
    if (arg1 == 0) {
        func_001AD620(((void *)D_005F7F48), 0xB2, ((void *)D_005F7F78));
    }
    func_001AE7D8(arg0, 0, 0x310);
    func_0010DA28(arg0);
    func_0010D138(arg0, arg1);
}
