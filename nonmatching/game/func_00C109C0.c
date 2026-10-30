/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C18700(void);
extern char D_00CBD8E0[];

void func_00C109C0(s32 arg0, s32 arg1) {
    s16 *temp_a2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a0;
    void *temp_a1;
    void *temp_s2;
    void *temp_v1;

    temp_s1 = arg1 & 0xFF;
    temp_s2 = ((void *)D_00CBD8E0) + ((arg0 & 0xFF) * 0x2F4);
    if (temp_s1 >= 0x12) {

    } else {
        temp_s0 = temp_s1 * 0x28;
        temp_v1 = temp_s0 + temp_s2;
        M2C_FIELD(temp_s2, s16 *, 0xA) = (s16) (M2C_FIELD(temp_s2, s16 *, 0xA) + 1);
        M2C_FIELD(temp_v1, s16 *, 0x2E) = (s16) (M2C_FIELD(temp_v1, s16 *, 0x2E) + 1);
        temp_v1_2 = func_00C18700() & 0xFF;
        if (temp_s1 < 0x12) {
            temp_v1_3 = (temp_v1_2 & 0xFF) * 2;
            temp_a1 = temp_s0 + temp_s2;
            temp_a2 = temp_s2 + temp_v1_3;
            temp_a0 = temp_v1_3 + temp_a1;
            M2C_FIELD(temp_s2, s16 *, 8) = (s16) (M2C_FIELD(temp_s2, s16 *, 8) + 1);
            *temp_a2 += 1;
            M2C_FIELD(temp_a1, s16 *, 0x2C) = (s16) (M2C_FIELD(temp_a1, s16 *, 0x2C) + 1);
            M2C_FIELD(temp_a0, s16 *, 0x24) = (s16) (M2C_FIELD(temp_a0, s16 *, 0x24) + 1);
        }
    }
}
