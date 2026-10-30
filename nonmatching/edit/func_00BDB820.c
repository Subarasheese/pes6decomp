/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC4F80(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00BC7390(M2C_UNK);                     /* extern */
M2C_UNK func_00BDBBD0();                            /* extern */
M2C_UNK func_00BE59E0(u16, u16);                    /* extern */
extern void *D_003E7DC0;
extern void *D_003E7DC4;
extern void *D_003E7DC8;

s32 func_00BDB820(void) {
    s32 var_v1;

    if (func_00BC4F80(0xED0009, 0) == 0) {
        return 0x17;
    }
    func_00BE59E0(M2C_FIELD(D_003E7DC0, u16 *, 0xFA), M2C_FIELD(D_003E7DC4, u16 *, 4));
    func_00BDBBD0();
    if (M2C_FIELD(D_003E7DC8, s32 *, 0x10) == 0) {
        var_v1 = 0x1A;
    } else {
        var_v1 = 0xC;
    }
    if (var_v1 != 0xC) {
        return 9;
    }
    func_00BC7390(0xF);
    return 0xC;
}
