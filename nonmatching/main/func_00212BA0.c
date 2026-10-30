/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */
extern void *D_003E9A00;

void func_00212BA0(void *arg0, s32 arg1) {
    u8 temp_a1;
    u8 temp_v1;
    void *var_a0;

    var_a0 = arg0;
    if (arg1 != 0) {
        if (var_a0 == NULL) {
            var_a0 = D_003E9A00;
        }
        if ((var_a0 != NULL) && (M2C_FIELD(var_a0, u8 *, 9) != 0)) {
            M2C_FIELD(var_a0, u8 *, 0xA) = 0U;
            temp_a1 = M2C_FIELD(var_a0, u8 *, 0xA);
            switch (temp_a1) {                      /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                func_002DF730(M2C_FIELD(var_a0, s32 *, 0x5A0), 2);
                return;
            case 0:                                 /* switch 1 */
                func_002DF730(M2C_FIELD(var_a0, s32 *, 0x5A0), 0);
                return;
            }
        }
    } else {
        if (var_a0 == NULL) {
            var_a0 = D_003E9A00;
        }
        if ((var_a0 != NULL) && (M2C_FIELD(var_a0, u8 *, 9) != 0)) {
            M2C_FIELD(var_a0, u8 *, 0xA) = 1U;
            temp_v1 = M2C_FIELD(var_a0, u8 *, 0xA);
            switch (temp_v1) {                      /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                func_002DF730(M2C_FIELD(var_a0, s32 *, 0x5A0), 2);
                break;
            case 0:                                 /* switch 2 */
                func_002DF730(M2C_FIELD(var_a0, s32 *, 0x5A0), 0);
                return;
            }
        }
    }
}
