/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_001C4730(void *, void *, s32);         /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DDF30(s32 arg0, void *arg1, s32 arg2, s32 arg3, void *arg4, s32 *arg5) {
    s32 var_s0;

    WaitSema(D_003E9DD8);
    M2C_FIELD(((void *)D_005E8000), s32 *, 0) = arg0;
    M2C_FIELD(((void *)D_005E8000), s32 *, 4) = arg2;
    M2C_FIELD(((void *)D_005E8000), s32 *, 8) = arg3;
    M2C_FIELD(((void *)D_005E8000), s32 *, 0x1C) = (s32) *arg5;
    func_001C4730(((void *)D_005E8000) + 0xC, arg4, 0x10);
    if (sceSifCallRpc(((void *)D_005E7FC0), 0xB, 0U, ((void *)D_005E8000), 0x24, ((void *)D_005E8000), arg2 + 0x24, NULL, (void *) 0) == 0) {
        if (M2C_FIELD(((void *)D_005E8000), s32 *, 0) > 0) {
            func_001C4730(arg4, ((void *)D_005E8000) + 0xC, 0x10);
            func_001C4730(arg1, ((void *)D_005E8000) + 0x20, M2C_FIELD(((void *)D_005E8000), s32 *, 0));
        }
        var_s0 = M2C_FIELD(((void *)D_005E8000), s32 *, 0);
    } else {
        var_s0 = -1;
    }
    func_00105380(D_003E9DD8);
    return var_s0;
}
