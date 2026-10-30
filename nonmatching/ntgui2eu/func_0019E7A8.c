/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B150(s32);                         /* extern */
M2C_UNK func_0019E718(s32);                         /* extern */

void func_0019E7A8(void *arg0) {
    s32 temp_a0;
    s32 temp_gp;
    u32 temp_v1;
    void *temp_s1;
    void *temp_s1_2;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x20);
    if (temp_v1 != 0x8000000A) {
        temp_s1 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_v1 <= 0x8000000AU) {
            if (temp_v1 != 0x80000009) {

            } else {
                M2C_FIELD(temp_s1, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
                M2C_FIELD(temp_s1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
            }
        }
    } else {
        temp_s1_2 = M2C_FIELD(arg0, void **, 0x1C);
        if (M2C_FIELD(temp_s1_2, M2C_UNK (**)(s32), 0x1C) != NULL) {
            temp_gp = M2C_FIELD(temp_s1_2, s32 *, 0x18);
            M2C_FIELD(temp_s1_2, M2C_UNK (**)(s32), 0x1C)(M2C_FIELD(temp_s1_2, s32 *, 0x20));
        }
    }
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 8);
    if (temp_a0 >= 0) {
        func_0019B150(temp_a0);
    }
    func_0019E718(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0) = 0;
}
