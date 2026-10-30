/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1DE00(void);
extern void func_00B1C960(s32);
M2C_UNK func_00225C00(s32, M2C_UNK);                /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B1CAE0();                            /* extern */
s32 func_00B1DD50();                                /* extern */

s32 func_00B1D920(void) {
    u32 temp_v0;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x94) == 0) {
            M2C_FIELD(temp_v0, s32 *, 0x94) = 1;
            func_00B1CAE0();
            M2C_FIELD(temp_v0, u8 *, 0xAC) = 0U;
            func_00B1C960((s32) M2C_FIELD(temp_v0, u8 *, 0xAC));
        } else {
            func_00225C00(func_00B1DD50() & 0xFFFF, 0);
            M2C_FIELD(temp_v0, s8 *, 0x90) = 1;
            M2C_FIELD(temp_v0, s8 *, 0x91) = 4;
        }
        func_0026E840(0x84028400);
    }
    return 0;
}
