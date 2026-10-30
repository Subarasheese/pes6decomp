/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB370(int);
extern char D_00CCD074[];

s32 func_00C8B2C0(s32 arg0) {
    M2C_UNK (*temp_v1)(u64);
    s32 temp_v0;

    temp_v0 = func_001BB370(arg0);
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, M2C_UNK (**)(u64), 0x18);
        if (temp_v1 != NULL) {
            temp_v1((u64) ((s64) (*(u8 *)D_00CCD074) << 0x3D) >> 0x3F);
        }
    }
    return 0;
}
