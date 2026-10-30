/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void sceSifSetRpcQueue(void *, int);
s32 func_00105250();                                /* extern */
M2C_UNK sceSifRegisterRpc(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00109998(M2C_UNK *);                   /* extern */
extern char D_003F4E80[];
extern char D_003F4E98[];
extern char D_003F4F00[];
extern M2C_UNK func_00117100;

void func_00116CC0(void) {
    sceSifSetRpcQueue(((void *)D_003F4E80), func_00105250());
    sceSifRegisterRpc(((void *)D_003F4E98), 0x80000400, &func_00117100, ((void *)D_003F4F00), 0, 0, ((void *)D_003F4E80));
    func_00109998(((void *)D_003F4E80));
}
