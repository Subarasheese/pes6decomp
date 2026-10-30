/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C32010(void *, u8);                      /* extern */
extern char Pes6MatchSquads[];

void func_00C31B90(void *arg0, void *arg1, s32 *arg2) {
    s32 *var_s2;
    s32 temp_a1;
    s32 var_s3;
    u8 temp_s0;
    void *temp_a3;
    void *temp_s1;
    void *temp_s6;

    var_s3 = 0;
    var_s2 = arg2;
    temp_s6 = ((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0) * 0x6900);
    do {
        temp_s1 = arg0 + var_s3;
        temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x8C);
        if (func_00C32010(arg0, temp_s0) == 0) {
            *var_s2 = 0x64;
        } else {
            temp_a3 = temp_s6 + (temp_s0 * 0x348);
            *var_s2 = (s32) M2C_FIELD(temp_a3, s32 *, 0xD8) / (s32) ((M2C_FIELD(temp_a3, u32 *, 0x18) / 100) + ((u32) M2C_FIELD(temp_a3, u32 *, 0x18) >> 0x1F));
            if ((s32) M2C_FIELD(arg1, u8 *, 0xE) < 3) {
                temp_a1 = M2C_FIELD(temp_a3, u8 *, 0x89) & 7;
                if ((s32) M2C_FIELD(arg0, u8 *, 0x15) < temp_a1) {
                    *var_s2 += temp_a1;
                    if (*var_s2 >= 0x65) {
                        *var_s2 = 0x64;
                    }
                }
            }
        }
        if (M2C_FIELD(temp_s1, u8 *, 0xC0) != 0) {

        } else {
            *var_s2 = 0x64;
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 0xB);
}
