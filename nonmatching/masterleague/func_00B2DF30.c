/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002383D0(s32);
extern s32 func_00151EA0(s32);
extern u8 func_00225820(void);
extern void * func_00228A80(void);
extern s32 func_00B2A6D0(s32);
extern u8 func_00B01400(s32);
extern s32 func_00B03CE0(s32);
s32 func_00937F90(u16);                             /* extern */
void *func_0093B550(u16);                           /* extern */
s32 func_0099B4B0();                                /* extern */
M2C_UNK func_00B1B4F0(M2C_UNK, s32, u16, M2C_UNK);  /* extern */
s32 func_00B2BE50(s32, u16);                        /* extern */

void func_00B2DF30(void) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s6;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_s3;
    s64 temp_s5_3;
    u16 temp_s4;
    void *temp_v0;
    void *temp_v0_2;

    if (func_0099B4B0() != 1) {
        temp_v0 = func_00228A80();
        if (temp_v0 != NULL) {
            temp_s2 = func_00225820() & 0xFF;
            temp_s0 = temp_s2 & 0xFF;
            temp_s6 = func_002383D0(temp_s2) & 0xFF;
            var_s3 = 0;
            do {
                temp_s4 = M2C_FIELD((temp_v0 + (temp_s0 << 5) + ((var_s3 & 0xFF) * 2)), u16 *, 0x325AE);
                if ((temp_s4 != 0) && !(func_00B2A6D0((s32) temp_s4) & 0xFF)) {
                    temp_v0_2 = func_0093B550(temp_s4);
                    if ((temp_v0_2 != NULL) && ((s32) ((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 1) << 0x38) >> 0x3A) >= 2)) {
                        if (temp_s6 == 0) {
                            var_s1 = func_00151EA0(0x40) & 0xFF;
                            temp_s5 = func_00B01400(temp_s2) & 0xFF;
                            if (((func_00B01400(var_s1) & 0xFF) < temp_s5) && ((func_00B01400(var_s1) & 0xFF) < 0xF)) {

                            } else {
                                goto block_12;
                            }
                        } else {
                            var_s1 = ((func_00151EA0(8) & 0xFFFF) + 0x40) & 0xFF;
block_12:
                            if ((temp_s0 != (var_s1 & 0xFF)) && (func_00B2BE50(var_s1, temp_s4) != 0)) {
                                temp_v0_3 = func_00937F90(temp_s4);
                                temp_s5_2 = (((temp_v0_3 & 0xFF) / 12) + ((u32) (temp_v0_3 & 0xFF) >> 0x1F)) & 0xFF;
                                temp_s5_3 = (s64) (((temp_s5_2 & 0xFF) * (0x20 - (func_00B03CE0(var_s1) & 0xFF))) << 0x30) >> 0x30;
                                if (temp_s5_3 >= (func_00151EA0(0x64) & 0xFFFF)) {
                                    func_00B1B4F0(5, var_s1, temp_s4, 0);
                                }
                            }
                        }
                    }
                }
                var_s3 = (var_s3 + 1) & 0xFF;
            } while (var_s3 < 0x10);
        }
    }
}
