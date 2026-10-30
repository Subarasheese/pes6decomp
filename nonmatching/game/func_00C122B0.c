/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C12360(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern char D_00CBDED0[];

void func_00C122B0(s32 arg0, s32 arg1, s32 arg2) {
    if (((u32) (arg0 & 0xFF) < 8U) && ((arg1 & 0xFF) < 2) && ((arg2 & 0xFF) < 0x20)) {
        func_00C12360(((void *)D_00CBDED0), 0, 2, arg0, arg1, arg2);
        func_00C12360(((void *)D_00CBDED0), 1, 3, arg0, arg1, arg2);
    }
}
