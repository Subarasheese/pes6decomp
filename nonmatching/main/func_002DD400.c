/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_001C4730(s32, s32 *, M2C_UNK);         /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DD400(s32 arg0) {
    s32 var_s1;

    WaitSema(D_003E9DD8);
    if (sceSifCallRpc(((void *)D_005E7FC0), 0x2C, 0U, ((void *)D_005E8000), 0x10, ((void *)D_005E8000), 0x10, NULL, (void *) 0) != 0) {
        var_s1 = -1;
    } else {
        var_s1 = (*(s32 *)D_005E8000);
        func_001C4730(arg0, ((void *)D_005E8000), 0x10);
    }
    func_00105380(D_003E9DD8);
    return var_s1;
}
