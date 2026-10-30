/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sceSifWriteBackDCache(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00116FD0(void *);                          /* extern */
M2C_UNK func_001C4730(s32, M2C_UNK *, s32);         /* extern */
extern char D_003F4F80[];

void *func_00117100(s32 arg0, void *arg1) {
    s32 var_s3;

    var_s3 = 0;
    sceSifWriteBackDCache(((void *)D_003F4F80), 0x1000);
    switch (arg0) {                                 /* irregular */
    case 1:
        var_s3 = func_00116FD0(arg1);
        break;
    case 2:
        func_001C4730(*(s32 *)0x3F6F80, ((void *)D_003F4F80), M2C_FIELD(arg1, s32 *, 0xC));
        func_001C4730(*(s32 *)0x3F6F80 | 0x20000000, ((void *)D_003F4F80), M2C_FIELD(arg1, s32 *, 0xC));
        *(s32 *)0x3F6F80 += M2C_FIELD(arg1, s32 *, 0xC);
        break;
    }
    M2C_FIELD(arg1, s32 *, 4) = var_s3;
    return arg1;
}
