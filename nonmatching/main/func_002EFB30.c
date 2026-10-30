/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003B3FE0[];

void func_002EFB30(void *arg0, void *arg1) {
    f32 sp8;
    f32 spC;
    f32 temp_f1;
    f32 temp_f1_2;
    void *temp_v1;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        temp_v1 = ((void *)D_003B3FE0) + (M2C_FIELD(arg0, u8 *, 2) * 8);
        sp8 = M2C_FIELD(temp_v1, f32 *, 0);
        spC = M2C_FIELD(temp_v1, f32 *, 4);
        temp_f1 = 2.0f * sp8;
        if (!(temp_f1 <= M2C_FIELD(arg0, f32 *, 0x30))) {
            M2C_FIELD(arg0, f32 *, 0x30) = temp_f1;
        }
        temp_f1_2 = 2.0f * spC;
        if (!(temp_f1_2 <= M2C_FIELD(arg0, f32 *, 0x34))) {
            M2C_FIELD(arg0, f32 *, 0x34) = temp_f1_2;
        }
        M2C_FIELD(arg0, s8 *, 3) = 0;
    }
}
