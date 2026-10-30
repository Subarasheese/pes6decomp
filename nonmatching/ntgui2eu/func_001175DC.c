/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00117664(s32, s32, s32, s32);          /* extern */
M2C_UNK func_001181AC(s32, s32);                    /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8CE8[];
extern char D_005F8D08[];

void func_001175DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 == 0) {
        func_001AD620(((void *)D_005F8CE8), 0x24A, ((void *)D_005F8D08));
    }
    func_00117664(arg0, arg1 & 0xFFFF, arg3 & 0xFFFF, arg4 & 0xFFFF);
    func_001181AC(arg0, arg2 & 0xFFFF);
}
