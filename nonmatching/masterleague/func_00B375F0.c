/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern u32 func_00B37A60(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00971B80(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00971C10(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00B365B0(s32);                         /* extern */
M2C_UNK func_00B36AD0();                            /* extern */

s32 func_00B375F0(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x28E) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x298);
            switch (temp_v1) {                      /* irregular */
            case 1:
                M2C_FIELD(temp_v0, s32 *, 0x298) = 0;
                func_001D7D80(M2C_FIELD(temp_v0, void **, 4), 0);
                func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x278), 0, 0);
                func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x278), 1, 1);
                func_00971B80(M2C_FIELD(temp_v0, s32 *, 0x278), 2, 0);
                func_00B36AD0();
                func_0026E840(0x8400F803);
                func_00958000(0x16);
                /* fallthrough */
            case 0:
                func_00B365B0(M2C_FIELD(temp_v0, s32 *, 0x298));
                goto block_16;
            default:
                return 0;
            }
        } else {
            goto block_16;
        }
    } else {
block_16:
        return 0;
    }
}
