/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00210DF0();                                /* extern */
s32 func_00224D90();                                /* extern */
void *func_00224E20(s8, s32);                       /* extern */
s32 func_00225820();                                /* extern */
M2C_UNK func_00938BD0(s32);                         /* extern */
M2C_UNK func_009782A0(s32);                         /* extern */
M2C_UNK func_00978600(s32);                         /* extern */
M2C_UNK func_00AF6680(s32);                         /* extern */
M2C_UNK func_00AFF1A0(s32);                         /* extern */
M2C_UNK func_00AFF590(s8, s32);                     /* extern */
M2C_UNK func_00B1A3F0(s8, s32);                     /* extern */

void func_00970380(s8 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    void *temp_v0;

    temp_s1 = func_00224D90() & 0xFFFF;
    temp_v0 = func_00224E20(arg0, arg1);
    if (temp_v0 != NULL) {
        func_001C48E8(temp_v0, 0, 0x16);
        M2C_FIELD(temp_v0, s16 *, 0) = 0;
        M2C_FIELD(temp_v0, s8 *, 2) = arg0;
        M2C_FIELD(temp_v0, s8 *, 3) = 0xFF;
        temp_a0 = (0 & 0xFFF) * 0x10;
        M2C_FIELD(temp_v0, u16 *, 6) = (u16) ((M2C_FIELD(temp_v0, u16 *, 6) & 0xFFFF001F) | 0x8000);
        M2C_FIELD(temp_v0, s16 *, 4) = 0;
        M2C_FIELD(temp_v0, u16 *, 8) = (u16) ((M2C_FIELD(temp_v0, u16 *, 8) & 0xFFFF000F) | temp_a0);
        M2C_FIELD(temp_v0, u16 *, 0xA) = (u16) ((M2C_FIELD(temp_v0, u16 *, 0xA) & 0xFFFF000F) | temp_a0);
    }
    temp_s0 = arg0 & 0xFF;
    if (temp_s0 == (func_00225820() & 0xFF)) {
        func_00978600(arg1);
    }
    func_009782A0(temp_s1);
    if (func_00210DF0() == 2) {
        func_00B1A3F0(arg0, temp_s1);
    }
    func_00AFF590(arg0, arg1);
    if ((func_00210DF0() == 2) && (temp_s0 == (func_00225820() & 0xFF))) {
        func_00AF6680(temp_s1);
        func_00AFF1A0(temp_s1);
        func_00938BD0(temp_s1);
    }
}
