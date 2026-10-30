/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DE260(void) {
    WaitSema(D_003E9DD8);
    sceSifCallRpc(((void *)D_005E7FC0), 0xF, 0U, ((void *)D_005E8000), 4, ((void *)D_005E8000), 4, NULL, (void *) 0);
    func_00105380(D_003E9DD8);
    return 0;
}
