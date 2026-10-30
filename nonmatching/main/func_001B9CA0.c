/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00154070(M2C_UNK);                       /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001E5A10(s32, f32);                    /* extern */
M2C_UNK func_001E5A30(s32, void *);                 /* extern */
M2C_UNK func_001E5E20(s32);                         /* extern */
s32 func_001E6020();                                /* extern */

void *func_001B9CA0(void *arg0, f32 fparg0, f32 fparg1) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;

    temp_v0 = func_00154070(0x20);
    func_001C48E8(temp_v0, 0, 0x20);
    M2C_FIELD(temp_v0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(temp_v0, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(temp_v0, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_v0, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(temp_v0, f32 *, 0x18) = fparg0;
    M2C_FIELD(temp_v0, f32 *, 0x1C) = fparg1;
    temp_v0_2 = func_001E6020();
    func_001E5A10(temp_v0_2, fparg0);
    func_001E5A30(temp_v0_2, arg0);
    M2C_FIELD(temp_v0, s32 *, 0) = temp_v0_2;
    temp_v0_3 = func_001E6020();
    func_001E5E20(temp_v0_3);
    func_001E5A10(temp_v0_3, fparg1);
    M2C_FIELD(temp_v0, s32 *, 4) = temp_v0_3;
    return temp_v0;
}
