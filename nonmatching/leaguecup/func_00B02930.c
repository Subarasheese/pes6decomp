/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292ED0(u64);                             /* extern */
void *func_00970870(u16);                           /* extern */
extern void *D_003EAD54;

void func_00B02930(void) {
    s32 temp_a0_2;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 temp_a0;
    void *temp_v0;
    void *var_s1;

    var_s1 = D_003EAD54;
    if (var_s1 != NULL) {
        var_s2 = 0;
loop_30:
        if (var_s2 < 0x1770) {
            temp_a0 = M2C_FIELD(var_s1, u16 *, 0xA0C);
            if (temp_a0 != 0) {
                if (temp_a0 != 0) {
                    temp_v0 = func_00970870(temp_a0);
                    if (temp_v0 != NULL) {
                        temp_a0_2 = func_00292ED0((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3C) & 0xFF;
                        switch (temp_a0_2) {        /* irregular */
                        case 0:
                            if ((temp_v0 == NULL) || (temp_a0 == 0)) {
                                var_v1 = 0;
                            } else {
                                var_v1 = (s32) ((f32) ((M2C_FIELD(temp_v0, u8 *, 0x1B) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 0x16) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 8) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 3) & 0x7F) + (M2C_FIELD(temp_v0, u8 *, 4) & 0x7F))))) / 5.0f);
                            }
                            M2C_FIELD(var_s1, s32 *, 0xA20) = var_v1;
                            break;
                        case 1:
                            if ((temp_v0 == NULL) || (temp_a0 == 0)) {
                                var_v1_2 = 0;
                            } else {
                                var_v1_2 = (s32) ((f32) ((M2C_FIELD(temp_v0, u8 *, 0x1A) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 6) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 3) & 0x7F) + (M2C_FIELD(temp_v0, u8 *, 4) & 0x7F)))) / 4.0f);
                            }
                            M2C_FIELD(var_s1, s32 *, 0xA20) = var_v1_2;
                            break;
                        case 2:
                            if ((temp_v0 == NULL) || (temp_a0 == 0)) {
                                var_v1_3 = 0;
                            } else {
                                var_v1_3 = (s32) ((f32) ((M2C_FIELD(temp_v0, u8 *, 6) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 0xA) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 0xC) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 0x10) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 5) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 2) & 0x7F) + (M2C_FIELD(temp_v0, u8 *, 3) & 0x7F))))))) / 7.0f);
                            }
                            M2C_FIELD(var_s1, s32 *, 0xA20) = var_v1_3;
                            break;
                        case 3:
                            if ((temp_v0 == NULL) || (temp_a0 == 0)) {
                                var_v1_4 = 0;
                            } else {
                                var_v1_4 = (s32) ((f32) ((M2C_FIELD(temp_v0, u8 *, 0x12) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 0x10) & 0x7F) + ((M2C_FIELD(temp_v0, u8 *, 2) & 0x7F) + (M2C_FIELD(temp_v0, u8 *, 8) & 0x7F)))) / 4.0f);
                            }
                            M2C_FIELD(var_s1, s32 *, 0xA20) = var_v1_4;
                            break;
                        }
                    }
                }
                var_s1 += 0x1C;
                var_s2 += 1;
                goto loop_30;
            }
        }
    }
}
