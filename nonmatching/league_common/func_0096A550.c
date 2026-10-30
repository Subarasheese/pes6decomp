/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u16 *func_00229310();                               /* extern */
void *func_0022F0E0();                              /* extern */
M2C_UNK func_00930490();                            /* extern */
M2C_UNK func_0094C710(M2C_UNK);                     /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
u8 *func_009614F0();                                /* extern */
M2C_UNK func_0097D7D0();                            /* extern */
M2C_UNK func_0097D850();                            /* extern */
extern void *D_003E77AC;

s32 func_0096A550(void) {
    s32 var_a2;
    s32 var_s3;
    u16 *temp_s2;
    u16 *var_a0;
    u8 *temp_s1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1;

    var_s3 = -1;
    temp_s2 = func_00229310();
    temp_s1 = func_009614F0();
    temp_s0 = func_0022F0E0();
    if (M2C_FIELD(D_003E77AC, s32 *, 4) != 0) {

    } else {
        func_00930490();
        if ((temp_s2 != NULL) && (temp_s0 != NULL)) {
            var_a2 = 0;
            var_a0 = temp_s2;
loop_5:
            if (M2C_FIELD(var_a0, u16 *, 2) != 0xFFFF) {
                var_a2 += 1;
                var_a0 += 2;
                if (var_a2 <= 0) {
                    goto loop_5;
                }
            } else {
                temp_a0 = (var_a2 * 4) + temp_s2;
                M2C_FIELD(&temp_s2[var_a2], u16 *, 2) = (u16) *temp_s2;
                temp_v1 = (var_a2 * 8) + temp_s2;
                M2C_FIELD(temp_a0, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 0);
                M2C_FIELD(temp_a0, u16 *, 6) = (u16) M2C_FIELD(temp_s0, u16 *, 2);
                M2C_FIELD(temp_v1, u8 *, 8) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
                M2C_FIELD(temp_v1, u8 *, 0xC) = (u8) M2C_FIELD(temp_s0, u8 *, 8);
                M2C_FIELD(temp_v1, u8 *, 9) = (u8) M2C_FIELD(temp_s0, u8 *, 5);
                M2C_FIELD(temp_v1, u8 *, 0xD) = (u8) M2C_FIELD(temp_s0, u8 *, 9);
                M2C_FIELD(temp_v1, u8 *, 0xA) = (u8) M2C_FIELD(temp_s0, u8 *, 6);
                M2C_FIELD(temp_v1, u8 *, 0xE) = (u8) M2C_FIELD(temp_s0, u8 *, 0xA);
                M2C_FIELD(temp_v1, u8 *, 0xB) = (u8) M2C_FIELD(temp_s0, u8 *, 7);
                M2C_FIELD(temp_v1, u8 *, 0xF) = (u8) M2C_FIELD(temp_s0, u8 *, 0xB);
            }
        }
        func_0097D850();
        func_0097D7D0();
        var_s3 = 0x31;
        if ((temp_s1 != NULL) && (*temp_s1 & 3)) {
            func_0094C710(0x31);
            var_s3 = 0x25;
        }
    }
    if (var_s3 != -1) {
        func_0094C790(0);
    }
    return var_s3;
}
