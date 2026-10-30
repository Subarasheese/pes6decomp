/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093AF70(M2C_UNK);                         /* extern */
s32 func_0093D4B0();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern void *D_00A68CB8;

void func_0096AAE0(void) {
    M2C_UNK var_a0;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_00A68CB8;
    var_a0 = 1;
    if (func_0093D4B0() == 1) {
        var_a0 = 2;
    }
    temp_v0 = func_0093AF70(var_a0);
    switch (temp_v0) {                              /* irregular */
    case -1:
        func_0099D030(0);
        M2C_FIELD(temp_s0, s32 *, 0xC) = 4;
        func_009717C0(2);
    case 0:
        return;
    case 1:
        func_0099D030(0);
        func_009717C0(2);
        return;
    }
}
