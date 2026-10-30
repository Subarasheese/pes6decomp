/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCCE30[];
extern char D_00CCD074[];
extern char D_00CCD07E[];
extern char D_00CCD088[];

void func_00C88DD0(u32 arg0, M2C_UNK (*arg1)(u64), M2C_UNK (*arg2)(s16)) {
    void *temp_v1;

    if (((*(s32 *)D_00CCD088) != 0) && (arg0 < 0x21U)) {
        temp_v1 = ((void *)D_00CCCE30) + (arg0 << 5);
        M2C_FIELD(temp_v1, M2C_UNK (**)(u64), 0x274) = arg1;
        M2C_FIELD(temp_v1, M2C_UNK (**)(s16), 0x278) = arg2;
        if (arg1 != NULL) {
            arg1((u64) ((s64) (*(u8 *)D_00CCD074) << 0x3D) >> 0x3F);
        }
        if (arg2 != NULL) {
            arg2((*(s16 *)D_00CCD07E));
        }
    }
}
