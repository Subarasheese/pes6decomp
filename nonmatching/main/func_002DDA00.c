/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_00146C70(M2C_UNK *);                   /* extern */
extern char D_003DC520[];
extern s32 D_003E9DCC;
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DDA00(void) {
    s32 var_s0;

    var_s0 = 0;
    WaitSema(D_003E9DD8);
    if (D_003E9DCC != 0) {
        if (sceSifCallRpc(((void *)D_005E7FC0), 0x1E, 0U, ((void *)D_005E8000), 4, ((void *)D_005E8000), 4, NULL, (void *) 0) != 0) {
            var_s0 = -1;
        } else {
            var_s0 = (*(s32 *)D_005E8000);
            D_003E9DCC = 0;
            func_00146C70(((void *)D_003DC520));
        }
    }
    func_00105380(D_003E9DD8);
    return var_s0;
}
