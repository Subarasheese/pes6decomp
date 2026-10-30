/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(s32, s32);                        /* extern */
M2C_UNK func_0016A1B0(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0016D9E0(s32, void *, M2C_UNK);        /* extern */
extern char D_005C0CFC[];

void func_00174B00(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (M2C_FIELD(arg0, s32 *, 0x918) != arg1) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x91C);
        M2C_FIELD(arg0, s32 *, 0x918) = arg1;
        if (temp_a0 != 0) {
            func_0016A1B0(temp_a0, arg0, 0);
        }
        if ((M2C_FIELD(arg0, s32 *, 0x92C) == 0) && (arg1 != 0) && (arg1 == 1)) {
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x50);
            if ((temp_a0_2 != 0) && (func_00163C30(temp_a0_2, (*(s32 *)D_005C0CFC)) != 0)) {
                func_0016D9E0(M2C_FIELD(arg0, s32 *, 0x50), arg0, 0);
            }
        }
    }
}
