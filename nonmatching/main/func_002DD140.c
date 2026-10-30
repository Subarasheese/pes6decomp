/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DD140(s32 *arg0) {
    s32 var_s1;

    WaitSema(D_003E9DD8);
    if (sceSifCallRpc(((void *)D_005E7FC0), 0x2F, 0U, ((void *)D_005E8000), 4, ((void *)D_005E8000), 8, NULL, (void *) 0) != 0) {
        var_s1 = -1;
    } else {
        var_s1 = M2C_FIELD(((void *)D_005E8000), s32 *, 0);
        *arg0 = M2C_FIELD(((void *)D_005E8000), s32 *, 4);
    }
    func_00105380(D_003E9DD8);
    return var_s1;
}
