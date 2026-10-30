/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77020(void);
extern s32 func_002F3A20(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00B74160(void) {
    u32 temp_v0;
    u8 temp_v1;
    u8 var_v0;

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3CC) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3CD);
            switch (temp_v1) {                      /* irregular */
            case 0:
                var_v0 = 3;
                M2C_FIELD(temp_v0, u8 *, 0x3CD) = 2U;
block_22:
                M2C_FIELD(temp_v0, u8 *, 0x3CC) = var_v0;
                break;
            case 1:
                func_0026E840(0x84008401);
                var_v0 = 2;
                M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x3D2) + temp_v0), u8 *, 0x3D3) = (u8) M2C_FIELD(temp_v0, u8 *, 0x628);
                M2C_FIELD(temp_v0, u8 *, 0x3CD) = 0U;
                goto block_22;
            case 3:
                func_0026E840(0x84008401);
                func_002F3A20(M2C_FIELD(temp_v0, void **, 0x62C));
                var_v0 = 5;
                goto block_22;
            case 2:
                var_v0 = 8;
                goto block_22;
            }
        }
    }
    return 0;
}
