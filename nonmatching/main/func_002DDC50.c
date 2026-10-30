/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_001C7F58(s32 *, s32);                  /* extern */
s32 func_001C80F0(s32 *);                           /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DDC50(s32 arg0) {
    s32 var_s0;

    WaitSema(D_003E9DD8);
    func_001C7F58(((void *)D_005E8000), arg0);
    if (sceSifCallRpc(((void *)D_005E7FC0), 0x12, 0U, ((void *)D_005E8000), func_001C80F0(((void *)D_005E8000)) + 1, ((void *)D_005E8000), 4, NULL, (void *) 0) != 0) {
        var_s0 = 0;
    } else {
        var_s0 = (*(s32 *)D_005E8000);
    }
    func_00105380(D_003E9DD8);
    return var_s0;
}
