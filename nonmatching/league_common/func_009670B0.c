/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
s32 func_00230380();                                /* extern */
s32 func_00230410();                                /* extern */
s32 func_0093D740();                                /* extern */
M2C_UNK func_00949540();                            /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_00975C00();                            /* extern */
M2C_UNK func_00976560(M2C_UNK);                     /* extern */
M2C_UNK func_0098E6A0();                            /* extern */
M2C_UNK func_00AFDDF0();                            /* extern */
extern void *D_003E77AC;
extern void *D_003E77B0;

s32 func_009670B0(void) {
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = M2C_FIELD(D_003E77AC, s32 *, 4);
    var_s0 = -1;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_0093D740() == 1) {
            func_0094C790(1);
        }
        break;
    case 1:
        if (func_00230410() == 1) {
            func_00975C00();
            func_00AFDDF0();
        }
        if (func_00230380() == 1) {
            func_00976560(0x1B);
        }
        func_0098E6A0();
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 1);
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 4);
        func_0094C790(2);
        break;
    case 2:
        if (func_0017F900() == 1) {
            func_00949540();
            var_s0 = 0x1A;
        }
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
