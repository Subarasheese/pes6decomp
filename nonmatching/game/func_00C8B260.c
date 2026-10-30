/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B9250(s32, M2C_UNK *, u64);         /* extern */
extern char D_00CCD074[];
extern char D_00CCD088[];
extern M2C_UNK func_00C8B2C0;

u64 func_00C8B260(s32 arg0) {
    u64 temp_a2;

    temp_a2 = (s64) (*(u8 *)D_00CCD074) << 0x3D;
    (*(u8 *)D_00CCD074) = ((*(u8 *)D_00CCD074) & ~4) | ((arg0 & 1) * 4);
    func_001B9250((*(s32 *)D_00CCD088), &func_00C8B2C0, temp_a2);
    return temp_a2 >> 0x3F;
}
