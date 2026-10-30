/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001134BC(void *, M2C_UNK);             /* extern */
s32 func_001144A0(void *, s32);                     /* extern */
M2C_UNK func_0011794C(void *);                      /* extern */
M2C_UNK func_00117CCC(void *);                      /* extern */
s32 func_001183B0(void *, s32);                     /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_00456FD0[];
extern char D_005F8CE8[];
extern char D_005F8D08[];

void func_00118758(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8CE8), 0x5BC, ((void *)D_005F8D08));
    }
    temp_v0 = func_001144A0(arg0, arg1);
    if (temp_v0 != -1) {
        if (M2C_FIELD((void *)0x456FD0, s32 *, 8) == M2C_FIELD(arg0, s32 *, 0x48)) {
            func_00117CCC(arg0);
        }
        goto block_10;
    }
    if (func_001183B0(arg0, arg1) == temp_v0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        M2C_FIELD((void *)0x456FD0, s32 *, 8) = temp_v0;
        M2C_FIELD((void *)0x456FD0, s32 *, 0x14) = temp_v0;
        M2C_FIELD((void *)0x456FD0, s32 *, 0x18) = temp_v0;
        M2C_FIELD((void *)0x456FD0, s32 *, 4) = (s32) (M2C_FIELD((void *)0x456FD0, s32 *, 4) & ~1);
        return;
    }
    if ((M2C_FIELD((void *)0x456FD0, s32 *, 0x14) != temp_v0) && (M2C_FIELD((void *)0x456FD0, s32 *, 0x18) != temp_v0)) {
        func_0011794C(arg0);
        func_001134BC(arg0, 1);
    }
block_10:
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(((void *)D_00456FD0), s32 *, 8) = -1;
    M2C_FIELD(((void *)D_00456FD0), s32 *, 0x14) = -1;
    M2C_FIELD(((void *)D_00456FD0), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_00456FD0), s32 *, 4) & ~1);
    M2C_FIELD(((void *)D_00456FD0), s32 *, 0x18) = -1;
    M2C_FIELD(((void *)D_00456FD0), s32 *, 0x20) = 0;
}
