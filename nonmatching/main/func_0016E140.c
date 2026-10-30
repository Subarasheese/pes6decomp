/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void sceSifSetRpcQueue(void *, int);
s32 func_00105250();                                /* extern */
M2C_UNK sceSifRegisterRpc(M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00109998(M2C_UNK *);                   /* extern */
extern char D_00385924[];
extern char D_00385928[];
extern char D_003861E8[];
extern char D_00386230[];
extern char D_00386250[];
extern M2C_UNK func_0016E090;

s32 func_0016E140(void) {
    sceSifSetRpcQueue(((void *)D_00386230), func_00105250());
    sceSifRegisterRpc(((void *)D_003861E8), (*(s32 *)D_00385924), &func_0016E090, ((void *)D_00386250), 0, 0, ((void *)D_00386230));
    (*(s32 *)D_00385928) = 1;
    func_00109998(((void *)D_00386230));
    return 0;
}
