/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_00AF1B30();                                /* extern */
s32 func_00AF1DA0();                                /* extern */
M2C_UNK func_00AF2250(s32);                         /* extern */
M2C_UNK func_00AF2320(s32, u8, M2C_UNK);            /* extern */
M2C_UNK func_00AF29C0();                            /* extern */
extern void *D_003EAD44;

s32 func_00AF0310(void) {
    void *temp_s0;

    temp_s0 = D_003EAD44;
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x2330) == 0) {
            if (func_00AF1DA0() != 1) {
                return 0;
            }
            M2C_FIELD(temp_s0, s32 *, 0x2330) = 1;
            func_00AF29C0();
            func_00AF2320(M2C_FIELD(temp_s0, s32 *, 0x2330), M2C_FIELD(temp_s0, u8 *, 0x2084), 0);
            func_00AF2250(M2C_FIELD(temp_s0, s32 *, 0x2330));
            func_00958000(0x8E);
            return 0;
        }
        return func_00AF1B30();
    }
    return 0;
}
