/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_001C4730(s32 *, s32, M2C_UNK);         /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DD790(s32 arg0) {
    s32 var_s0;

    WaitSema(D_003E9DD8);
    func_001C4730(((void *)D_005E8000), arg0, 0x10);
    if (sceSifCallRpc(((void *)D_005E7FC0), 0x23, 0U, ((void *)D_005E8000), 0x10, ((void *)D_005E8000), 0x10, NULL, (void *) 0) != 0) {
        var_s0 = -1;
    } else {
        var_s0 = (*(s32 *)D_005E8000);
    }
    func_00105380(D_003E9DD8);
    return var_s0;
}
