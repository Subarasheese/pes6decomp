/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
s32 func_001053B0(s32);                             /* extern */
M2C_UNK sceSifWriteBackDCache(s32, s32);                    /* extern */
extern char D_00374650[];
extern char D_00374654[];
extern char D_003F3880[];
extern char D_003F3D80[];
extern char D_003F4E40[];
extern M2C_UNK func_00115708;

s32 func_001172D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (M2C_FIELD(((void *)D_003F3880), s32 *, 0x24) == 0) {
        return -0x64;
    }
    if (func_001053B0(M2C_FIELD(((void *)D_00374654), s32 *, 0)) < 0) {
        return -0xC8;
    }
    M2C_FIELD((void *)0x3F3900, s32 *, 0) = arg0;
    M2C_FIELD((void *)0x3F3900, M2C_UNK **, 0x1C) = ((void *)D_003F3D80);
    M2C_FIELD((void *)0x3F3900, s32 *, 0x18) = arg1;
    M2C_FIELD((void *)0x3F3900, s32 *, 0xC) = arg2;
    sceSifWriteBackDCache(arg1, arg2);
    temp_v0 = sceSifCallRpc(((void *)D_003F3880), 0x1B, 1U, (void *)0x3F3900, 0x30, ((void *)D_003F4E40), 4, &func_00115708, NULL);
    if (temp_v0 == 0) {
        (*(s32 *)D_00374650) = 0x1B;
    } else {
        func_00105380(M2C_FIELD(((void *)D_00374654), s32 *, 0x4654));
    }
    return temp_v0;
}
