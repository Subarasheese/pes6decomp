/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001144A0(void *, s32);                     /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];

void func_00114344(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x6DF, ((void *)D_005F8700));
    }
    temp_v0 = func_001144A0(arg0, arg1);
    if (temp_v0 != -1) {
        if (M2C_FIELD((void *)0x456FD0, s32 *, 4) & 1) {
            if (M2C_FIELD((void *)0x456FD0, s32 *, 8) != temp_v0) {
                M2C_FIELD(arg0, s32 *, 0x4C) = 0;
                M2C_FIELD((void *)0x456FD0, s32 *, 8) = -1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x48) = temp_v0;
            M2C_FIELD(arg0, s32 *, 0x4C) = 1;
            M2C_FIELD((void *)0x456FD0, s32 *, 8) = temp_v0;
            M2C_FIELD((void *)0x456FD0, s32 *, 4) = (s32) (M2C_FIELD((void *)0x456FD0, s32 *, 4) | 1);
        }
    } else if (M2C_FIELD((void *)0x456FD0, s32 *, 8) != -1) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        M2C_FIELD((void *)0x456FD0, s32 *, 8) = -1;
    }
}
