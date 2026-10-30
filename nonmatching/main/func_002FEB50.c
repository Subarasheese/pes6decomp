/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D4BE0(int);
extern void func_00305E60(void *, int);
s32 func_00BD99D0();                                /* extern */
extern M2C_UNK func_002FEC10;

s32 func_002FEB50(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    if (func_00BD99D0() == 0) {
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x18);
        switch (temp_v1) {                          /* irregular */
        case 3:
            func_002D4BE0(5);
block_18:
            func_00305E60(arg0, (s32) &func_002FEC10);
            return 1;
        case 2:
            func_002D4BE0(0x1B);
            func_002D4BE0(5);
            goto block_18;
        case 1:
            func_002D4BE0(0x25);
            goto block_18;
        default:
            return 0;
        }
    } else {
        return 0;
    }
}
