/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0099C350(void);
extern s32 func_002397F0(s32, s32);
extern s32 func_0022BB90(s32);
extern void * func_0022C1E0(void);
extern u8 func_00239C20(s32);
extern s32 func_0022C140(s32);
void *func_0022BFF0(u8, s32);                       /* extern */
M2C_UNK func_00239C70(u8);                          /* extern */
s32 func_00239DA0(u8, u8);                          /* extern */
M2C_UNK func_0094EA40();                            /* extern */
M2C_UNK func_0099CC60(u8, s32);                     /* extern */
M2C_UNK func_0099E5A0();                            /* extern */

void func_0099C4D0(void) {
    s32 temp_s3;
    s32 temp_v0_2;
    s32 temp_v0_4;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_s4;
    u8 var_s5;
    void *temp_v0;
    void *temp_v0_3;

    temp_v0 = func_0022C1E0();
    if (temp_v0 != NULL) {
        temp_s0 = M2C_FIELD(temp_v0, u8 *, 1);
        func_0099CC60(temp_s0, func_00239C20((s32) temp_s0) & 0xFF);
        func_00239C70(temp_s0);
        if (func_0099C350() != 0) {
            temp_v0_2 = func_0022C140((s32) temp_s0);
            if (temp_v0_2 != 0) {
                var_s5 = M2C_FIELD(temp_v0_2, u8 *, 0);
                if ((s32) var_s5 < (s32) M2C_FIELD(temp_v0_2, u8 *, 7)) {
loop_7:
                    temp_s4 = M2C_FIELD(temp_v0, u8 *, 1);
                    temp_s3 = func_00239DA0(temp_s4, M2C_FIELD(temp_v0_2, u8 *, 0)) & 0xFF;
                    temp_v0_3 = func_0022BFF0(temp_s4, temp_s3);
                    if (temp_v0_3 != NULL) {
                        if (((M2C_FIELD(temp_v0_3, u8 *, 0x16) & 1) != 1) || (func_0022BB90((s32) M2C_FIELD(temp_v0_3, u8 *, 5)) & 0xFF) || (func_0022BB90((s32) M2C_FIELD(temp_v0_3, u8 *, 6)) & 0xFF) || (func_0099CC60(temp_s4, temp_s3), func_00239C70(temp_s4), var_s5 += 1, (((s32) var_s5 < (s32) M2C_FIELD(temp_v0_2, u8 *, 7)) == 0))) {
                            goto block_12;
                        }
                        goto loop_7;
                    }
                } else {
                    goto block_12;
                }
            }
        } else {
            func_0099E5A0();
            func_0094EA40();
block_12:
            temp_s1 = M2C_FIELD(temp_v0, u8 *, 1);
            temp_v0_4 = func_0022C140((s32) temp_s1);
            if ((temp_v0_4 != 0) && (func_002397F0((s32) temp_s1, (s32) M2C_FIELD(temp_v0_4, u8 *, 1)) == 1)) {
                M2C_FIELD(temp_v0_4, u8 *, 1) = (u8) (M2C_FIELD(temp_v0_4, u8 *, 1) + 1);
            }
        }
    }
}
