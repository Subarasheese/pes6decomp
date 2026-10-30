/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_008B20C0[];

s32 func_00857B70(void *arg0) {
    s32 var_s0;
    void *temp_a0;

    var_s0 = 0;
    do {
        temp_a0 = ((void *)D_008B20C0) + (var_s0 * 0x10);
        if (M2C_FIELD(temp_a0, s32 *, 0xC) == arg0) {
            func_001C48E8(temp_a0, 0, 0x10);
        }
        var_s0 += 1;
    } while (var_s0 < 0xA);
    M2C_FIELD(arg0, s16 *, 0x16) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    return 0;
}
