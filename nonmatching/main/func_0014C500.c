/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern unsigned short func_001454A0(void *);
extern unsigned short func_001454B0(void *);
extern s32 func_00145460(s32);
s32 func_00151600(M2C_UNK, s32, M2C_UNK, u16, u16, M2C_UNK, M2C_UNK); /* extern */

s32 func_0014C500(void *arg0, s32 arg1) {
    s32 temp_a6;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    s32 var_v0;
    u16 temp_s2;
    u16 temp_s3;

    temp_s3 = func_001454B0(arg0);
    temp_s2 = func_001454A0(arg0);
    var_s1 = func_00145460((s32) arg0);
    temp_v0 = func_00151600(0, arg1, 3, temp_s3, temp_s2, 0, 1);
    var_v0 = func_00145460(temp_v0);
    var_a1 = 0;
    if ((s32) temp_s2 > 0) {
        do {
            var_a2 = 0;
            if ((s32) temp_s3 > 0) {
                do {
                    var_a2 += 1;
                    M2C_FIELD(var_v0, u8 *, 0) = (u8) ((M2C_FIELD(var_v0, u8 *, 0) & ~0x1F) | (((s32) M2C_FIELD(var_s1, u8 *, 0) >> 3) & 0x1F));
                    M2C_FIELD(var_v0, u8 *, 0) = (s16) (((u16) M2C_FIELD(var_v0, u8 *, 0) & ~0x3E0) | ((((s32) M2C_FIELD(var_s1, u8 *, 1) >> 3) & 0x1F) << 5));
                    M2C_FIELD(var_v0, u8 *, 1) = (u8) ((M2C_FIELD(var_v0, u8 *, 1) & ~0x7C) | ((((s32) M2C_FIELD(var_s1, u8 *, 2) >> 3) & 0x1F) * 4));
                    temp_a6 = M2C_FIELD(var_s1, u8 *, 3) != 0;
                    var_s1 += 4;
                    M2C_FIELD(var_v0, u8 *, 1) = (u8) ((M2C_FIELD(var_v0, u8 *, 1) & ~0x80) | (temp_a6 << 7));
                    var_v0 += 2;
                } while (var_a2 < (s32) temp_s3);
            }
            var_a1 += 1;
        } while (var_a1 < (s32) temp_s2);
    }
    return temp_v0;
}
