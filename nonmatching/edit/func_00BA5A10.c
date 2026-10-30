/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021F170(s32);
extern void func_002E9370(int);
s32 func_00C1B460(M2C_UNK);                         /* extern */

void func_00BA5A10(void *arg0) {
    s32 temp_s1;
    void *temp_v0;

    temp_s1 = func_00C1B460(0) & 0xFFFF;
    temp_v0 = func_0021F170(temp_s1);
    M2C_FIELD(temp_v0, u8 *, 0x48) = (u8) M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(temp_v0, u8 *, 0x49) = (u8) M2C_FIELD(arg0, u8 *, 1);
    M2C_FIELD(temp_v0, u8 *, 0x4A) = (u8) M2C_FIELD(arg0, u8 *, 2);
    M2C_FIELD(temp_v0, u8 *, 0x4B) = (u8) M2C_FIELD(arg0, u8 *, 3);
    M2C_FIELD(temp_v0, u8 *, 0x4C) = (u8) M2C_FIELD(arg0, u8 *, 4);
    M2C_FIELD(temp_v0, u8 *, 0x4D) = (u8) M2C_FIELD(arg0, u8 *, 5);
    M2C_FIELD(temp_v0, u8 *, 0x4E) = (u8) M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(temp_v0, u8 *, 0x4F) = (u8) M2C_FIELD(arg0, u8 *, 7);
    if ((temp_s1 & 0xFFFF) != 0x126) {
        func_002E9370(0x40000);
    }
}
