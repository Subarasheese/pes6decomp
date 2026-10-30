/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, M2C_UNK); /* extern */
s32 func_00135080(M2C_UNK, s64);                    /* extern */
M2C_UNK func_00137898(s64);                         /* extern */
M2C_UNK func_001378D8(s64);                         /* extern */
extern M2C_UNK func_00123358;

void func_001233D0(M2C_UNK arg0, s64 arg1) {
    s64 temp_a1;

    temp_a1 = (s64) (arg1 << 0x20) >> 0x20;
    switch (temp_a1) {                              /* irregular */
    case 0:
        func_0012DD30(1, 0x1F4, 0xFA, func_00135080(0x11, temp_a1), &func_00123358, 0);
        return;
    case 1:
        func_001378D8(temp_a1);
        return;
    case 2:
        func_00137898(temp_a1);
        return;
    }
}
