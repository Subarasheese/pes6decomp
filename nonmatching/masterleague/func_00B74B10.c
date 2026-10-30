/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
extern void func_001D7C20(void *, s32);
extern s32 func_001D7BC0(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00972D60(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B74C80(M2C_UNK);                     /* extern */

s32 func_00B74B10(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    u32 temp_v0;
    u32 temp_v0_3;
    u8 temp_v0_2;

    var_s2 = arg0;
    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x9A0);
        if (temp_v0_2 == 0) {

        } else if ((s32) temp_v0_2 >= 0x1E) {
            if (((s64) (func_001D7BC0(M2C_FIELD(temp_v0, void **, 0x99C)) << 0x30) >> 0x30) == 0x1E) {
                if (M2C_FIELD(temp_v0, u8 *, 0x998) == 0) {
                    func_0026E840(0x8C008007);
                    M2C_FIELD(temp_v0, u8 *, 0x998) = 1U;
                }
                M2C_FIELD(temp_v0, s8 *, 0x79D) = 1;
                func_00B74C80(1);
                var_s2 = 0x1E;
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x790), 0);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x794), 1);
                temp_v0_3 = func_00B76A10();
                if (temp_v0_3 != 0) {
                    var_s1 = 0;
                    if ((s32) M2C_FIELD(temp_v0_3, u8 *, 0x7A1) > 0) {
                        do {
                            temp_v1 = var_s1 & 0xFF;
                            if (M2C_FIELD((temp_v0_3 + temp_v1), u8 *, 0xB84) == 0) {
                                func_00972D60(M2C_FIELD((temp_v0_3 + (temp_v1 * 8)), s32 *, 0x7D8), 0, 0);
                            }
                            var_s1 = (var_s1 + 1) & 0xFF;
                        } while (var_s1 < (s32) M2C_FIELD(temp_v0_3, u8 *, 0x7A1));
                    }
                }
            }
        } else {
            var_s2 = (var_s2 + 1) & 0xFF;
            M2C_FIELD(temp_v0, s8 *, 0x79D) = 0;
            func_00B74C80(0);
            if ((var_s2 & 0xFF) == 0x1D) {
                func_001D7C20(M2C_FIELD(temp_v0, void **, 0x99C), 2);
            }
        }
    }
    return var_s2 & 0xFF;
}
