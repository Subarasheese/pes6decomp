/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */
extern void *D_00A7DD40;

void func_009BF820(s32 arg0) {
    s32 temp_v1;

    if ((D_00A7DD40 != NULL) && (M2C_FIELD(D_00A7DD40, s32 *, 0x1C) != arg0)) {
        M2C_FIELD(D_00A7DD40, s32 *, 0x1C) = arg0;
        if (arg0 == 0) {
            func_002DF730(M2C_FIELD(D_00A7DD40, s32 *, 0x18), 2);
        }
        if ((D_00A7DD40 != NULL) && (M2C_FIELD(D_00A7DD40, s32 *, 0x1C) != 0)) {
            temp_v1 = M2C_FIELD(D_00A7DD40, s32 *, 0);
            switch (temp_v1) {                      /* irregular */
            case 3:
            case 2:
                func_002DF730(M2C_FIELD(D_00A7DD40, s32 *, 0x18), 2);
                return;
            default:
            case 1:
            case 0:
                func_002DF730(M2C_FIELD(D_00A7DD40, s32 *, 0x18), 0);
                break;
            }
        }
    }
}
