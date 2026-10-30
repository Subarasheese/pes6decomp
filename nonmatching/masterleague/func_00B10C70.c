/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00960FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00B0AEB0(u8);                          /* extern */
M2C_UNK func_00B0AF30();                            /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
M2C_UNK func_00B0E9C0(u8);                          /* extern */
M2C_UNK func_00B0ED30();                            /* extern */
M2C_UNK func_00B0EDF0();                            /* extern */
M2C_UNK func_00B151F0();                            /* extern */
s32 func_00B15250(u8, s32);                         /* extern */
s32 func_00B152D0(u8, s32);                         /* extern */
M2C_UNK func_00B15300(s32);                         /* extern */
s32 func_00B26EF0(s32);                             /* extern */
M2C_UNK func_00B34FE0();                            /* extern */

s32 func_00B10C70(void) {
    s32 temp_s1;
    u32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0xBFA) != 0) {

        } else {
            func_00B0ED30();
            func_00B0EDF0();
            func_00960FA0(2);
            M2C_FIELD(temp_v0, s32 *, 0xC28) = 0;
            temp_s1 = func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF;
            temp_v0_2 = M2C_FIELD(temp_v0, void **, 0xC3C);
            M2C_FIELD(temp_v0_2, f32 *, 0) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC40);
            M2C_FIELD(temp_v0_2, f32 *, 4) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC44);
            func_00B34FE0();
            func_00B15300(func_00B26EF0(temp_s1));
            if (func_00B152D0(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) == 0) {
                func_00B151F0();
            }
            func_00B0AF30();
            func_00B0AEB0(M2C_FIELD(temp_v0, u8 *, 0xC0E));
            func_00B0E9C0(M2C_FIELD(temp_v0, u8 *, 0xC0A));
            func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
            func_00958000(0x24);
            func_0026E840(0x84028400);
        }
    }
    return 0;
}
