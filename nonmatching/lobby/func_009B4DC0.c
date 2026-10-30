/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002136B0(s32, s32);                    /* extern */
M2C_UNK func_0026E840(M2C_UNK, s32);                /* extern */
extern void *D_003EAD20;

void func_009B4DC0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    void *temp_s0;

    temp_s0 = D_003EAD20;
    var_a2 = 1;
    switch (arg0) {                                 /* irregular */
    case 0x10:
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 4);
        if (temp_v0 <= 0) {
            if (arg1 == 2) {
                var_a2 = 0;
            } else {
                M2C_FIELD(temp_s0, s32 *, 4) = (s32) (arg1 - 1);
            }
        } else {
            M2C_FIELD(temp_s0, s32 *, 4) = (s32) (temp_v0 - 1);
        }
        break;
    case 0x40:
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 4);
        if (temp_v1 >= (arg1 - 1)) {
            if (arg1 == 2) {
                var_a2 = 0;
            } else {
                M2C_FIELD(temp_s0, s32 *, 4) = 0;
            }
        } else {
            M2C_FIELD(temp_s0, s32 *, 4) = (s32) (temp_v1 + 1);
        }
        break;
    }
    if (var_a2 != 0) {
        func_0026E840(0x8400F802, var_a2);
    }
    func_002136B0(M2C_FIELD(temp_s0, s32 *, 0), M2C_FIELD(temp_s0, s32 *, 4));
}
