/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
s32 func_0019B170(s32);                             /* extern */
s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern char D_005CAA30[];
extern char D_005CAA34[];
extern char D_011FD7C0[];
extern char D_011FED80[];
extern M2C_UNK func_00195BF0;

s32 func_00195FA0(s32 arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(((void *)D_011FD7C0), s32 *, 0x24) == 0) {
        return -0x64;
    }
    if (func_0019B170(M2C_FIELD(((void *)D_005CAA34), s32 *, 0)) < 0) {
        return -0xC8;
    }
    M2C_FIELD((void *)0x011FD840, s32 *, 0) = arg0;
    M2C_FIELD((void *)0x011FD840, s32 *, 0x10) = arg1;
    M2C_FIELD((void *)0x011FD840, s32 *, 0x14) = arg2;
    if (func_0019EE30(((void *)D_011FD7C0), 4, 1, 0x011FD840, 0x30, ((void *)D_011FED80), 4, &func_00195BF0, 0) != 0) {
        func_0019B140(M2C_FIELD(((void *)D_005CAA34), s32 *, -0x55CC));
        return -0x5B;
    }
    (*(s32 *)D_005CAA30) = 4;
    return 0;
}
