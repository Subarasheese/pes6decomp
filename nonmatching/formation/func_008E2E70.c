/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
extern void func_008BAC60(void *);
void *func_008BB870(s32, f32 *, f32 *, M2C_UNK);    /* extern */

void *func_008E2E70(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    s8 sp3C;
    s8 sp3D;
    s8 sp3E;
    s8 sp3F;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1_2;

    temp_a2 = arg2 & 0xFF;
    if (temp_a2 >= 0xB) {
        return NULL;
    }
    temp_a1 = arg3 & 0xFF;
    if (temp_a1 < 0xB) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x6B8);
        if (M2C_FIELD((M2C_FIELD((temp_a1 + temp_v1), u8 *, 0x766) + temp_v1), u8 *, 0x33) != 0) {
            temp_v1_2 = (temp_a2 * 8) + arg0;
            temp_v0 = (temp_a1 * 8) + arg0;
            sp30 = M2C_FIELD(temp_v1_2, f32 *, 4);
            sp34 = M2C_FIELD(temp_v1_2, f32 *, 8);
            sp28 = M2C_FIELD(temp_v0, f32 *, 0x114);
            sp2C = M2C_FIELD(temp_v0, f32 *, 0x118);
            temp_a0 = func_008BB870(arg1, &sp30, &sp28, 5);
            sp3C = 0;
            sp3F = 0xFF;
            sp3D = 0;
            sp3E = 0;
            func_001EEE60(temp_a0, &sp3C);
            temp_s0 = func_008BB870(arg1, &sp30, &sp28, 3);
            func_008BAC60(&sp3C);
            func_001EEE60(temp_s0, &sp3C);
            return temp_s0;
        }
        return NULL;
    }
    return NULL;
}
