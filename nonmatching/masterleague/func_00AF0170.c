/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern void func_00AEEC10(s32);
extern s32 func_00AF0910(s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095ED20();                                /* extern */
M2C_UNK func_00AEE560(s32, s16);                    /* extern */
M2C_UNK func_00AEE620(u8);                          /* extern */
M2C_UNK func_00AEE8D0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00AEEBA0(u8);                          /* extern */

s32 func_00AF0170(void) {
    s32 temp_v0_2;
    u32 temp_v0;

    temp_v0 = func_00AF0980();
    if (temp_v0 == 0) {

    } else if (func_0095ED20() != 0) {
        if ((M2C_FIELD(temp_v0, u8 *, 0x184) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x2D0) == 1)) {
            M2C_FIELD(temp_v0, s32 *, 0x2D0) = 2;
        } else {
            M2C_FIELD(temp_v0, u8 *, 0x184) = 0U;
            M2C_FIELD(temp_v0, s32 *, 0x2D0) = 1;
            func_00AEEBA0(M2C_FIELD(temp_v0, u8 *, 0x184));
            func_00AEE620(M2C_FIELD(temp_v0, u8 *, 0x184));
            func_00AEE8D0(0x10, 0);
            func_00AEEC10(0);
            temp_v0_2 = func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), (s32) M2C_FIELD(temp_v0, u8 *, 0x184));
            func_00AEE560(temp_v0_2, M2C_FIELD(((temp_v0_2 * 2) + temp_v0), s16 *, 0x1B0));
        }
        func_0026E840(0x84008401);
    }
    return 0;
}
