/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00231E90(u8, s32);                         /* extern */
extern s32 D_003E77B0;

s32 func_00324CB0(void *arg0) {
    s32 temp_v1;
    s32 var_s1;
    void *var_s0;

    if ((M2C_FIELD(arg0, s32 *, 0) == 6) && (M2C_FIELD(arg0, u8 *, 0xD) != 0)) {
        var_s1 = 0;
        var_s0 = arg0;
        do {
            temp_v1 = func_00231E90(M2C_FIELD((D_003E77B0 + (var_s1 % 2)), u8 *, 0x2C), (M2C_FIELD(arg0, u8 *, 0xD) - 1) & 0xFF) & 0xFF;
            switch (temp_v1) {                      /* irregular */
            case 1:
                M2C_FIELD(var_s0, s32 *, 0x8C8) = 1;
                break;
            case 2:
                M2C_FIELD(var_s0, s32 *, 0x8C8) = 2;
                break;
            case 3:
                M2C_FIELD(var_s0, s32 *, 0x8C8) = 3;
                break;
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x8C8) = 4;
        M2C_FIELD(arg0, s32 *, 0x8CC) = 4;
    }
    return 1;
}
