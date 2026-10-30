/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0025E150(M2C_UNK, M2C_UNK, s8);        /* extern */
M2C_UNK func_00BB7060(s8);                          /* extern */
M2C_UNK func_00BB7230(M2C_UNK, s8);                 /* extern */

void func_00BB6FB0(void *arg0) {
    s8 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s8 *, 0x12);
    switch (temp_a2) {                              /* irregular */
    case 0:
        func_0025E150(4, 1, temp_a2);
        M2C_FIELD(arg0, s8 *, 0x12) = 1;
        return;
    case 1:
        func_00BB7230(1, temp_a2);
        return;
    case 2:
        func_00BB7060(temp_a2);
        return;
    case 3:
        func_0025E150(4, 0, temp_a2);
        M2C_FIELD(arg0, s8 *, 0x12) = 0;
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = (s8) M2C_FIELD(arg0, s8 *, 0x14);
        return;
    }
}
