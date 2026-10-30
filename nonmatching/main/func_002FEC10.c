/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
M2C_UNK func_002D4C40(M2C_UNK);                     /* extern */
s32 func_00992C20();                                /* extern */
extern M2C_UNK func_002FEB50;

s32 func_002FEC10(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    temp_v1 = func_00992C20() & 0xFF;
    M2C_FIELD(temp_s0, s32 *, 0x18) = temp_v1;
    switch (temp_v1) {                              /* irregular */
    case 2:
        func_002D4C40(0x1B);
        func_002D4C40(5);
block_12:
        func_00305E60(arg0, (s32) &func_002FEB50);
        return 1;
    case 1:
        func_002D4C40(0x25);
        goto block_12;
    case 3:
        func_002D4C40(5);
        goto block_12;
    default:
        return 0;
    }
}
