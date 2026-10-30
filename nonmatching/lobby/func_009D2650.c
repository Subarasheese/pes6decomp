/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
extern void *D_00A7DE00;

s32 func_009D2650(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s3;
    s8 var_s1;
    s8 var_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    if (D_00A7DE00 != NULL) {
        M2C_FIELD(D_00A7DE00, u8 *, 0x64) = (u8) (M2C_FIELD(D_00A7DE00, u8 *, 0x64) + 1);
        if ((s32) M2C_FIELD(D_00A7DE00, u8 *, 0x64) >= 0x3D) {
            M2C_FIELD(D_00A7DE00, u8 *, 0x64) = 0U;
        }
        if ((s32) M2C_FIELD(D_00A7DE00, u8 *, 0x64) >= 0x1E) {
            var_s2 = 0;
            var_s1 = 1;
        } else {
            var_s2 = 1;
            var_s1 = 0;
        }
        var_s3 = 0;
        do {
            if (M2C_FIELD((D_00A7DE00 + var_s3), u8 *, 0xD) != 0) {
                temp_s0 = var_s3 * 4;
                temp_v0 = M2C_FIELD((D_00A7DE00 + temp_s0), void **, 0xC8);
                if (temp_v0 != NULL) {
                    func_001DF4F0(M2C_FIELD(temp_v0, void **, 0xC), var_s2);
                }
                temp_v0_2 = M2C_FIELD((D_00A7DE00 + temp_s0), void **, 0xD8);
                if (temp_v0_2 != NULL) {
                    func_001DF4F0(M2C_FIELD(temp_v0_2, void **, 0xC), var_s1);
                }
            } else {
                temp_s0_2 = var_s3 * 4;
                temp_v0_3 = M2C_FIELD((D_00A7DE00 + temp_s0_2), void **, 0xC8);
                if (temp_v0_3 != NULL) {
                    func_001DF4F0(M2C_FIELD(temp_v0_3, void **, 0xC), 1);
                }
                temp_v0_4 = M2C_FIELD((D_00A7DE00 + temp_s0_2), void **, 0xD8);
                if (temp_v0_4 != NULL) {
                    func_001DF4F0(M2C_FIELD(temp_v0_4, void **, 0xC), 0);
                }
            }
            var_s3 += 1;
        } while (var_s3 < 4);
        return 1;
    }
    return 0;
}
