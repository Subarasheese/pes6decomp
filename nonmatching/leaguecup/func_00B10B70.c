/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022C140(s32);
extern s32 func_00226710(void);
extern void * func_0022C1E0(void);
extern u8 func_0022BC60(s32);
extern s32 func_0022BAC0(s32);
s8 func_00225940(u8);                               /* extern */
void *func_0022BFF0(u8, M2C_UNK);                   /* extern */
extern void *D_003EAD6C;

void func_00B10B70(void) {
    s32 temp_s0;
    s32 temp_s1;
    u8 var_s0;
    u8 var_v0;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_0022C1E0();
    func_0022C140((s32) M2C_FIELD(temp_v0, u8 *, 1));
    temp_s3 = D_003EAD6C;
    if (temp_s3 != NULL) {
        temp_v0_2 = func_0022BFF0(M2C_FIELD(temp_v0, u8 *, 1), 0);
        temp_s2 = temp_v0_2;
        temp_s1 = M2C_FIELD(temp_v0_2, u8 *, 0xB) + M2C_FIELD(temp_v0_2, u8 *, 0xC) + M2C_FIELD(temp_v0_2, u8 *, 0xD) + M2C_FIELD(temp_v0_2, u8 *, 0xE) + M2C_FIELD(temp_v0_2, u8 *, 0xF);
        temp_s0 = M2C_FIELD(temp_v0_2, u8 *, 0x10) + M2C_FIELD(temp_v0_2, u8 *, 0x11) + M2C_FIELD(temp_v0_2, u8 *, 0x12) + M2C_FIELD(temp_v0_2, u8 *, 0x13) + M2C_FIELD(temp_v0_2, u8 *, 0x14);
        if ((func_00226710() & 0xFF) && ((func_00226710() & 0xFF) != 1)) {
            if ((func_00226710() & 0xFF) != 7) {
                if (temp_s0 >= temp_s1) {
                    var_v0 = M2C_FIELD(temp_s2, u8 *, 6);
                } else {
                    var_v0 = M2C_FIELD(temp_s2, u8 *, 5);
                }
                M2C_FIELD(temp_s3, u8 *, 0xA4) = var_v0;
                if (((func_00226710() & 0xFF) != 9) && ((func_00226710() & 0xFF) != 0xA)) {
                    if ((func_00226710() & 0xFF) != 8) {
                        var_s0 = M2C_FIELD(temp_s3, u8 *, 0xA4);
                        M2C_FIELD(temp_s3, s16 *, 0xA6) = func_0022BAC0((s32) var_s0);
                    } else {
                        goto block_16;
                    }
                } else {
block_16:
                    var_s0 = func_0022BC60((s32) M2C_FIELD(temp_s3, u8 *, 0xA4)) & 0xFF;
                    M2C_FIELD(temp_s3, s16 *, 0xA6) = func_0022BAC0((s32) M2C_FIELD(temp_s3, u8 *, 0xA4));
                    M2C_FIELD(temp_s3, u8 *, 0xA4) = var_s0;
                }
                M2C_FIELD(temp_s3, s8 *, 0xA8) = func_00225940(var_s0);
            } else {
                goto block_6;
            }
        } else {
block_6:
            M2C_FIELD(temp_s3, u8 *, 0xA4) = 0xFFU;
            M2C_FIELD(temp_s3, s8 *, 0xA8) = 0;
        }
    }
}
