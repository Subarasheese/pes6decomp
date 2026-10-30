/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001640E0(void *, M2C_UNK);             /* extern */
M2C_UNK func_00165428(void *);                      /* extern */

void func_001652A0(void *arg0) {
    M2C_UNK (*temp_v0)(void *);
    M2C_UNK (*temp_v0_2)(void *);
    M2C_UNK (*temp_v1_2)(void *);
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_v1 == 1) {
            if (M2C_FIELD(arg0, s32 *, 0xB0) == 0) {
                M2C_FIELD(arg0, s32 *, 0xB0) = temp_v1;
                return;
            }
            func_001640E0(arg0, 0);
        }
    } else {
        temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x118);
        if (temp_v1_2 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x538) != 0) {
                temp_v1_2(arg0);
            }
        }
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x10C);
        if (temp_v0 != NULL) {
            temp_v0(arg0);
        }
        func_00165428(arg0);
        temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x74);
        if (temp_v0_2 != NULL) {
            temp_v0_2(arg0);
        }
    }
}
