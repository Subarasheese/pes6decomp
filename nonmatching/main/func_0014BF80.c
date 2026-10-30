/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern unsigned short func_001454A0(void *);
extern s32 func_00145460(s32);
extern unsigned short func_001454B0(void *);
s32 func_00151600(M2C_UNK, s32, M2C_UNK, u16, u16, M2C_UNK, M2C_UNK); /* extern */

s32 func_0014BF80(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    u16 temp_s2;
    u16 temp_s3;
    u64 temp_a4;

    temp_s3 = func_001454B0(arg0);
    temp_s2 = func_001454A0(arg0);
    var_s1 = func_00145460((s32) arg0);
    temp_v0 = func_00151600(0, arg1, 4, temp_s3, temp_s2, 0, 1);
    var_v0 = func_00145460(temp_v0);
    var_v1 = 0;
    if ((s32) temp_s2 > 0) {
        do {
            var_a0 = 0;
            if ((s32) temp_s3 > 0) {
                do {
                    var_a0 += 1;
                    M2C_FIELD(var_v0, s8 *, 0) = (s8) ((M2C_FIELD(var_s1, u8 *, 0) & 0x1F) * 8);
                    M2C_FIELD(var_v0, s8 *, 1) = (s8) (((u64) ((s64) (u16) M2C_FIELD(var_s1, u8 *, 0) << 0x36) >> 0x3B) * 8);
                    M2C_FIELD(var_v0, s8 *, 2) = (s8) (((u64) ((s64) M2C_FIELD(var_s1, u8 *, 1) << 0x39) >> 0x3B) * 8);
                    temp_a4 = (s64) M2C_FIELD(var_s1, u8 *, 1) << 0x38;
                    var_s1 += 2;
                    M2C_FIELD(var_v0, s8 *, 3) = (s8) (((temp_a4 >> 0x3F) == 0) ? 0 : 0x80);
                    var_v0 += 4;
                } while (var_a0 < (s32) temp_s3);
            }
            var_v1 += 1;
        } while (var_v1 < (s32) temp_s2);
    }
    return temp_v0;
}
