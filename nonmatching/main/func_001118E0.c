/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
extern void func_00108520(s32);
M2C_UNK func_00112C28(M2C_UNK);                     /* extern */
extern char D_003729D0[];
extern char D_003729DC[];
extern char D_003F3200[];
extern char D_003F3440[];

s32 func_001118E0(void) {
    s32 var_v0;

    if (M2C_FIELD(((void *)D_003729D0), s32 *, 0) == 0) {
        return 1;
    }
    func_00112C28(0);
    M2C_FIELD(((void *)D_003F3440), s32 *, 0) = 0xF;
    var_v0 = 0;
    if (sceSifCallRpc(((void *)D_003F3200), 1, 0U, ((void *)D_003F3440), 0x80, ((void *)D_003F3440), 0x80, NULL, NULL) >= 0) {
        func_00108520(0x80000019);
        if (M2C_FIELD(((void *)D_003F3440), s32 *, 0xC) == 1) {
            M2C_FIELD(((void *)D_003729D0), s32 *, 0x29D0) = 0;
        }
        var_v0 = M2C_FIELD(((void *)D_003F3440), s32 *, 0xC);
        (*(s32 *)D_003729DC) = 0;
    }
    return var_v0;
}
