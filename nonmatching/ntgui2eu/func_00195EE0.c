/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
s32 func_0019B170(s32);                             /* extern */
s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, void *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern char D_005CAA30[];
extern char D_005CAA34[];
extern char D_011FD7C0[];
extern char D_011FED80[];
extern M2C_UNK func_00195BF0;

s32 func_00195EE0(s32 arg0) {
    if (M2C_FIELD(((void *)D_011FD7C0), s32 *, 0x24) == 0) {
        return -0x64;
    }
    if (func_0019B170(M2C_FIELD(((void *)D_005CAA34), s32 *, 0)) < 0) {
        return -0xC8;
    }
    *(s32 *)0x011FD840 = arg0;
    if (func_0019EE30(((void *)D_011FD7C0), 3, 1, (s32 *)0x01200000 - 0x27C0, 0x30, ((void *)D_011FED80), 4, &func_00195BF0, 0) != 0) {
        func_0019B140(M2C_FIELD(((void *)D_005CAA34), s32 *, -0x55CC));
        return -0x5B;
    }
    (*(s32 *)D_005CAA30) = 3;
    return 0;
}
