/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void func_001E5010(void *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, M2C_UNK32 *, 0x18) = 0;
        M2C_FIELD(arg0, M2C_UNK32 *, 0x1C) = 0x3F800000;
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg1, f32 *, 0) + M2C_FIELD(arg1, f32 *, 8));
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg0, M2C_UNK32 *, 0x28) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x18);
        M2C_FIELD(arg0, M2C_UNK32 *, 0x2C) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(arg1, f32 *, 0xC));
        M2C_FIELD(arg0, M2C_UNK32 *, 0x38) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x18);
        M2C_FIELD(arg0, M2C_UNK32 *, 0x3C) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
        M2C_FIELD(arg0, M2C_UNK32 *, 0x48) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x18);
        M2C_FIELD(arg0, M2C_UNK32 *, 0x4C) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x1C);
    }
}
