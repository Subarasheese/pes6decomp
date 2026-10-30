/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD8E0[];

void func_00C10730(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a4;
    void *temp_a0;
    void *temp_a1;
    void *temp_a5;

    temp_a4 = arg1 & 0xFF;
    temp_a5 = ((void *)D_00CBD8E0) + ((arg0 & 0xFF) * 0x2F4);
    if (temp_a4 < 0x12) {
        temp_a2 = temp_a4 * 0x28;
        temp_a1 = temp_a2 + temp_a5;
        M2C_FIELD(temp_a5, s16 *, 0x10) = (s16) (M2C_FIELD(temp_a5, s16 *, 0x10) + 1);
        M2C_FIELD(temp_a1, s16 *, 0x34) = (s16) (M2C_FIELD(temp_a1, s16 *, 0x34) + 1);
        if (temp_a4 < 0x12) {
            M2C_FIELD(temp_a5, s16 *, 0x12) = (s16) (M2C_FIELD(temp_a5, s16 *, 0x12) + 1);
            M2C_FIELD(temp_a1, s16 *, 0x36) = (s16) (M2C_FIELD(temp_a1, s16 *, 0x36) + 1);
        }
        if (temp_a4 < 0x12) {
            temp_a0 = temp_a2 + temp_a5;
            M2C_FIELD(temp_a5, s16 *, 0xE) = (s16) (M2C_FIELD(temp_a5, s16 *, 0xE) + 1);
            M2C_FIELD(temp_a0, s16 *, 0x32) = (s16) (M2C_FIELD(temp_a0, s16 *, 0x32) + 1);
        }
    }
}
