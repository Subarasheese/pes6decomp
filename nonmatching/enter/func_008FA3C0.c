/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022C1E0(void);
extern int func_003258F0(int, int);
void *func_0022A200(u8, s32, s32);                  /* extern */

s32 func_008FA3C0(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    void *temp_s0;
    void *temp_v0_2;

    temp_s0 = func_0022C1E0();
    temp_v0 = M2C_FIELD(arg1, s32 *, 0x1C);
    if (temp_v0 >= 3) {
        var_s2 = temp_v0 - 1;
        var_s3 = 3;
        if (var_s2 != 0) {
loop_6:
            temp_v0_2 = func_0022A200(M2C_FIELD(temp_s0, u8 *, 1), func_003258F0((s32) arg1, arg0 & 0xFF) & 0xFFFF, var_s2 & 0xFF);
            if (temp_v0_2 != NULL) {
                var_v1 = ((s64) ((((s64) ((((s64) ((((s64) ((((s64) ((((s64) ((((s64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 7) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 8)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0xB)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0xC)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0xD)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0xE)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0xF)) << 0x30) >> 0x30) - ((s64) ((((s64) ((((s64) ((((s64) ((((s64) ((((s64) ((((s64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 9) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0xA)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0x10)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0x11)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0x12)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0x13)) << 0x30) >> 0x30) + M2C_FIELD(temp_v0_2, u8 *, 0x14)) << 0x30) >> 0x30);
                if (var_v1 <= 0) {
                    var_v1 = -var_v1;
                }
                if ((var_v1 != 1) && (var_v1 != 0) && (var_s3 == 3)) {
                    var_s3 = 2;
                }
                var_s2 -= 1;
                if (var_s2 == 0) {
                    goto block_18;
                }
                goto loop_6;
            }
            return 1;
        }
block_18:
        return var_s3;
    }
    return 1;
}
