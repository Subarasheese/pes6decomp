/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021F170(s32);
s32 func_00C1B460(M2C_UNK);                         /* extern */

void func_00BA5990(void *arg0) {
    void *temp_v0;

    temp_v0 = func_0021F170(func_00C1B460(0));
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(temp_v0, u8 *, 0x48);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(temp_v0, u8 *, 0x49);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(temp_v0, u8 *, 0x4A);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(temp_v0, u8 *, 0x4B);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(temp_v0, u8 *, 0x4C);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(temp_v0, u8 *, 0x4D);
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(temp_v0, u8 *, 0x4E);
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(temp_v0, u8 *, 0x4F);
    M2C_FIELD(arg0, u8 *, 3) = 0xFFU;
    M2C_FIELD(arg0, u8 *, 7) = 0xFFU;
}
