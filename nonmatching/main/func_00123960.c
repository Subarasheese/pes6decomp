/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00123960(void *arg0) {
    s32 temp_s0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x24);
        if (temp_v1 != NULL) {
            temp_s0 = M2C_FIELD(temp_v1, s32 *, 4);
            if ((temp_s0 != 0x2A) && (temp_s0 != 0x71) && (temp_s0 != 0x29A)) {
                return -2;
            }
            temp_a1 = M2C_FIELD(temp_v1, void **, 8);
            if (temp_a1 != NULL) {
                M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg0, s32 *, 0x30), temp_a1);
            }
            temp_a1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x4C);
            if (temp_a1_2 != NULL) {
                M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg0, s32 *, 0x30), temp_a1_2);
            }
            temp_a1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x48);
            if (temp_a1_3 != NULL) {
                M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg0, s32 *, 0x30), temp_a1_3);
            }
            temp_a1_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x38);
            if (temp_a1_4 != NULL) {
                M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg0, s32 *, 0x30), temp_a1_4);
            }
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, void **, 0x24) = NULL;
            if (temp_s0 == 0x71) {
                return -3;
            }
            return 0;
        }
    }
    return -2;
}
