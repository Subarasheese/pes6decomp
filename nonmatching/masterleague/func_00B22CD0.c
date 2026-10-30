/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00225820();                                /* extern */
s32 func_00228960();                                /* extern */
s32 func_00938F10(s16);                             /* extern */
u8 *func_0093B3C0(s16);                             /* extern */
void *func_00994C60(s32, s32);                      /* extern */
extern char D_00B8C760[];

s32 func_00B22CD0(void) {
    s16 *var_s3;
    s16 var_s4;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s5;
    s32 var_s6;
    u64 temp_v1_2;
    u8 *temp_v0_2;
    void *temp_v0_3;

    if (func_00228960() == 0) {
        return 0;
    }
    func_001C48E8(((void *)D_00B8C760), 0, 0x2714);
    var_s6 = 0;
    temp_s2 = func_00225820() & 0xFF;
    var_s4 = 1;
    var_s3 = ((void *)D_00B8C760);
    do {
        temp_v0 = var_s4 & 0xFFFF;
        if ((temp_v0 >= 0x12B1) && (temp_v0 < 0x7000)) {
            var_s4 = 0x7000;
        }
        temp_v1 = var_s4 & 0xFFFF;
        if ((temp_v1 >= 0x7020) && (temp_v1 < 0x8000)) {
            var_s4 = 0x8000 & 0xFFFF;
        }
        temp_v0_2 = func_0093B3C0(var_s4);
        if (temp_v0_2 != NULL) {
            if (temp_s2 != (func_00938F10(var_s4) & 0xFF)) {
                var_s5 = 0;
loop_12:
                temp_v0_3 = func_00994C60(temp_s2, var_s5);
                if ((temp_v0_3 == NULL) || ((var_s4 & 0xFFFF) != M2C_FIELD(temp_v0_3, u16 *, 4))) {
                    var_s5 += 1;
                    if (var_s5 < 0x25) {
                        goto loop_12;
                    }
                }
                if (var_s5 != 0x25) {
                    goto block_17;
                }
            } else {
block_17:
                if (((u64) ((s64) *temp_v0_2 << 0x39) >> 0x3A) != 1) {
                    temp_v1_2 = (u64) ((s64) (u16) *temp_v0_2 << 0x35) >> 0x3C;
                    if ((temp_v1_2 != 5) && (temp_v1_2 != 4)) {
                        *var_s3 = var_s4;
                        var_s3 += 2;
                        var_s6 += 1;
                    }
                }
            }
        }
        var_s4 = (var_s4 + 1) & 0xFFFF;
    } while (var_s4 < 0x80B8);
    return var_s6;
}
