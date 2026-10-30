/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD44;

s32 func_00AEE730(s32 arg0) {
    s32 var_v0;
    u16 var_v0_2;

    if (D_003EAD44 == NULL) {
        goto block_15;
    }
    var_v0 = 1;
    switch (arg0) {                                 /* irregular */
    case 0:
        if (M2C_FIELD(D_003EAD44, s32 *, 0x2330) == 0) {
            goto block_15;
        }
        if (D_003EAD44 == NULL) {
            var_v0_2 = 0xFFFF;
        } else {
            var_v0_2 = M2C_FIELD(D_003EAD44, u16 *, 0x210A);
        }
        if ((var_v0_2 & 0xFFFF) == 0xFFFF) {
            return 1;
        }
block_15:
        var_v0 = 0;
        return var_v0;
    case 1:
        if (M2C_FIELD(D_003EAD44, s32 *, 0x2330) == 0) {
            goto block_15;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    }
}
