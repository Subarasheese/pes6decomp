/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(s32, M2C_UNK, M2C_UNK, void *, s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_005CABFC[];
extern char D_01204C00[];

s32 func_001A33A8(u8 *arg0, s32 arg1) {
    s32 var_a4;
    s32 var_v0;
    u8 temp_a0;
    u8 temp_v0;
    void *temp_v0_2;

    if ((*(s32 *)D_005CABFC) < 0) {
        return 0;
    }
    temp_v0 = *arg0;
    M2C_FIELD(((void *)D_01204C00), u8 *, 4) = temp_v0;
    var_a4 = 0;
    if ((temp_v0 << 0x18) != 0) {
        var_a4 = 1;
loop_4:
        if (var_a4 < 0xFC) {
            temp_a0 = *(arg0 + var_a4);
            M2C_FIELD((((void *)D_01204C00) + 0x4C00 + var_a4), u8 *, 4) = temp_a0;
            if ((temp_a0 << 0x18) != 0) {
                var_a4 += 1;
                goto loop_4;
            }
        }
    }
    if (var_a4 == 0xFC) {
        var_a4 = 0xFB;
        M2C_FIELD((((void *)D_01204C00) + 0x4C00), s8 *, 0xFF) = 0;
    }
    M2C_FIELD(((void *)D_01204C00), s32 *, 0x4C00) = arg1;
    temp_v0_2 = ((void *)D_01204C00) + 0x4C00;
    M2C_FIELD(temp_v0_2, s8 *, 0xFF) = 0;
    var_v0 = *(s32 *)0x01204B80;
    if (func_0019EE30(0x01204B40, 3, 0, temp_v0_2, var_a4 + 5, 0x01204B80, 4, 0, 0) < 0) {
        var_v0 = -1;
    }
    return var_v0;
}
