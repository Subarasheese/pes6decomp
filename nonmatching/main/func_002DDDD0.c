/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DDDD0(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_s0;

    WaitSema(D_003E9DD8);
    M2C_FIELD(((void *)D_005E8000), s32 *, 0) = arg0;
    M2C_FIELD(((void *)D_005E8000), s32 *, 4) = arg1;
    M2C_FIELD(((void *)D_005E8000), s32 *, 8) = (s32) *arg2;
    if (sceSifCallRpc(((void *)D_005E7FC0), 0x14, 0U, ((void *)D_005E8000), 0xC, ((void *)D_005E8000), 0xC, NULL, (void *) 0) != 0) {
        var_s0 = -1;
    } else {
        var_s0 = M2C_FIELD(((void *)D_005E8000), s32 *, 0);
    }
    func_00105380(D_003E9DD8);
    return var_s0;
}
