/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00970380(s8, s32);
extern void * func_00223C10(void);
u16 *func_00224E20(s32, s32);                       /* extern */
void *func_00994C60(s32, s32);                      /* extern */

void func_00995690(void) {
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u16 *temp_v0;
    u16 temp_s0;
    u8 *temp_s1;
    void *temp_v0_2;

    var_s3 = 0;
    do {
        var_s2 = 0;
loop_2:
        temp_s1 = func_00223C10();
        temp_v0 = func_00224E20(var_s3 & 0xFF, var_s2 & 0xFF);
        if ((temp_s1 != NULL) && (temp_v0 != NULL)) {
            temp_s0 = *temp_v0;
            if ((temp_s0 != 0) && ((*temp_s1 & 0xF) == 4)) {
                func_00970380(var_s3 & 0xFF, var_s2 & 0xFF);
                var_s1 = 0;
                do {
                    temp_v0_2 = func_00994C60(var_s3, var_s1);
                    if ((temp_v0_2 != NULL) && (temp_s0 == M2C_FIELD(temp_v0_2, u16 *, 4))) {
                        M2C_FIELD(temp_v0_2, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 1) & ~0x78) | 0x18);
                        M2C_FIELD(temp_v0_2, u16 *, 0) = (u16) ((M2C_FIELD(temp_v0_2, u16 *, 0) & ~0x780) | 0x280);
                    }
                    var_s1 += 1;
                } while (var_s1 < 0x25);
            }
        }
        var_s2 += 1;
        if (var_s2 < 0x20) {
            goto loop_2;
        }
        var_s3 += 1;
    } while (var_s3 < 0x48);
}
