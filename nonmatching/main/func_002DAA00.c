/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 (*D_005E7F44)(void *, void *, s32, s32, void *, M2C_UNK);
extern s32 (*D_005E7F48)(s32, void *, void *, void *, s32, s32, M2C_UNK);

void *func_002DAA00(u32 arg0, void *arg1) {
    s32 (*temp_v0)(s32, M2C_UNK);
    s32 var_a6;
    s32 var_v0;

    var_a6 = -1;
    switch (arg0) {                                 /* irregular */
    case 12:
        if (D_005E7F44 != NULL) {
            var_v0 = D_005E7F44(arg1 + 0x10, arg1 + (M2C_FIELD(arg1, s32 *, 8) + 0x10), M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), arg1 + 4, -1);
block_14:
            var_a6 = var_v0;
        }
        break;
    case 13:
        if (D_005E7F48 != NULL) {
            var_v0 = D_005E7F48(M2C_FIELD(arg1, s32 *, 0), arg1 + 0x14, arg1 + (M2C_FIELD(arg1, s32 *, 4) + 0x14), arg1 + 4, M2C_FIELD(arg1, s32 *, 0xC), M2C_FIELD(arg1, s32 *, 0x10), -1);
            goto block_14;
        }
        break;
    case 14:
        temp_v0 = *(s32 (**)(s32, M2C_UNK))0x5E7F4C;
        if (temp_v0 != NULL) {
            var_v0 = temp_v0(M2C_FIELD(arg1, s32 *, 0), -1);
            goto block_14;
        }
        break;
    }
    M2C_FIELD(arg1, s32 *, 0) = var_a6;
    return arg1;
}
