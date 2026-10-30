/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void sceSifSetRpcQueue(void *, int);
s32 func_00105250();                                /* extern */
M2C_UNK sceSifInitRpc(M2C_UNK);                     /* extern */
M2C_UNK sceSifRegisterRpc(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00109998(M2C_UNK *);                   /* extern */
extern char D_005E6F40[];
extern char D_005E7F50[];
extern char D_005E7F98[];
extern M2C_UNK func_002DAA00;

void func_002DAAE8(void) {
    sceSifInitRpc(0);
    sceSifSetRpcQueue(((void *)D_005E7F98), func_00105250());
    sceSifRegisterRpc(((void *)D_005E7F50), 0x80001101, &func_002DAA00, ((void *)D_005E6F40), 0, 0, ((void *)D_005E7F98));
    func_00109998(((void *)D_005E7F98));
}
