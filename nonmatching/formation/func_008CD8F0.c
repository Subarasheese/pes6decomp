/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008CAD70(void *, u8, M2C_UNK, M2C_UNK); /* extern */
s32 func_008CD6B0();                                /* extern */

s32 func_008CD8F0(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_008CD6B0();
    switch (temp_v0) {                              /* irregular */
    case 2:
        break;
    case 1:
        func_0026E840(0x84008401);
        break;
    case 5:
        func_0026E840(0x8C008005);
        break;
    case 3:
        func_008CAD70(arg0, M2C_FIELD(arg0, u8 *, 4), 1, 0);
        func_0026E840(0x8400F802);
        break;
    }
    return temp_v0;
}
