/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00957C70(void);
s32 func_002307F0(void *);                          /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_0099BEB0(void *);                      /* extern */
extern void *D_003E77AC;
extern void *D_003E77B0;

s32 func_00966F80(void) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = -1;
    if (M2C_FIELD(D_003E77AC, s32 *, 4) != 0) {

    } else {
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x1000);
        temp_v1 = func_002307F0(D_003E77B0) & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 0:
            break;
        case 1:
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x10);
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x100);
            func_0099BEB0(D_003E77B0);
            func_00957C70();
            break;
        }
        var_s0 = 0x18;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
