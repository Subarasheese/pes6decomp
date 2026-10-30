/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_00820C60(s32);                         /* extern */
M2C_UNK func_00D0B650();                            /* extern */

s32 func_00D12CD0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_v0;
    s32 var_a1;
    void *temp_a0_7;

    if (arg0 == NULL) {
        return 2;
    }
    func_00D0B650();
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDC0);
    if (temp_a0 != 0) {
        func_00820C60(temp_a0);
        M2C_FIELD(arg0, s32 *, 0xDC0) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xDC8);
    if (temp_a0_2 != 0) {
        func_001D7F10(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0xDC8) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xDCC);
    if (temp_a0_3 != 0) {
        func_001D7F10(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0xDCC) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xDD0);
    if (temp_a0_4 != 0) {
        func_001D7F10(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0xDD0) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0xDD4);
    if (temp_a0_5 != 0) {
        func_001D7F10(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0xDD4) = 0;
    }
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 0xDD8);
    if (temp_a0_6 != 0) {
        func_001D7F10(temp_a0_6);
        M2C_FIELD(arg0, s32 *, 0xDD8) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0xD88) = 0;
    M2C_FIELD(arg0, s8 *, 0xD89) = 1;
    M2C_FIELD(arg0, s32 *, 0xD80) = 1;
    var_a1 = 0;
    M2C_FIELD(arg0, s32 *, 0xDA8) = 2;
    M2C_FIELD(arg0, s32 *, 0xDB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xDBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC4) = 0;
    do {
        temp_v0 = var_a1 * 4;
        temp_a0_7 = arg0 + (var_a1 * 0x10);
        var_a1 += 1;
        M2C_FIELD(temp_a0_7, s32 *, 0xDDC) = 0;
        M2C_FIELD(temp_a0_7, s32 *, 0xDE0) = 0;
        M2C_FIELD(temp_a0_7, s32 *, 0xDE4) = 0;
        M2C_FIELD(temp_a0_7, s32 *, 0xDE8) = 0;
        M2C_FIELD((arg0 + temp_v0), s32 *, 0xDFC) = 0;
    } while (var_a1 < 2);
    return 0;
}
