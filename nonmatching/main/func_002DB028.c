/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK printf(M2C_UNK *, s32);              /* extern */
s32 func_002DAF70();                                /* extern */
extern char D_003DC4C0[];
extern M2C_UNK func_002DAF48;

s32 func_002DB028(void *arg0, void *arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_002DAF70();
    if (temp_v0 < 0) {
        printf(((void *)D_003DC4C0), arg2);
        return temp_v0;
    }
    return sceSifCallRpc(arg0, arg2, 1U, arg1, 0x1000, arg1, 0x1000, &func_002DAF48, (void *) temp_v0);
}
