/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK FlushCache(M2C_UNK);                     /* extern */
M2C_UNK printf(M2C_UNK);                     /* extern */
M2C_UNK sceSifInitRpc(M2C_UNK);                     /* extern */
s32 sceSifBindRpc(void *, M2C_UNK, M2C_UNK);        /* extern */
extern char D_00372A10[];
extern char D_00372A14[];
extern char D_003F3580[];

s32 func_00112D80(void) {
    s32 var_v0;

    sceSifInitRpc(0);
loop_1:
    var_v0 = 0x2710;
    if (sceSifBindRpc(((void *)D_003F3580) + 0x3580, 0x80000701, 0) < 0) {
        printf(0x3C40A8);
        return -1;
    }
    do {
        var_v0 -= 1;
    } while (var_v0 != -1);
    if (M2C_FIELD(((void *)D_003F3580), s32 *, 0x24) != 0) {
        (*(s32 *)D_00372A10) = 0;
        (*(s32 *)D_00372A14) = 0;
        FlushCache(0);
        return 0;
    }
    goto loop_1;
}
