/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
void *func_00224520(s32, s32);                      /* extern */
M2C_UNK func_00B74370();                            /* extern */
M2C_UNK func_00B744C0();                            /* extern */
s32 func_00B74B10(u8);                              /* extern */
M2C_UNK func_00B75280();                            /* extern */
s32 func_00B75F30();                                /* extern */
M2C_UNK func_00B76820();                            /* extern */
extern void *D_003EAF00;
extern u8 D_003EAF04;

s32 func_00B76C40(void) {
    s32 temp_s0;
    s32 var_s3;
    void *temp_s1;
    void *temp_s2;

    temp_s2 = D_003EAF00;
    if (temp_s2 != NULL) {
        if ((M2C_FIELD(temp_s2, u8 *, 0x9A1) == 0) && (M2C_FIELD(temp_s2, u8 *, 0x9A0) == 1)) {
            M2C_FIELD(temp_s2, u8 *, 0x9A1) = 1U;
            func_00B76820();
            func_00B75280();
            temp_s1 = D_003EAF00;
            if (temp_s1 != NULL) {
                temp_s0 = func_00225820() & 0xFF;
                var_s3 = 0;
                if ((s32) M2C_FIELD(temp_s1, u8 *, 0x7A1) > 0) {
                    do {
                        M2C_FIELD((temp_s1 + (var_s3 & 0xFF)), u8 *, 0xAC4) = (u8) M2C_FIELD(func_00224520(temp_s0 & 0xFF, func_002243B0(temp_s0 & 0xFF, var_s3) & 0xFF), u8 *, 2);
                        var_s3 = (var_s3 + 1) & 0xFF;
                    } while (var_s3 < (s32) M2C_FIELD(temp_s1, u8 *, 0x7A1));
                }
            }
        }
        if (M2C_FIELD(temp_s2, u8 *, 0x9A0) == 1) {
            func_00B74370();
            D_003EAF04 = func_00B74B10(D_003EAF04);
            func_00B744C0();
        }
        return func_00B75F30();
    }
    return 1;
}
