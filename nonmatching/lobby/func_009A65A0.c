/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095F540(u16);                             /* extern */
s32 func_00960150(u16);                             /* extern */
s32 func_00960270();                                /* extern */
s32 func_009605A0(s32);                             /* extern */
M2C_UNK func_0098CAE0();                            /* extern */
M2C_UNK func_009A79E0(void *, M2C_UNK, void *, s32, s32, s32, s32); /* extern */
s32 func_009A8F10(s32, s32);                        /* extern */

void func_009A65A0(void *arg0) {
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 var_v1;
    u16 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u16 *, 0x37C);
    temp_s2 = func_00960270() & 0xFFFF;
    temp_v0 = func_00960150(temp_s1);
    M2C_FIELD(arg0, s32 *, 0x374) = temp_v0;
    temp_s1_2 = func_009605A0(temp_v0);
    temp_v0_2 = func_009A8F10(temp_s1_2, func_0095F540(temp_s1));
    if (M2C_FIELD(arg0, s32 *, 0x374) != 0) {
        if (temp_v0_2 >= 0) {
            func_0026E840(0x84028400);
            func_009A79E0(arg0 + 0x5C, 5, arg0 + 0x2DC, (s32) M2C_FIELD(arg0, u16 *, 0x37C), M2C_FIELD(arg0, s32 *, 0x380), temp_s2, M2C_FIELD(arg0, s32 *, 0x388));
            func_0098CAE0();
            var_v1 = 6;
            M2C_FIELD(arg0, s32 *, 0x39C) = 7;
        } else {
            goto block_4;
        }
    } else {
block_4:
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x394) = 0x01FB003E;
        var_v1 = 0x20;
        M2C_FIELD(arg0, s32 *, 0x398) = 0x18;
    }
    M2C_FIELD(arg0, s8 *, 0x378) = var_v1;
}
