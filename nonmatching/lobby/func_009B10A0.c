/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093C590();                                /* extern */
M2C_UNK func_00976080(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern void *D_00A7DC00;

void func_009B10A0(void) {
    s32 temp_v0;
    s32 var_v1;
    void *temp_s0;

    temp_s0 = D_00A7DC00;
    temp_v0 = func_0093C590();
    switch (temp_v0) {                              /* irregular */
    case -2:
        func_0099D030(0);
        func_00976080(3);
        var_v1 = 3;
block_14:
        M2C_FIELD(temp_s0, s32 *, 0x184) = var_v1;
    case 0:
        return;
    case -1:
        func_0099D030(0);
        func_00976080(3);
        var_v1 = 2;
        goto block_14;
    case 1:
        func_0099D030(0);
        func_00976080(3);
        var_v1 = 1;
        goto block_14;
    }
}
