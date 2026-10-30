/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00828420();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009E0260();                            /* extern */
M2C_UNK func_009E0370(s32, M2C_UNK);                /* extern */
M2C_UNK func_009E0430(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00D0C770(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_00A68D68;
extern M2C_UNK func_009791F0;

s32 func_00979250(void) {
    s32 temp_v0;
    s8 var_v0;
    u8 var_v0_2;

    func_0099D030(0);
    temp_v0 = func_00828420();
    if (temp_v0 < 0) {
        return 0;
    }
    if (temp_v0 < 0x15) {
        M2C_FIELD(D_00A68D68, s32 *, 4) = temp_v0;
        func_00D0C770(5, 0x01F70035);
        if (M2C_FIELD(D_00A68D68, u8 *, 1) == 0) {
            func_009E0430(M2C_FIELD(D_00A68D68, s32 *, 4), 0x14, &func_009791F0, 0);
        } else {
            func_009E0260();
            func_009E0370(M2C_FIELD(D_00A68D68, s32 *, 4), -1);
        }
        if (M2C_FIELD(D_00A68D68, u8 *, 1) == 0) {
            if (M2C_FIELD(D_00A68D68, s32 *, 4) != 0) {
                var_v0 = 2;
            } else {
                var_v0 = 7;
            }
            M2C_FIELD(D_00A68D68, s8 *, 2) = var_v0;
            M2C_FIELD(D_00A68D68, u8 *, 1) = 1U;
        } else {
            if (M2C_FIELD(D_00A68D68, s32 *, 4) != 0) {
                var_v0_2 = 2;
            } else {
                var_v0_2 = 7;
            }
            M2C_FIELD(D_00A68D68, u8 *, 1) = var_v0_2;
        }
        return 1;
    }
    return 0;
}
