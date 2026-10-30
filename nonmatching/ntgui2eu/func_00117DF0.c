/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001134BC(M2C_UNK);                     /* extern */
M2C_UNK func_00113830(M2C_UNK, M2C_UNK);            /* extern */

void func_00117DF0(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xF4);
    switch (temp_v1) {                              /* irregular */
    case 17:
        func_00113830(0xA, 2);
        break;
    case 16:
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0xF8) - M2C_FIELD(arg0, s32 *, 0xF0);
        if (temp_v1_2 >= 0) {
            if (temp_v1_2 >= 2) {
                if (temp_v1_2 == 3) {
                    func_001134BC(0);
                }
            }
        }
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = -1;
}
