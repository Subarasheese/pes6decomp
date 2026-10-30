/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00113AC8(void *);                      /* extern */
M2C_UNK func_001144A0(void *, s32);                 /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_00456FD0[];
extern char D_005F8648[];
extern char D_005F8700[];

void func_00114410(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x70D, ((void *)D_005F8700));
    }
    func_001144A0(arg0, arg1);
    if (M2C_FIELD(((void *)D_00456FD0), s32 *, 8) == M2C_FIELD(arg0, s32 *, 0x48)) {
        func_00113AC8(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(((void *)D_00456FD0), s32 *, 8) = -1;
    M2C_FIELD(((void *)D_00456FD0), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_00456FD0), s32 *, 4) & ~1);
}
