/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BB2700(M2C_UNK, s8);                 /* extern */
M2C_UNK func_00BBBF80(M2C_UNK, s8);                 /* extern */
M2C_UNK func_00BBBFB0(M2C_UNK, s8);                 /* extern */
M2C_UNK func_00BBC040(M2C_UNK, M2C_UNK, s8);        /* extern */

void func_00BB2630(void *arg0) {
    s8 temp_a2;
    s8 temp_v1;

    temp_a2 = M2C_FIELD(arg0, s8 *, 0x12);
    switch (temp_a2) {                              /* irregular */
    case 1:
        temp_v1 = M2C_FIELD(arg0, s8 *, 0x15) + 1;
        M2C_FIELD(arg0, s8 *, 0x15) = temp_v1;
        if (((s64) ((s64) temp_v1 << 0x38) >> 0x38) >= 0xA) {
            func_00BBC040(3, 3, temp_a2);
            M2C_FIELD(arg0, s8 *, 0x12) = 2;
            return;
        }
        return;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x15) = 0;
        func_00BBBFB0(3, temp_a2);
        M2C_FIELD(arg0, s8 *, 0x12) = 1;
        return;
    case 2:
        func_00BB2700(3, temp_a2);
        return;
    case 3:
        func_00BBBF80(3, temp_a2);
        M2C_FIELD(arg0, s8 *, 0x12) = 0;
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = 5;
        break;
    }
}
