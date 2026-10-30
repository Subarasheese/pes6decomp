/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093D150();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_009B34B0();                                /* extern */
extern void *D_00A68CF8;

void func_00971A80(void) {
    s32 temp_v0;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = D_00A68CF8;
    temp_v0 = func_009B34B0();
    switch (temp_v0) {                              /* irregular */
    case 1:
        if ((func_0093D150() != 0) && (M2C_FIELD(temp_s0, s32 *, 4) != 4)) {
            func_009717C0(3);
            return;
        }
        func_0026E840(0x8C008005);
        if (func_0093D150() != 0) {
            var_v0 = 0x01FB003E;
        } else {
            var_v0 = 0x01FB000E;
        }
        M2C_FIELD(temp_s0, s32 *, 0) = var_v0;
        func_009717C0(0xA);
    case 0:
        return;
    }
}
