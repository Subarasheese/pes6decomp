/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_001C4730(s32, void *, s32);            /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DE430(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;

    WaitSema(D_003E9DD8);
    M2C_FIELD(((void *)D_005E8000), s32 *, 0) = arg0;
    M2C_FIELD(((void *)D_005E8000), s32 *, 4) = arg2;
    M2C_FIELD(((void *)D_005E8000), s32 *, 8) = arg3;
    if (sceSifCallRpc(((void *)D_005E7FC0), 8, 0U, ((void *)D_005E8000), 0x10, ((void *)D_005E8000), arg2 + 0x10, NULL, (void *) 0) == 0) {
        if (M2C_FIELD(((void *)D_005E8000), s32 *, 0) > 0) {
            func_001C4730(arg1, ((void *)D_005E8000) + 0xC, M2C_FIELD(((void *)D_005E8000), s32 *, 0));
        }
        var_s0 = M2C_FIELD(((void *)D_005E8000), s32 *, 0);
    } else {
        var_s0 = -1;
    }
    func_00105380(D_003E9DD8);
    return var_s0;
}
