/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
s32 func_0019B170(s32);                             /* extern */
M2C_UNK func_0019E3F8(void *, M2C_UNK, s32 *);      /* extern */
s32 func_0019EE30(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, void *); /* extern */
extern char D_005CAA30[];
extern char D_005CAA34[];
extern char D_011FD7C0[];
extern char D_011FD7E8[];
extern char D_011FD7EC[];
extern char D_011FD7F0[];
extern char D_011FDCC0[];
extern char D_011FED80[];
extern M2C_UNK func_00196488;

s32 func_001964E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_s0;

    if (M2C_FIELD(((void *)D_011FD7C0), s32 *, 0x24) == 0) {
        return -0x64;
    }
    if (func_0019B170(M2C_FIELD(((void *)D_005CAA34), s32 *, 0)) < 0) {
        return -0xC8;
    }
    M2C_FIELD((void *)0x011FD840, s32 *, 4) = arg0;
    M2C_FIELD((void *)0x011FD840, s32 *, 8) = arg1;
    M2C_FIELD((void *)0x011FD840, M2C_UNK **, 0x1C) = ((void *)D_011FDCC0);
    if (arg2 != 0) {
        M2C_FIELD((void *)0x011FD840, s32 *, 0x14) = 1;
    } else {
        M2C_FIELD((void *)0x011FD840, s32 *, 0x14) = 0;
    }
    if (arg3 != 0) {
        M2C_FIELD((void *)0x011FD840, s32 *, 0x10) = 1;
    } else {
        M2C_FIELD((void *)0x011FD840, s32 *, 0x10) = 0;
    }
    if (arg4 != 0) {
        M2C_FIELD((void *)0x011FD840, s32 *, 0xC) = 1;
    } else {
        M2C_FIELD((void *)0x011FD840, s32 *, 0xC) = 0;
    }
    temp_s0 = ((void *)D_011FDCC0) - 0x2340;
    (*(s32 *)D_011FD7E8) = arg2;
    (*(s32 *)D_011FD7EC) = arg3;
    (*(s32 *)D_011FD7F0) = arg4;
    func_0019E3F8(temp_s0, 0xC0, ((void *)D_011FD7F0));
    if (func_0019EE30(((void *)D_011FD7C0) - 0x2840, 1, 1, 0x011FD840, 0x30, ((void *)D_011FED80), 4, &func_00196488, temp_s0) != 0) {
        func_0019B140(M2C_FIELD(((void *)D_005CAA34), s32 *, -0x55CC));
        return -0x5B;
    }
    (*(s32 *)D_005CAA30) = 1;
    return 0;
}
