/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001131E4(M2C_UNK);                     /* extern */
M2C_UNK func_00113418(M2C_UNK);                     /* extern */
M2C_UNK func_001134BC(void *, M2C_UNK);             /* extern */
M2C_UNK func_001136DC(M2C_UNK);                     /* extern */
M2C_UNK func_00113770(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0011794C(M2C_UNK);                     /* extern */
extern void *D_006024A8;

void func_00117CCC(void *arg0) {
    s32 temp_s0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xF4);
    if (temp_v1 == 0x11) {
        M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK), 0x24)(1);
        M2C_FIELD(D_006024A8, s8 *, 1) = 1;
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        func_00113770(arg0, 0xA, 2);
        func_001134BC(arg0, 1);
        return;
    }
    if (temp_v1 == 0x10) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0xF8) - M2C_FIELD(arg0, s32 *, 0xF0);
        switch (temp_s0) {                          /* irregular */
        case 0:
            func_001136DC(1);
            M2C_FIELD(arg0, s32 *, 0x48) = 0;
            return;
        case 1:
            func_001131E4(1);
            M2C_FIELD(arg0, s32 *, 0x48) = 2;
            break;
        case 3:
            func_00113418(1);
            M2C_FIELD(arg0, s32 *, 0x48) = temp_s0;
            break;
        }
    } else {
        func_0011794C(1);
        func_001134BC(arg0, 1);
    }
}
