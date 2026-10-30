/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00121800(u32, void *);
s32 func_00124590(void *arg0, void *arg1) {
    s64 (*temp_v0_2)(M2C_UNK, M2C_UNK, M2C_UNK);
    s64 temp_v0_3;
    void *temp_v0;

    if ((u32) (M2C_FIELD(arg0, s32 *, 0) - 4) < 2U) {
        M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg1, s32 *, 0x30), M2C_FIELD(arg0, void **, 0xC));
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 6) {
        func_00121800(M2C_FIELD(arg0, u32 *, 4), arg1);
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s64 *, 0x20) = 0;
    temp_v0 = M2C_FIELD(arg0, void **, 0x2C);
    M2C_FIELD(arg0, void **, 0x38) = temp_v0;
    M2C_FIELD(arg0, void **, 0x34) = temp_v0;
    temp_v0_2 = M2C_FIELD(arg0, s64 (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x3C);
    if (temp_v0_2 != NULL) {
        temp_v0_3 = temp_v0_2(0, 0, 0);
        M2C_FIELD(arg0, s64 *, 0x40) = temp_v0_3;
        M2C_FIELD(arg1, s64 *, 0x38) = temp_v0_3;
    }
    M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg1, s32 *, 0x30), M2C_FIELD(arg0, void **, 0x2C));
    M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg1, s32 *, 0x30), M2C_FIELD(arg0, void **, 0x28));
    M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg1, s32 *, 0x30), arg0);
    return 0;
}
