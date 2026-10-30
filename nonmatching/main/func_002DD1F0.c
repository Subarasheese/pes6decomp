/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_001C7F58(s32, void *);                 /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DD1F0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 var_s1;

    WaitSema(D_003E9DD8);
    if (sceSifCallRpc(((void *)D_005E7FC0), 0x2E, 0U, ((void *)D_005E8000), 4, ((void *)D_005E8000), 0x10C, NULL, (void *) 0) != 0) {
        var_s1 = -1;
    } else {
        var_s1 = M2C_FIELD(((void *)D_005E8000), s32 *, 0);
        *arg1 = M2C_FIELD(((void *)D_005E8000), s32 *, 4);
        *arg2 = M2C_FIELD(((void *)D_005E8000), s32 *, 8);
        func_001C7F58(arg0, ((void *)D_005E8000) + 0xC);
    }
    func_00105380(D_003E9DD8);
    return var_s1;
}
